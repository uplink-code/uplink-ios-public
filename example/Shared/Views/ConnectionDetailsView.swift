//
//  ConnectionDetailsView.swift
//  Connect
//
//  Created by Erik Sargent on 10/16/25.
//

import SwiftData
import SwiftUI

struct ConnectionDetailsView: View {
    var organization: StoredOrganization

    var body: some View {
        VStack(alignment: .center, spacing: 10) {
            HStack {
                OrgLogoView(org: organization)

                Text(organization.name)
                    .font(.headline)
            }
            .frame(height: 50)
            .padding(.top, 16)

            // 10px between

            ScrollView {
                VStack(alignment: .leading, spacing: 5) {
                    // 82px each
                    ForEach(organization.connections.sorted(by: { $0.lastConnected < $1.lastConnected })) { connection in
                        HStack(alignment: .center) {
                            ConnectionFaviconView(conn: connection)

                            VStack(alignment: .leading, spacing: 10) {
                                Text(connection.domain)
                            }

                            Spacer()
                        }
                        .frame(height: 32)

                        // 5px space

                        HStack {
                            Text("Last connected \(connection.lastConnected, style: .relative) ago")
                            Spacer()
                        }
                        .foregroundStyle(.secondary)
                        .font(.footnote)
                        .frame(height: 20)
                        .padding(.leading, 42)  // Push in width of favicon+spacing
                        .padding(.bottom, 10)
                    }

                    // 15px between (5 space and 10 padding)
                }
            }

            if organization.connections.isEmpty {
                Text("No connections yet")
                    .foregroundStyle(.secondary)
                    .font(.subheadline)
                    .padding(.bottom, 80)
            }
        }
        .padding(.horizontal, 32)
        .presentationDetents([
            .height(
                CGFloat(
                    organization.connections.count * 82  // 82px height for conn w/ space
                        + 60  // title height w/ space
                        + 46  // padding for top/bottom safe area
                        + (organization.connections.isEmpty ? 70 : 0)  // extra space for no connections text
                )), .large
        ])
    }
}


#Preview {
    let model = DataModel.inMemoryModel
    let (org, _) = model.setupDummyData()

    Color.indigo
        .ignoresSafeArea()
        .sheet(isPresented: .constant(true)) {
            ConnectionDetailsView(organization: org).modelContainer(model.container)
        }
}
