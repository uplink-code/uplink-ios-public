//
//  ConnectionsListView.swift
//  ConnectApp
//
//  Created by Erik Sargent on 5/11/26.
//

import SwiftUI

struct ConnectionsListView: View {
    var organizations: [StoredOrganization]
    @Binding var showConnectionDetails: StoredOrganization?
    @Binding var uplinkManager: UplinkManager

    var body: some View {
        Form {
            ForEach(organizations) { organization in
                Section {
                    ConnectionRow(organization: organization, showConnectionDetails: $showConnectionDetails, uplinkManager: $uplinkManager)
                }
            }

            // Pad out bottom of table for floating add button
            Color.clear
                .frame(height: 80)
                .listRowBackground(Color.clear)
        }
        .overlay(alignment: .bottom) {
            Button {
                uplinkManager.showCodeSheet = true
            } label: {
                Image(systemName: "plus")
                    .font(.title)
            }
            .buttonStyle(BlackButtonStyle(makeCircular: true))
            .accessibilityIdentifier("AddButton")
            .padding(6)
        }
    }
}

private struct ConnectionRow: View {
    @State private var gradientPhase: CGFloat = 0
    @State private var showBorder = false

    var organization: StoredOrganization
    @Binding var showConnectionDetails: StoredOrganization?
    @Binding var uplinkManager: UplinkManager

    var body: some View {
        Button {
            showConnectionDetails = organization
        } label: {
            HStack(spacing: 16) {
                OrgLogoView(org: organization)

                VStack(alignment: .leading, spacing: 5) {
                    Text(organization.name)
                        .font(.headline)

                    Group {
                        if let current = uplinkManager.currentConnection, current.orgId == organization.id {
                            HStack(spacing: 4) {
                                if current.isEstablished {
                                    Circle()
                                        .fill(.teal)
                                        .frame(width: 8, height: 8)
                                    Text("Running")
                                        .accessibilityIdentifier("ConnectedStatusLabel")
                                }
                                else {
                                    Circle()
                                        .fill(.green)
                                        .frame(width: 8, height: 8)
                                    Text("Connected")
                                        .accessibilityIdentifier("ConnectedStatusLabel")
                                }

                                Spacer()
                            }
                        }
                        else {
                            Text("Last connected \(organization.lastConnected, style: .relative) ago")
                        }
                    }
                    .foregroundStyle(.secondary)
                    .font(.footnote)
                }
            }
            .padding(.vertical, 8)
            .foregroundStyle(
                Color(UIColor.label),
                Color(UIColor.secondaryLabel)
            )
        }
        .listRowBackground(rowBackground())
        .onAppear {
            withAnimation(.linear(duration: 10).repeatForever(autoreverses: false)) {
                gradientPhase = 1
            }
        }
        .onChange(of: uplinkManager.currentConnection?.isEstablished) { _, _ in
            checkBorderState()
        }
    }

    func checkBorderState() {
        var animate = false
        if let current = uplinkManager.currentConnection, current.isEstablished && current.orgId == organization.id {
            animate = true
        }

        if showBorder != animate {
            print("Animating border change to \(animate) for org \(organization.name)")
            withAnimation {
                showBorder = animate
            }
        }
    }

    func rowBackground() -> some View {
        ZStack {
            Color(UIColor.secondarySystemGroupedBackground)

            RainbowBorder(phase: $gradientPhase)
                .id("RainbowBorder")
                .opacity(showBorder ? 1.0 : 0.0)
                .transition(.opacity)
                .animation(.snappy, value: showBorder)
        }
    }
}
