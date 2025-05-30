package tree_sitter_php_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_php "github.com/tree-sitter/tree-sitter-php/bindings/go"
)

func TestPHPGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_php.LanguagePHP())
	if language == nil {
		t.Errorf("Error loading PHP grammar")
	}

	sourceCode := []byte("<?php echo 'Hello, World!';")
	parser := tree_sitter.NewParser()
	defer parser.Close()
	parser.SetLanguage(language)

	tree := parser.Parse(sourceCode, nil)
	if tree == nil || tree.RootNode().HasError() {
		t.Errorf("Error parsing PHP")
	}
}

func TestPHPOnlyGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_php.LanguagePHPOnly())
	if language == nil {
		t.Errorf("Error loading PHP-Only grammar")
	}

	sourceCode := []byte("echo 'Hello, World!';")
	parser := tree_sitter.NewParser()
	defer parser.Close()
	parser.SetLanguage(language)

	tree := parser.Parse(sourceCode, nil)
	if tree == nil || tree.RootNode().HasError() {
		t.Errorf("Error parsing PHP")
	}
}
