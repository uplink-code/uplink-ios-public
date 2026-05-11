//
//  ConnectApp.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import SwiftData
import SwiftUI

@main
struct ConnectApp: App {
    var body: some Scene {
        WindowGroup {
            ContentView()
                .modelContext(DataModel.main.context)
        }
    }
}
