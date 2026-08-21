//
//  ContentView.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import SwiftData
import SwiftUI

struct ContentView: View {
    @State private var uplinkManager = UplinkManager()
    @State private var showConnectionDetails: StoredOrganization?
    @Query(sort: \StoredOrganization.lastConnected, order: .reverse) private
        var organizations: [StoredOrganization]

    var body: some View {
        NavigationStack {
            VStack(spacing: 16) {
                if organizations.isEmpty {
                    Group {
                        Image("EmptyImage")
                        Text("No connections yet")
                            .font(.title3.bold())
                        Text("You can use a six-digit code to establish your first connection.")
                        Button("Add a connection") {
                            uplinkManager.showCodeSheet = true
                        }
                        .buttonStyle(BlackButtonStyle())
                        .accessibilityIdentifier("AddButton")
                    }
                    .padding(.horizontal)
                    .multilineTextAlignment(.center)
                    .fixedSize(horizontal: false, vertical: true)
                }
                else {
                    ConnectionsListView(
                        organizations: organizations,
                        showConnectionDetails: $showConnectionDetails,
                        uplinkManager: $uplinkManager
                    )
                }
            }
            .attachBackgroundUplinkBridge(uplinkManager: $uplinkManager)
            .sheet(isPresented: $uplinkManager.showCodeSheet) {
                EnterCodeSheetView(codeSheetError: $uplinkManager.codeSheetError, isLoading: $uplinkManager.loadingConnection) { code in
                    uplinkManager.processInput(code)
                }
            }
            .sheet(item: $showConnectionDetails) { organization in
                ConnectionDetailsView(organization: organization)
            }
            .navigationBarTitleDisplayMode(.inline)
            .navigationTitle("Connections")
        }
    }
}


#Preview("Dummy Orgs") {
    let model = DataModel.inMemoryModel
    model.setupDummyData()

    return ContentView()
        .modelContainer(model.container)
}

#Preview("Empty State") {
    let model = DataModel.init()

    return ContentView()
        .modelContainer(model.container)
}
