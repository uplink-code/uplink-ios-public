//
//  UplinkManager.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import Combine
import Foundation
import SafariServices
import SwiftData
import SwiftUI
import UplinkIOS

struct Connection: Identifiable, Hashable {
    var url: String
    var workerId: String
    var isEstablished: Bool
    var orgId: String

    var id: String { workerId }
}


@Observable @MainActor
final class UplinkManager {
    @ObservationIgnored private var uplink = Uplink()
    @ObservationIgnored private var workers: [String: Worker] = [:]
    @ObservationIgnored weak var sourceVC: UIViewController?
    @ObservationIgnored private var uplinkWatchdog = Watchdog()
    @ObservationIgnored private var uplinkWatchdogCancellable: (any Cancellable)?

    @ObservationIgnored private let modelConfig = ModelConfiguration(isStoredInMemoryOnly: true)

    var currentConnection: Connection?
    var loadingConnection = false
    var showCodeSheet = false
    var loadingOrgAvatarUrl: String?
    var codeSheetError: CodeSheetError?

    enum ConnectionError: Error {
        case noSourceViewController
        case workerNotFound
    }

    enum CodeSheetError: Identifiable {
        case invalidCode

        var id: Self { self }
    }

    init() {
        uplinkWatchdogCancellable = uplinkWatchdog.triggered.sink { [weak self] in
            guard var currentConnection = self?.currentConnection, currentConnection.isEstablished else { return }

            withAnimation {
                currentConnection.isEstablished = false
                self?.currentConnection = currentConnection
            }
        }
    }

    func processInput(_ token: String) {
        withAnimation {
            loadingConnection = true
        }

        Task {
            if let currentConnection {
                print("Disconnect existing connection")
                try? await disconnect(connection: currentConnection)
            }

            guard let sessionToken = await handleInputOTPCode(token),
                let details = try? await SessionService.getSessionDetails(jwtToken: sessionToken)
            else {
                withAnimation {
                    loadingConnection = false
                    codeSheetError = .invalidCode
                }
                return
            }

            let org = details.organization
            let sessionUrl = details.sessionUrl

            loadingOrgAvatarUrl = org.avatarUrl
            setupStoredOrganization(org: org)

            withAnimation {
                loadingConnection = false
                showCodeSheet = false
            }

            await connect(sessionUrl: sessionUrl, organization: org)
        }
    }

    /// Handles validating OTP codes if necessary
    /// - Parameter token: the OTP code that the user has input
    /// - Returns: The session token if validation was successful, or nil if it failed
    private func handleInputOTPCode(_ token: String) async -> String? {
        guard let validation = try? await SessionService.validateOtpCode(code: token) else {
            return nil
        }

        return validation.sessionToken
    }

    private func setupStoredConnection(url: String, org: Organization) {
        try? DataModel.main.context.transaction {
            let connection: StoredConnection
            if let existing = DataModel.main.findConnection(from: url) {
                existing.lastConnected = Date()
                existing.visitCount += 1

                connection = existing
            } else {
                connection = StoredConnection(url: url)
            }

            if !connection.organizations.contains(where: { $0.id == org.id }) {
                if let storedOrg = DataModel.main.findOrg(with: org.id) {
                    connection.organizations.append(storedOrg)
                } else {
                    let newOrg = StoredOrganization(id: org.id, name: org.name, logoUrl: org.avatarUrl)
                    DataModel.main.context.insert(newOrg)
                    connection.organizations.append(newOrg)
                }
            }
        }

        print(DataModel.main.fetchConnections())
    }

    private func setupStoredOrganization(org: Organization) {
        try? DataModel.main.context.transaction {
            if let existing = DataModel.main.findOrg(with: org.id) {
                existing.lastConnected = Date()
            } else {
                let newOrg = StoredOrganization(id: org.id, name: org.name, logoUrl: org.avatarUrl)
                DataModel.main.context.insert(newOrg)
            }
        }
    }

    private func connect(sessionUrl: String, organization: Organization) async {
        let baseUrl = sessionUrl.components(separatedBy: "?").first ?? sessionUrl

        do {
            let workerId = try await connect(session: baseUrl) { [weak self] event in
                print(event)

                guard let self else { return }

                switch event.eventType {
                case .pageRequest:
                    if let details = event.details, let url = details["url"] as? String {
                        print("Received a page.request to \(url)")
                        self.setupStoredConnection(url: url, org: organization)
                    }

                    if var currentConnection = self.currentConnection, currentConnection.isEstablished == false {
                        withAnimation {
                            currentConnection.isEstablished = true
                            self.currentConnection = currentConnection
                        }
                    }

                    if self.loadingConnection {
                        withAnimation {
                            loadingConnection = false
                        }
                    }
                case .terminated:
                    //                    self.currentConnection = nil
                    print("Worker terminated")
                }
            }

            let connection = Connection(url: baseUrl, workerId: workerId, isEstablished: false, orgId: organization.id)
            self.currentConnection = connection

            try await accept(connection: connection)
        } catch let error {
            print(error)
        }
    }

    struct WorkerEvent: Sendable {
        var eventType: EventType
        var details: [String: any Sendable]?

        enum EventType: String {
            case pageRequest = "page.request"
            case terminated = "uplink.terminated"
        }
    }

    private func connect(session: String, onWorkerEvent: @escaping (_ event: WorkerEvent) -> Void) async throws -> String {
        guard let sourceVC else { throw ConnectionError.noSourceViewController }

        let worker = uplink.worker(controller: sourceVC)
        worker.options.apiHost = "https://api.uplink.build"

        let workerId = UUID().uuidString
        workers[workerId] = worker

        worker.watch { [weak self] event in
            switch event {
            case _ as UplinkIOS.WorkerEvent.Terminated:
                onWorkerEvent(.init(eventType: .terminated))
            case let e as PageEvent.Request:
                onWorkerEvent(
                    .init(
                        eventType: .pageRequest,
                        details: [
                            "url": e.url, "method": e.method, "headers": e.headers
                        ])
                )
            default:
                break
            }

            self?.uplinkWatchdog.feed()
        }

        try await worker.connect(session: session)
        print("I have connected to \(session)")

        return workerId
    }

    private func accept(connection: Connection) async throws {
        guard let worker = workers[connection.workerId] else {
            throw ConnectionError.workerNotFound
        }

        print("GOT A WORKER \(worker)")

        Task {
            try await worker.accept()
            self.currentConnection = nil
        }
        print("ACCEPTED")
    }

    private func disconnect(connection: Connection) async throws {
        guard let worker = workers[connection.workerId] else {
            throw ConnectionError.workerNotFound
        }

        print("DISCONNECTING WORKER \(worker)")

        self.currentConnection = nil
        Task {
            try await worker.close()
        }
        print("DISCONNECTED")
    }
}
