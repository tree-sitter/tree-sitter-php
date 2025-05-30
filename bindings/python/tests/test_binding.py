from unittest import TestCase

import tree_sitter_php
from tree_sitter import Language, Parser

class TestLanguage(TestCase):
    def test_php_grammar(self):
        language = Language(tree_sitter_php.language_php())
        parser = Parser(language)
        tree = parser.parse(b"<?php echo 'Hello, World!';")
        self.assertFalse(tree.root_node.has_error)

    def test_php_only_grammar(self):
        language = Language(tree_sitter_php.language_php_only())
        parser = Parser(language)
        tree = parser.parse(b"echo 'Hello, World!';")
        self.assertFalse(tree.root_node.has_error)

