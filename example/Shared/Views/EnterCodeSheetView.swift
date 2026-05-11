//
//  EnterCodeSheetView.swift
//  Connect
//
//  Created by Erik Sargent on 10/14/25.
//

import SwiftUI

struct EnterCodeSheetView: View {
    @Binding var codeSheetError: UplinkManager.CodeSheetError?
    @Binding var isLoading: Bool
    @State private var codeData = CodeInputData()
    @State private var currentPresentationDetent: PresentationDetent = .medium
    @Environment(\.accessibilityVoiceOverEnabled) var voiceOverEnabled

    var submitCode: (String) -> Void

    var body: some View {
        VStack(spacing: 16) {
            Spacer()

            if isLoading {
                ProgressView()
            } else {
                VStack(spacing: 16) {
                    Text("Enter your connect code")
                        .font(.headline)

                    if !voiceOverEnabled {
                        CodeInputRepresentableView(data: codeData, onSubmit: submitCode)
                            .frame(height: 60)
                    } else {
                        // Custom code input is hard with voice over on, fall back to simple field
                        TextField("Code", text: $codeData.codeString)
                            .font(.largeTitle)
                            .fontWeight(.bold)
                            .keyboardType(.numberPad)
                            .frame(height: 60)
                            .multilineTextAlignment(.center)
                            .onChange(of: codeData.codeString) { _, newValue in
                                let trimmed = newValue.trimmingCharacters(in: .whitespaces)
                                if trimmed.count >= 6 {
                                    codeData.submitCode?(trimmed)
                                }
                            }
                    }
                }
                .compositingGroup()
                .contentTransition(.identity)
                .frame(height: 100)
            }

            Spacer()
        }
        .task {
            codeData.makeFirstResponder?()
        }
        .presentationDetents([.medium, .fraction(0.75), .large], selection: $currentPresentationDetent)
        .presentationBackground(Color(.systemBackground))
        .sheet(
            item: $codeSheetError,
            onDismiss: {
                codeData.codeString = ""
                codeData.updateDigits()
            },
            content: { error in
                HelpSheet(state: error)
                    .presentationDetents([.fraction(0.4)])
            })
    }
}


#Preview {
    EnterCodeSheetView(codeSheetError: .constant(nil), isLoading: .constant(false)) { _ in }
}
