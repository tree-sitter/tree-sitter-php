// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPHP",
    products: [
        .library(name: "TreeSitterPHP", targets: ["TreeSitterPHP", "TreeSitterPHPOnly"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterPHP",
            path: "tree-sitter-php",
                exclude: [
                    "corpus",
                    "grammar.js",
                ],
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
        .target(name: "TreeSitterPHPOnly",
                path: "tree-sitter-php-only",
                exclude: [
                    "corpus",
                    "grammar.js",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
