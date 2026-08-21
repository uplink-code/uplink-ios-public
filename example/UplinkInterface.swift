//
//  UplinkInterface.swift
//  ConnectApp
//
//  Created by Erik Sargent on 5/11/26.
//

import SwiftUI
import UIKit

extension View {
    func attachBackgroundUplinkBridge(uplinkManager: Binding<UplinkManager>) -> some View {
        self.background(ConnectionVCBridge(uplinkManager: uplinkManager))
    }
}


struct ConnectionVCBridge: UIViewControllerRepresentable {
    @Binding var uplinkManager: UplinkManager

    func makeUIViewController(context: Context) -> some UIViewController {
        let controller = UIViewController()
        controller.view.backgroundColor = .clear
        uplinkManager.sourceVC = controller
        return controller
    }

    func updateUIViewController(_ uiViewController: UIViewControllerType, context: Context) {
    }
}
