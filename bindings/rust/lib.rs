//! This crate provides PHP language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//! <?php
//!   echo "Hello, World!";
//! ?>
//! "#;
//! let mut parser = Parser::new();
//! parser
//!     .set_language(&tree_sitter_php::language_php())
//!     .expect("Error loading PHP grammar");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

extern "C" {
    fn tree_sitter_php() -> Language;
    fn tree_sitter_php_only() -> Language;
}

/// Get the tree-sitter [Language][] for PHP.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_php() -> Language {
    unsafe { tree_sitter_php() }
}

/// Get the tree-sitter [Language][] for PHP Only.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language_php_only() -> Language {
    unsafe { tree_sitter_php_only() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const PHP_NODE_TYPES: &str = include_str!("../../php/src/node-types.json");
pub const PHP_ONLY_NODE_TYPES: &str = include_str!("../../php_only/src/node-types.json");

/// The syntax highlighting query for PHP.
pub const HIGHLIGHTS_QUERY: &str = include_str!("../../queries/highlights.scm");

/// The injection query for PHP.
pub const INJECTIONS_QUERY: &str = include_str!("../../queries/injections.scm");

/// The symbol tagging query for PHP.
pub const TAGS_QUERY: &str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::language_php())
            .expect("Error loading PHP grammar");
    }
}
