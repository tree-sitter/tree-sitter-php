// swift-tools-version:5.3
import PackageDescription

let package = Package(
  name: "TreeSitterPHP",
  products: [
    .library(name: "TreeSitterPHP", targets: ["TreeSitterPHP"]),
  ],
  dependencies: [
    .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
  ],
  targets: [
    .target(
      name: "TreeSitterPHP",
      path: ".",
      sources: [
        "php/src/parser.c",
        "php/src/scanner.c",
        "php_only/src/parser.c",
        "php_only/src/scanner.c",
      ],
      resources: [
        .copy("queries")
      ],
      publicHeadersPath: "bindings/swift",
      cSettings: [.headerSearchPath("php/src")]
    ),
    .testTarget(
      name: "TreeSitterPHPTests",
      dependencies: [
        .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
        "TreeSitterPHP",
      ],
      path: "bindings/swift/TreeSitterPHPTests"
    )
  ]
)
