import XCTest
import SwiftTreeSitter
import TreeSitterPHP

final class TreeSitterPHPTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language_php = Language(language: tree_sitter_php())
        XCTAssertNoThrow(try parser.setLanguage(language_php),
                         "Error loading PHP grammar")
        let language_php_only = Language(language: tree_sitter_php_only())
        XCTAssertNoThrow(try parser.setLanguage(language_php_only),
                         "Error loading PHP-Only grammar")
    }
}
