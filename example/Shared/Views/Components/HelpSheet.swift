//
//  HelpSheet.swift
//  Connect
//
//  Created by Erik Sargent on 11/7/25.
//

import SwiftUI

struct HelpSheet: View {
    @Environment(\.dismiss) private var dismiss
    var state: UplinkManager.CodeSheetError

    var body: some View {
        VStack(alignment: .center, spacing: 24) {
            switch state {
            case .invalidCode:
                Text("Unable to connect with this Connect code")
                    .font(.headline)
                    .multilineTextAlignment(.center)

                VStack(alignment: .leading, spacing: 24) {
                    numberedItem(number: 1, text: Text("Make sure you have a numeric for a Connect Session"))
                    numberedItem(number: 2, text: Text("Try connecting with the new code you received"))
                }
                .font(.callout)
                .padding(.bottom, 24)
            }

            HStack {
                Button("Got it") {
                    dismiss()
                }
            }
            .buttonStyle(BlackButtonStyle())
        }
        .padding(.horizontal)
    }

    func numberedItem(number: Int, text: Text) -> some View {
        HStack(
            alignment: .firstTextBaseline, spacing: 8,
            content: {
                Text("")
                    .font(.footnote)
                    .frame(width: 8, height: 8)
                    .background(
                        Circle()
                            .fill(Color(uiColor: .secondarySystemFill))
                    )

                text
            })
    }
}


#Preview("Invalid") {
    HelpSheet(state: .invalidCode)
}
