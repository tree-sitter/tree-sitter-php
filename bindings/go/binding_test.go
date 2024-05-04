package tree_sitter_php_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter-grammars/tree-sitter-php"
)

func TestCanLoadPHPGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_php.LanguagePHP())
	if language == nil {
		t.Errorf("Error loading PHP grammar")
	}
}

func TestCanLoadPHPOnlyGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_php.LanguagePHPOnly())
	if language == nil {
		t.Errorf("Error loading PHP-Only grammar")
	}
}
