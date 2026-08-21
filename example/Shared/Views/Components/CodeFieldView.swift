//
//  CodeFieldView.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import Combine
import SwiftUI
import UIKit

@Observable
final class CodeInputData {
    var codeString = "" {
        didSet {
            updateDigits()
        }
    }
    var currentIndex: Int?
    private(set) var digits: [Int?] = .init(repeating: nil, count: CodeInput.numberOfDigits)

    @ObservationIgnored var makeFirstResponder: (() -> Void)?
    @ObservationIgnored var submitCode: ((String) -> Void)?

    func updateDigits() {
        var digits: [Int?] = Array(codeString.map(String.init).compactMap(Int.init).prefix(CodeInput.numberOfDigits))
        if digits.count < CodeInput.numberOfDigits {
            digits.append(contentsOf: [Int?](repeating: nil, count: CodeInput.numberOfDigits - digits.count))
        }

        self.digits = digits
        self.currentIndex = codeString.compactMap({ $0 }).count

        if codeString.count == CodeInput.numberOfDigits {
            let codeString = self.codeString
            if let submitCode {
                // Small delay here or the last digit never appears to be typed
                DispatchQueue.main.asyncAfter(deadline: .now() + 0.1) {
                    submitCode(codeString)
                }
            }
        }
    }
}


/// This is a nice textfield-like view to handle the 6 digit connect code input. It registers with the system as a UIKeyInput to massively simplify text input, then uses SwiftUI to do the actual rendering into separate digits. Accessibility is added manually. Don't use this directly, add a CodeInputRepresentableView which will embed this view into SwiftUI.
final class CodeInput: UIView, UIKeyInput {
    var data: CodeInputData
    private var contentView: UIView?

    static let numberOfDigits = 6

    init(data: CodeInputData, frame: CGRect = .zero) {
        self.data = data
        super.init(frame: frame)
        setupView()
    }

    required init?(coder: NSCoder) {
        data = .init()
        super.init(coder: coder)
        setupView()
    }

    private func setupView() {
        let configuration = UIHostingConfiguration {
            CodeInputDigitView(data: data)
        }

        // Create the content view from the configuration
        let hostingView = configuration.makeContentView()
        hostingView.translatesAutoresizingMaskIntoConstraints = false
        hostingView.backgroundColor = .clear

        addSubview(hostingView)

        NSLayoutConstraint.activate([
            hostingView.topAnchor.constraint(equalTo: topAnchor),
            hostingView.bottomAnchor.constraint(equalTo: bottomAnchor),
            hostingView.leadingAnchor.constraint(equalTo: leadingAnchor),
            hostingView.trailingAnchor.constraint(equalTo: trailingAnchor)
        ])

        self.contentView = hostingView

        data.makeFirstResponder = { [weak self] in
            self?.becomeFirstResponder()
            self?.data.updateDigits()
        }

        let tap = UITapGestureRecognizer(target: self, action: #selector(didTap))
        addGestureRecognizer(tap)

        accessibilityLabel = "Code"
        accessibilityIdentifier = "CodeInput"
        accessibilityTraits = .button
        isAccessibilityElement = true
        accessibilityFrameBlock = { [weak self] in
            self?.bounds ?? .zero
        }
        accessibilityValueBlock = { [weak self] in
            self?.data.codeString ?? ""
        }
    }

    var hasText: Bool {
        !data.codeString.isEmpty
    }

    func insertText(_ text: String) {
        guard let value = Int(text) else { return }
        var newString = data.codeString.appending(String(value))
        if newString.count > CodeInput.numberOfDigits {
            newString = String(newString.prefix(CodeInput.numberOfDigits))
        }

        data.codeString = newString
    }

    func deleteBackward() {
        guard !data.codeString.isEmpty else { return }
        data.codeString.removeLast()
    }

    override var canBecomeFirstResponder: Bool {
        true
    }

    override func resignFirstResponder() -> Bool {
        data.currentIndex = nil
        return super.resignFirstResponder()
    }

    var keyboardType: UIKeyboardType = .numberPad
    var allowsNumberPadPopover = true

    @IBAction private func didTap() {
        data.makeFirstResponder?()
    }
}


struct CodeInputRepresentableView: UIViewRepresentable {
    var data: CodeInputData

    init(data: CodeInputData, onSubmit: @escaping (String) -> Void) {
        self.data = data
        data.submitCode = onSubmit
    }

    func makeUIView(context: Context) -> CodeInput {
        CodeInput(data: data)
    }

    func updateUIView(_ uiView: CodeInput, context: Context) {}
}


struct CodeInputDigitView: View {
    var data: CodeInputData

    var body: some View {
        HStack(spacing: 20) {
            fieldBlock(for: 0..<(CodeInput.numberOfDigits / 2))

            Circle()
                .fill(.separator)
                .frame(width: 2, height: 2)

            fieldBlock(for: (CodeInput.numberOfDigits / 2)..<CodeInput.numberOfDigits)
        }
        .multilineTextAlignment(.center)
        .font(.headline)
        .containerShape(Rectangle())
    }

    func fieldBlock(for block: Range<Int>) -> some View {
        var isHighlighted = false
        if let currentIndex = data.currentIndex {
            isHighlighted = block.contains(currentIndex)
        }

        return HStack(spacing: 0) {
            ForEach(block, id: \.self) { index in
                field(for: index)
                    .frame(width: 35, height: 48)

                if index < block.endIndex - 1 {
                    Rectangle()
                        .fill(isHighlighted ? .blue : Color(.separator))
                        .frame(width: 1, height: 48)
                }
            }
        }
        .background(
            RoundedRectangle(cornerRadius: 12)
                .stroke(isHighlighted ? .blue : Color(.separator), lineWidth: 1)
        )
        .shadow(color: isHighlighted ? .blue.opacity(0.5) : .clear, radius: 4, x: 0, y: 0)
        .background {
            if isHighlighted {
                RoundedRectangle(cornerRadius: 12)
                    .fill(.blue.opacity(0.05))
            }
        }
        .animation(.snappy, value: isHighlighted)
    }

    @ViewBuilder
    func field(for index: Int) -> some View {
        if let digit = data.digits[index] {
            Text("\(digit)")
        }
        else {
            Text("")
                .overlay {
                    if index == data.codeString.count && data.currentIndex != nil {
                        BlinkingCursor()
                    }
                }
        }
    }
}


struct BlinkingCursor: View {
    @State private var isVisible = true

    var body: some View {
        Rectangle()
            .fill(.tint)
            .frame(width: 2, height: 20)
            .opacity(isVisible ? 1 : 0)
            .onAppear {
                withAnimation(.easeInOut(duration: 0.5).repeatForever(autoreverses: true)) {
                    isVisible = false
                }
            }
    }
}


#Preview {
    let data = CodeInputData()
    data.codeString = "1234"

    return CodeInputRepresentableView(data: data) { _ in }
}
