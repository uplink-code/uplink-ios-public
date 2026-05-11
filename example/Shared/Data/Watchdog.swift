//
//  Watchdog.swift
//  Connect
//
//  Created by Erik Sargent on 11/14/25.
//

import Combine
import Foundation

@MainActor class Watchdog {
    private let subject = PassthroughSubject<Void, Never>()
    private var cancellable: (any Cancellable)?

    /// A subject that emits when the watchdog is triggered after the debounce time.
    var triggered = PassthroughSubject<Void, Never>()

    init(debounceTime: TimeInterval = 10) {
        cancellable =
            subject
            .debounce(for: .seconds(debounceTime), scheduler: RunLoop.main)
            .sink { [weak self] _ in
                self?.triggered.send(())
            }
    }

    /// Feed the watchdog to reset its timer.
    func feed() {
        subject.send(())
    }
}
