from unittest import TestCase

import tree_sitter, tree_sitter_php


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_php.language_php())
            tree_sitter.Language(tree_sitter_php.language_php_only())
        except Exception:
            self.fail("Error loading PHP grammar")
