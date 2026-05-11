//
//  StoredConnection.swift
//  Connect
//
//  Created by Erik Sargent on 10/15/25.
//

import Foundation
import SwiftData

@MainActor
class DataModel {
    static let main = DataModel()
    static let inMemoryModel = DataModel(inMemory: true)

    let container: ModelContainer
    let context: ModelContext

    init(inMemory: Bool = false) {
        let modelConfig = ModelConfiguration(for: StoredConnection.self, isStoredInMemoryOnly: inMemory)

        guard let container = try? ModelContainer(for: StoredConnection.self, configurations: modelConfig) else {
            fatalError("Unable to initialize db")
        }

        self.container = container
        self.context = container.mainContext

    }

    func fetchConnections() -> [StoredConnection] {
        var request = FetchDescriptor<StoredConnection>(
            sortBy: [
                .init(\.lastConnected, order: .reverse)
            ]
        )

        request.includePendingChanges = true

        return (try? context.fetch(request)) ?? []
    }

    func fetchOrganizations() -> [StoredOrganization] {
        var request = FetchDescriptor<StoredOrganization>(
            sortBy: [
                .init(\.lastConnected, order: .reverse)
            ]
        )

        request.includePendingChanges = true

        return (try? context.fetch(request)) ?? []
    }

    func findConnection(from url: String) -> StoredConnection? {
        let domain = StoredConnection.extractDomain(from: url)
        let request = FetchDescriptor<StoredConnection>(
            predicate: #Predicate { $0.domain == domain }
        )
        do {
            return (try context.fetch(request)).first
        } catch let error {
            print(error)
            return nil
        }
    }

    func findOrg(with id: String) -> StoredOrganization? {
        let request = FetchDescriptor<StoredOrganization>(
            predicate: #Predicate { $0.id == id }
        )
        do {
            return (try context.fetch(request)).first
        } catch let error {
            print(error)
            return nil
        }
    }

    @discardableResult
    func setupDummyData() -> (StoredOrganization, StoredOrganization) {
        let existing = fetchOrganizations()
        if existing.count == 2 {
            return (existing[0], existing[1])
        }

        let org1 = StoredOrganization(id: "org_1", name: "Example Corp", logoUrl: "https://example.com/logo.png", website: "https://example.com")
        let org2 = StoredOrganization(id: "org_2", name: "Another Inc", logoUrl: "https://another.com/logo.png", website: "https://another.com")

        let conn1 = StoredConnection(url: "https://www.example.com/page1")
        conn1.organizations.append(org1)
        conn1.lastConnected = Date().addingTimeInterval(-3600)  // 1 hour ago
        conn1.visitCount = 5

        let conn2 = StoredConnection(url: "https://subdomain.another.com/home")
        conn2.organizations.append(org2)
        conn2.organizations.append(org1)
        conn2.lastConnected = Date().addingTimeInterval(-86400)  // 1 day ago
        conn2.visitCount = 3

        context.insert(org1)
        context.insert(org2)
        context.insert(conn1)
        context.insert(conn2)

        do {
            try context.save()
        } catch let error {
            print("Failed to save dummy data: \(error)")
        }

        return (org1, org2)
    }

    func deleteAllConnections() {
        try? context.transaction {
            let connections = fetchConnections()
            for conn in connections {
                context.delete(conn)
            }

            let orgs = try? context.fetch(FetchDescriptor<StoredOrganization>())
            for org in orgs ?? [] {
                context.delete(org)
            }
        }
    }
}


@Model
class StoredConnection {
    @Attribute(.unique) var id: String
    var domain: String
    var favicon: String
    var firstConnected: Date
    var lastConnected: Date
    var visitCount: Int
    @Relationship(deleteRule: .nullify, inverse: \StoredOrganization.connections) var organizations: [StoredOrganization]

    init(id: String, domain: String, favicon: String, firstConnected: Date, lastConnected: Date, visitCount: Int, organizations: [StoredOrganization] = []) {
        self.id = id
        self.domain = domain
        self.favicon = favicon
        self.firstConnected = firstConnected
        self.lastConnected = lastConnected
        self.visitCount = visitCount
        self.organizations = organizations
    }

    // Convenience initializer that matches the TypeScript behavior
    convenience init(url: String) {
        let domain = Self.extractDomain(from: url)
        let id = Self.generateConnectionId(for: domain)
        let favicon = Self.generateFaviconUrl(for: domain)
        let now = Date()

        self.init(
            id: id,
            domain: domain,
            favicon: favicon,
            firstConnected: now,
            lastConnected: now,
            visitCount: 1
        )
    }

    // Helper methods that mirror the TypeScript implementation
    fileprivate static func extractDomain(from url: String) -> String {
        guard let urlObj = URL(string: url) else {
            print("Invalid URL provided: \(url)")
            return ""
        }

        let hostname = urlObj.host ?? ""
        return hostname.replacingOccurrences(of: "^www\\.", with: "", options: .regularExpression)
    }

    private static func generateFaviconUrl(for domain: String) -> String {
        "https://www.google.com/s2/favicons?domain=\(domain)&sz=128"
    }

    private static func generateConnectionId(for domain: String) -> String {
        let sanitizedDomain = domain.replacingOccurrences(of: ".", with: "_")
        let timestamp = Int(Date().timeIntervalSince1970 * 1000)
        return "conn_\(sanitizedDomain)_\(timestamp)"
    }
}


@Model
class StoredOrganization {
    @Attribute(.unique) var id: String
    var name: String
    var logoUrl: String?
    var website: String?
    var lastConnected: Date = Date()
    var connections: [StoredConnection]

    init(id: String, name: String, logoUrl: String? = nil, website: String? = nil) {
        self.id = id
        self.name = name
        self.logoUrl = logoUrl
        self.website = website
        self.connections = []
    }
}
