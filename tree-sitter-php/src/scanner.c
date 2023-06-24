#include <tree_sitter/parser.h>

enum TokenType {
    EOF_TOKEN,
    SENTINEL_ERROR, // Unused token used to indicate error recovery mode
};

void *tree_sitter_php_external_scanner_create() { return NULL; }

unsigned tree_sitter_php_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_php_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) { return; }

void tree_sitter_php_external_scanner_destroy(void *payload) { return; }

bool tree_sitter_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    const bool is_error_recovery = valid_symbols[SENTINEL_ERROR];

    if (is_error_recovery) {
        // Consider if we should clear the heredoc list on error
        return false;
    }

    if (valid_symbols[EOF_TOKEN] && lexer->eof(lexer)) {
        lexer->result_symbol = EOF_TOKEN;
        return true;
    }

    return false;
}
