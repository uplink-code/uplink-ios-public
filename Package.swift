// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "uplink-ios-public",
    platforms: [.iOS(.v15)],
    products: [
        .library(
            name: "Uplink",
            targets: ["Uplink", "MuppetIOS"]),
        .library(
            name: "Uplink-Dynamic",
            targets: ["Uplink-Dynamic", "MuppetIOS-Dynamic"])
    ],
    targets: [
        .binaryTarget(
            name: "Uplink",
            path: "artifacts/Uplink.xcframework"),
        .binaryTarget(
            name: "Uplink-Dynamic",
            path: "artifacts/Uplink-Dynamic.xcframework"),
        .binaryTarget(
            name: "MuppetIOS",
            path: "artifacts/MuppetIOS.xcframework"),
        .binaryTarget(
            name: "MuppetIOS-Dynamic",
            path: "artifacts/MuppetIOS-Dynamic.xcframework")
    ]
)
