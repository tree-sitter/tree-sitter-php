#include <tree_sitter/parser.h>

enum TokenType {
    EOF_TOKEN,
    PHP_CONTENT,
    SENTINEL_ERROR, // Unused token used to indicate error recovery mode
};

void *tree_sitter_php_external_scanner_create() { }

unsigned tree_sitter_php_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_php_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) { }

void tree_sitter_php_external_scanner_destroy(void *payload) { }

bool tree_sitter_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    if (valid_symbols[SENTINEL_ERROR]) return false;

    if (valid_symbols[EOF_TOKEN] && lexer->eof(lexer)) {
        lexer->result_symbol = EOF_TOKEN;
        return true;
    }

    if (valid_symbols[PHP_CONTENT]) {
        while(! lexer->eof(lexer)) {
            if (lexer->lookahead != '?') {
                lexer->advance(lexer, false);
            } else {
                lexer->mark_end(lexer);

                lexer->advance(lexer, false);

                if (lexer->lookahead == '>') {
                    break;
                }
            }

            lexer->mark_end(lexer);
        }

        lexer->result_symbol = PHP_CONTENT;
        return true;
    }

    return false;
}
