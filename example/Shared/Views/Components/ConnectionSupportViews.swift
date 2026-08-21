//
//  ConnectionSupportViews.swift
//  Connect
//
//  Created by Erik Sargent on 11/7/25.
//

import SwiftUI

struct OrgLogoView: View {
    var org: StoredOrganization

    var body: some View {
        Group {
            if let logo = org.logoUrl, let logoUrl = URL(string: logo) {
                AsyncImage(url: logoUrl) { image in
                    image
                        .resizable()
                        .scaledToFit()
                        .mask(Circle())
                } placeholder: {
                    ProgressView()
                }
            }
            else {
                Text(org.name.prefix(1))
                    .font(.headline)
                    .foregroundStyle(.secondary)
                    .padding(8)
                    .background {
                        Circle()
                            .stroke(.separator)
                            .frame(width: 40, height: 40)
                    }
            }
        }
        .frame(width: 40, height: 40)
    }
}


struct ConnectionFaviconView: View {
    var conn: StoredConnection

    var body: some View {
        Group {
            if let faviconUrl = URL(string: conn.favicon) {
                AsyncImage(url: faviconUrl) { image in
                    image
                        .resizable()
                        .scaledToFit()
                        .mask(Circle())
                } placeholder: {
                    ProgressView()
                }
            }
            else {
                ProgressView()
            }
        }
        .frame(width: 32, height: 32)
    }
}
