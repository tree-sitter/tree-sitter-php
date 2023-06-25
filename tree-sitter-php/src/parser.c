#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__php_tag = 1,
  anon_sym_QMARK_GT = 2,
  aux_sym_text_token1 = 3,
  sym__eof = 4,
  sym__php_content = 5,
  sym_sentinel_error = 6,
  sym_program = 7,
  sym_php_only = 8,
  sym_text = 9,
  aux_sym_program_repeat1 = 10,
  aux_sym_text_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__php_tag] = "_php_tag",
  [anon_sym_QMARK_GT] = "\?>",
  [aux_sym_text_token1] = "text_token1",
  [sym__eof] = "_eof",
  [sym__php_content] = "_php_content",
  [sym_sentinel_error] = "sentinel_error",
  [sym_program] = "program",
  [sym_php_only] = "php_only",
  [sym_text] = "text",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__php_tag] = sym__php_tag,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym__eof] = sym__eof,
  [sym__php_content] = sym__php_content,
  [sym_sentinel_error] = sym_sentinel_error,
  [sym_program] = sym_program,
  [sym_php_only] = sym_php_only,
  [sym_text] = sym_text,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__php_tag] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__php_content] = {
    .visible = false,
    .named = true,
  },
  [sym_sentinel_error] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_php_only] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '?') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__php_tag);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__php_tag);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '?') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token__php_content = 1,
  ts_external_token_sentinel_error = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__php_content] = sym__php_content,
  [ts_external_token_sentinel_error] = sym_sentinel_error,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__php_content] = true,
    [ts_external_token_sentinel_error] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
    [ts_external_token__php_content] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__php_tag] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__php_content] = ACTIONS(1),
    [sym_sentinel_error] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(10),
    [sym_php_only] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__php_tag] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_php_only] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__php_tag] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
  },
  [3] = {
    [sym_php_only] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__php_tag] = ACTIONS(13),
    [aux_sym_text_token1] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__php_tag,
    ACTIONS(23), 1,
      aux_sym_text_token1,
    STATE(5), 1,
      aux_sym_text_repeat1,
  [13] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__php_tag,
    ACTIONS(29), 1,
      aux_sym_text_token1,
    STATE(5), 1,
      aux_sym_text_repeat1,
  [26] = 2,
    ACTIONS(34), 1,
      sym__php_content,
    ACTIONS(32), 2,
      sym__eof,
      anon_sym_QMARK_GT,
  [34] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym__php_tag,
      aux_sym_text_token1,
  [42] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 2,
      sym__php_tag,
      aux_sym_text_token1,
  [50] = 1,
    ACTIONS(44), 2,
      sym__eof,
      anon_sym_QMARK_GT,
  [55] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 42,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 55,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_only, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_only, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php_only, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php_only, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_php_external_scanner_create(void);
void tree_sitter_php_external_scanner_destroy(void *);
bool tree_sitter_php_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_php_external_scanner_serialize(void *, char *);
void tree_sitter_php_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_php(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_php_external_scanner_create,
      tree_sitter_php_external_scanner_destroy,
      tree_sitter_php_external_scanner_scan,
      tree_sitter_php_external_scanner_serialize,
      tree_sitter_php_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
