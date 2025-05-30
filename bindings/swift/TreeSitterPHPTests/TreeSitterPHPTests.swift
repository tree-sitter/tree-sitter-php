import XCTest
import SwiftTreeSitter
import TreeSitterPHP

final class TreeSitterPHPTests: XCTestCase {
    func testPHPGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_php())
        try parser.setLanguage(language);

        let source = "<?php echo 'Hello, World!';";

        let tree = try XCTUnwrap(parser.parse(source))
        let root = try XCTUnwrap(tree.rootNode)

        XCTAssertFalse(root.hasError)
    }

    func testCanLoadPHPOnlyGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_php_only())
        try parser.setLanguage(language);

        let source = "echo 'Hello, World!';";

        let tree = try XCTUnwrap(parser.parse(source))
        let root = try XCTUnwrap(tree.rootNode)

        XCTAssertFalse(root.hasError)
    }
}
