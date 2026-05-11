//
//  Borders.swift
//  Connect
//
//  Created by Erik Sargent on 11/7/25.
//

import SwiftUI

struct RainbowBorder: View {
    @Binding var phase: CGFloat

    private let gradientColors: [Color] = [
        .yellow, .orange, .red, .purple, .cyan, .blue, .yellow
    ]

    var body: some View {
        AngularGradient(
            colors: [
                .yellow, .orange, .red, .purple, .cyan, .blue, .yellow
            ],
            center: .center,
            angle: .degrees(Double(phase) * 360)
        )
        .mask(RoundedRectangle(cornerRadius: 26).stroke(lineWidth: 3))
    }
}


#Preview("RainbowBorder") {
    @Previewable @State var phase: CGFloat = 0.0

    RainbowBorder(phase: $phase)
        .frame(width: 300, height: 200)
        .onAppear {
            withAnimation(.linear(duration: 10).repeatForever(autoreverses: false)) {
                phase = 1.0
            }
        }
}
