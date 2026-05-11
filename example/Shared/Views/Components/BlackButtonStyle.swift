//
//  BlackButtonStyle.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import SwiftUI

struct BlackButtonStyle: ButtonStyle {
    var makeCircular = false

    func makeBody(configuration: Configuration) -> some View {
        configuration.label
            .font(.headline)
            .foregroundStyle(Color(.systemBackground))
            .padding(.vertical, 12)
            .padding(.horizontal, 24)
            .background {
                if makeCircular {
                    Circle()
                        .fill(Color(configuration.isPressed ? .secondaryLabel : .label))
                } else {
                    RoundedRectangle(cornerRadius: 8)
                        .fill(Color(configuration.isPressed ? .secondaryLabel : .label))
                }
            }
    }
}


#Preview {
    Button("Hello world!") {}
        .buttonStyle(BlackButtonStyle())
}
