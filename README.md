# Uplink iOS SDK

See [uplink.build](https://uplink.build) for more information

## Requirements

- iOS 15.0+
- Swift Package Manager

## Installation

Add `https://github.com/uplink-code/uplink-ios-public.git` to your Swift package dependencies and link the `Uplink` product. The product includes its required `MuppetIOS` binary target.

Use `Uplink-Dynamic` only when your integration requires dynamic frameworks.

## Using release binaries in your own Swift package

Releases published with ZIP support include a `.xcframework.zip` for each static and dynamic framework, plus `checksums.txt` containing the SHA-256 checksum of each ZIP. Existing `.tar.gz` assets remain available.

To use the binaries directly, download `checksums.txt` from the [release](https://github.com/uplink-code/uplink-ios-public/releases) you want to use. Replace `<version>` and the checksum placeholders below with the release tag and the corresponding values from that file:

```swift
// swift-tools-version: 6.1
import PackageDescription

let version = "<version>"
let baseURL = "https://github.com/uplink-code/uplink-ios-public/releases/download/\(version)"

let package = Package(
    name: "UplinkBinaries",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "Uplink", targets: ["Uplink", "MuppetIOS"])
    ],
    targets: [
        .binaryTarget(
            name: "Uplink",
            url: "\(baseURL)/Uplink.xcframework.zip",
            checksum: "<Uplink ZIP checksum>"),
        .binaryTarget(
            name: "MuppetIOS",
            url: "\(baseURL)/MuppetIOS.xcframework.zip",
            checksum: "<MuppetIOS ZIP checksum>")
    ]
)
```

Uplink requires both frameworks from the same release. For dynamic linking, use the `-Dynamic` target names, ZIPs, and their corresponding checksums for both frameworks.

You can verify a downloaded ZIP with `swift package compute-checksum Uplink.xcframework.zip`. Use the published ZIP unchanged so its checksum matches. These URL-based targets download the release assets directly without checking out this repository.
