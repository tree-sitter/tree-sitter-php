#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 1
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_QMARK_GT = 1,
  sym_php_tag = 2,
  aux_sym_text_token1 = 3,
  aux_sym_text_token2 = 4,
  sym__eof = 5,
  sym_sentinel_error = 6,
  sym_program = 7,
  sym_text_interpolation = 8,
  sym_text = 9,
  aux_sym_text_repeat1 = 10,
  anon_alias_sym_php = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_QMARK_GT] = "\?>",
  [sym_php_tag] = "php_tag",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [sym__eof] = "_eof",
  [sym_sentinel_error] = "sentinel_error",
  [sym_program] = "program",
  [sym_text_interpolation] = "text_interpolation",
  [sym_text] = "text",
  [aux_sym_text_repeat1] = "text_repeat1",
  [anon_alias_sym_php] = "php",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym_php_tag] = sym_php_tag,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [sym__eof] = sym__eof,
  [sym_sentinel_error] = sym_sentinel_error,
  [sym_program] = sym_program,
  [sym_text_interpolation] = sym_text_interpolation,
  [sym_text] = sym_text,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [anon_alias_sym_php] = anon_alias_sym_php,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_php_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
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
  [sym_text_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_php] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_php,
  },
  [2] = {
    [2] = anon_alias_sym_php,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_text, 2,
    sym_text,
    anon_alias_sym_php,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 3,
  [11] = 5,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == ',') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == ',') SKIP(0)
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == ',') SKIP(9)
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_php_tag);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_php_tag);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '?') ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 2, .external_lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9, .external_lex_state = 2},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9, .external_lex_state = 2},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9, .external_lex_state = 2},
  [21] = {.lex_state = 9},
  [22] = {(TSStateId)(-1)},
  [23] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token_sentinel_error = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_sentinel_error] = sym_sentinel_error,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_sentinel_error] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_text_interpolation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_sentinel_error] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(19),
    [sym_text_interpolation] = STATE(1),
    [sym_text] = STATE(13),
    [aux_sym_text_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [aux_sym_text_token2] = ACTIONS(9),
  },
  [2] = {
    [sym_text_interpolation] = STATE(2),
    [sym_text] = STATE(14),
    [aux_sym_text_repeat1] = STATE(7),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(11),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [sym__eof] = ACTIONS(11),
  },
  [3] = {
    [sym_text_interpolation] = STATE(3),
    [aux_sym_text_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(15),
    [aux_sym_text_token1] = ACTIONS(17),
    [aux_sym_text_token2] = ACTIONS(17),
  },
  [4] = {
    [sym_text_interpolation] = STATE(4),
    [sym_text] = STATE(20),
    [aux_sym_text_repeat1] = STATE(11),
    [anon_sym_QMARK_GT] = ACTIONS(20),
    [aux_sym_text_token1] = ACTIONS(22),
    [aux_sym_text_token2] = ACTIONS(24),
    [sym__eof] = ACTIONS(26),
  },
  [5] = {
    [sym_text_interpolation] = STATE(5),
    [aux_sym_text_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(28),
    [aux_sym_text_token1] = ACTIONS(9),
    [aux_sym_text_token2] = ACTIONS(9),
  },
  [6] = {
    [sym_text_interpolation] = STATE(6),
    [aux_sym_text_repeat1] = STATE(6),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(15),
    [aux_sym_text_token1] = ACTIONS(30),
    [aux_sym_text_token2] = ACTIONS(30),
    [sym__eof] = ACTIONS(15),
  },
  [7] = {
    [sym_text_interpolation] = STATE(7),
    [aux_sym_text_repeat1] = STATE(6),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(28),
    [aux_sym_text_token1] = ACTIONS(13),
    [aux_sym_text_token2] = ACTIONS(13),
    [sym__eof] = ACTIONS(28),
  },
  [8] = {
    [sym_text_interpolation] = STATE(8),
    [sym_text] = STATE(17),
    [aux_sym_text_repeat1] = STATE(11),
    [anon_sym_QMARK_GT] = ACTIONS(33),
    [aux_sym_text_token1] = ACTIONS(22),
    [aux_sym_text_token2] = ACTIONS(24),
    [sym__eof] = ACTIONS(35),
  },
  [9] = {
    [sym_text_interpolation] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(37),
    [aux_sym_text_token1] = ACTIONS(39),
    [aux_sym_text_token2] = ACTIONS(39),
  },
  [10] = {
    [sym_text_interpolation] = STATE(10),
    [aux_sym_text_repeat1] = STATE(10),
    [anon_sym_QMARK_GT] = ACTIONS(41),
    [aux_sym_text_token1] = ACTIONS(43),
    [aux_sym_text_token2] = ACTIONS(46),
    [sym__eof] = ACTIONS(15),
  },
  [11] = {
    [sym_text_interpolation] = STATE(11),
    [aux_sym_text_repeat1] = STATE(10),
    [anon_sym_QMARK_GT] = ACTIONS(49),
    [aux_sym_text_token1] = ACTIONS(51),
    [aux_sym_text_token2] = ACTIONS(53),
    [sym__eof] = ACTIONS(28),
  },
  [12] = {
    [sym_text_interpolation] = STATE(12),
    [anon_sym_QMARK_GT] = ACTIONS(3),
    [sym_php_tag] = ACTIONS(37),
    [aux_sym_text_token1] = ACTIONS(39),
    [aux_sym_text_token2] = ACTIONS(39),
    [sym__eof] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(59), 1,
      sym_php_tag,
    STATE(13), 1,
      sym_text_interpolation,
  [13] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    STATE(14), 1,
      sym_text_interpolation,
    ACTIONS(61), 2,
      sym__eof,
      sym_php_tag,
  [24] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_text_interpolation,
  [34] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_text_interpolation,
  [44] = 2,
    STATE(17), 1,
      sym_text_interpolation,
    ACTIONS(67), 2,
      sym__eof,
      anon_sym_QMARK_GT,
  [52] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_text_interpolation,
  [62] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_text_interpolation,
  [72] = 2,
    STATE(20), 1,
      sym_text_interpolation,
    ACTIONS(73), 2,
      sym__eof,
      anon_sym_QMARK_GT,
  [80] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK_GT,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_text_interpolation,
  [90] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [94] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 13,
  [SMALL_STATE(15)] = 24,
  [SMALL_STATE(16)] = 34,
  [SMALL_STATE(17)] = 44,
  [SMALL_STATE(18)] = 52,
  [SMALL_STATE(19)] = 62,
  [SMALL_STATE(20)] = 72,
  [SMALL_STATE(21)] = 80,
  [SMALL_STATE(22)] = 90,
  [SMALL_STATE(23)] = 94,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_interpolation, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_interpolation, 2),
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
