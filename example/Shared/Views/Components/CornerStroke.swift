//
//  CornerStroke.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import SwiftUI

struct CornerStroke: Shape {
    let cornerRadius: CGFloat
    let cornerLength: CGFloat

    func path(in rect: CGRect) -> Path {
        var path = Path()

        // Top-left corner
        path.move(to: CGPoint(x: 0, y: cornerRadius + cornerLength))
        path.addLine(to: CGPoint(x: 0, y: cornerRadius))
        path.addArc(
            center: CGPoint(x: cornerRadius, y: cornerRadius),
            radius: cornerRadius,
            startAngle: .degrees(180),
            endAngle: .degrees(270),
            clockwise: false)
        path.addLine(to: CGPoint(x: cornerRadius + cornerLength, y: 0))

        // Top-right corner
        path.move(to: CGPoint(x: rect.width - cornerRadius - cornerLength, y: 0))
        path.addLine(to: CGPoint(x: rect.width - cornerRadius, y: 0))
        path.addArc(
            center: CGPoint(x: rect.width - cornerRadius, y: cornerRadius),
            radius: cornerRadius,
            startAngle: .degrees(270),
            endAngle: .degrees(0),
            clockwise: false)
        path.addLine(to: CGPoint(x: rect.width, y: cornerRadius + cornerLength))

        // Bottom-right corner
        path.move(to: CGPoint(x: rect.width, y: rect.height - cornerRadius - cornerLength))
        path.addLine(to: CGPoint(x: rect.width, y: rect.height - cornerRadius))
        path.addArc(
            center: CGPoint(x: rect.width - cornerRadius, y: rect.height - cornerRadius),
            radius: cornerRadius,
            startAngle: .degrees(0),
            endAngle: .degrees(90),
            clockwise: false)
        path.addLine(to: CGPoint(x: rect.width - cornerRadius - cornerLength, y: rect.height))

        // Bottom-left corner
        path.move(to: CGPoint(x: cornerRadius + cornerLength, y: rect.height))
        path.addLine(to: CGPoint(x: cornerRadius, y: rect.height))
        path.addArc(
            center: CGPoint(x: cornerRadius, y: rect.height - cornerRadius),
            radius: cornerRadius,
            startAngle: .degrees(90),
            endAngle: .degrees(180),
            clockwise: false)
        path.addLine(to: CGPoint(x: 0, y: rect.height - cornerRadius - cornerLength))

        return path
    }
}
