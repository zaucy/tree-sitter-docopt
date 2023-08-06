#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym_description_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_PIPE = 9,
  sym_program_name = 10,
  aux_sym__usage_start_token1 = 11,
  anon_sym_ = 12,
  sym_command = 13,
  aux_sym_argument_token1 = 14,
  anon_sym_DOT_DOT_DOT = 15,
  aux_sym_long_option_token1 = 16,
  anon_sym_EQ = 17,
  aux_sym_short_option_token1 = 18,
  sym__option_descriptions_start = 19,
  anon_sym_COMMA = 20,
  anon_sym_2 = 21,
  sym_option_default = 22,
  anon_sym_LBRACKdefault_COLON = 23,
  sym_source_file = 24,
  sym__newline = 25,
  sym_description = 26,
  sym_usage = 27,
  sym_usage_pattern = 28,
  sym_required_group = 29,
  sym_optional_group = 30,
  sym_mutually_exclusive_elements = 31,
  sym__group_element = 32,
  sym__usage_start = 33,
  sym_argument = 34,
  sym_long_option = 35,
  sym_short_option = 36,
  sym__option = 37,
  sym__element = 38,
  sym_option_descriptions = 39,
  sym_option_description = 40,
  sym__option_default = 41,
  sym_option_informal_description = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_usage_repeat1 = 44,
  aux_sym_usage_pattern_repeat1 = 45,
  aux_sym_mutually_exclusive_elements_repeat1 = 46,
  aux_sym__group_element_repeat1 = 47,
  aux_sym_option_descriptions_repeat1 = 48,
  aux_sym_option_informal_description_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [sym_program_name] = "program_name",
  [aux_sym__usage_start_token1] = "_usage_start_token1",
  [anon_sym_] = " ",
  [sym_command] = "command",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_long_option_token1] = "long_option_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_short_option_token1] = "short_option_token1",
  [sym__option_descriptions_start] = "_option_descriptions_start",
  [anon_sym_COMMA] = ",",
  [anon_sym_2] = "  ",
  [sym_option_default] = "option_default",
  [anon_sym_LBRACKdefault_COLON] = "[default: ",
  [sym_source_file] = "source_file",
  [sym__newline] = "_newline",
  [sym_description] = "description",
  [sym_usage] = "usage",
  [sym_usage_pattern] = "usage_pattern",
  [sym_required_group] = "required_group",
  [sym_optional_group] = "optional_group",
  [sym_mutually_exclusive_elements] = "mutually_exclusive_elements",
  [sym__group_element] = "_group_element",
  [sym__usage_start] = "_usage_start",
  [sym_argument] = "argument",
  [sym_long_option] = "long_option",
  [sym_short_option] = "short_option",
  [sym__option] = "_option",
  [sym__element] = "_element",
  [sym_option_descriptions] = "option_descriptions",
  [sym_option_description] = "option_description",
  [sym__option_default] = "_option_default",
  [sym_option_informal_description] = "option_informal_description",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_usage_repeat1] = "usage_repeat1",
  [aux_sym_usage_pattern_repeat1] = "usage_pattern_repeat1",
  [aux_sym_mutually_exclusive_elements_repeat1] = "mutually_exclusive_elements_repeat1",
  [aux_sym__group_element_repeat1] = "_group_element_repeat1",
  [aux_sym_option_descriptions_repeat1] = "option_descriptions_repeat1",
  [aux_sym_option_informal_description_repeat1] = "option_informal_description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_program_name] = sym_program_name,
  [aux_sym__usage_start_token1] = aux_sym__usage_start_token1,
  [anon_sym_] = anon_sym_,
  [sym_command] = sym_command,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [aux_sym_long_option_token1] = aux_sym_long_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_short_option_token1] = aux_sym_short_option_token1,
  [sym__option_descriptions_start] = sym__option_descriptions_start,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_2] = anon_sym_2,
  [sym_option_default] = sym_option_default,
  [anon_sym_LBRACKdefault_COLON] = anon_sym_LBRACKdefault_COLON,
  [sym_source_file] = sym_source_file,
  [sym__newline] = sym__newline,
  [sym_description] = sym_description,
  [sym_usage] = sym_usage,
  [sym_usage_pattern] = sym_usage_pattern,
  [sym_required_group] = sym_required_group,
  [sym_optional_group] = sym_optional_group,
  [sym_mutually_exclusive_elements] = sym_mutually_exclusive_elements,
  [sym__group_element] = sym__group_element,
  [sym__usage_start] = sym__usage_start,
  [sym_argument] = sym_argument,
  [sym_long_option] = sym_long_option,
  [sym_short_option] = sym_short_option,
  [sym__option] = sym__option,
  [sym__element] = sym__element,
  [sym_option_descriptions] = sym_option_descriptions,
  [sym_option_description] = sym_option_description,
  [sym__option_default] = sym__option_default,
  [sym_option_informal_description] = sym_option_informal_description,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_usage_repeat1] = aux_sym_usage_repeat1,
  [aux_sym_usage_pattern_repeat1] = aux_sym_usage_pattern_repeat1,
  [aux_sym_mutually_exclusive_elements_repeat1] = aux_sym_mutually_exclusive_elements_repeat1,
  [aux_sym__group_element_repeat1] = aux_sym__group_element_repeat1,
  [aux_sym_option_descriptions_repeat1] = aux_sym_option_descriptions_repeat1,
  [aux_sym_option_informal_description_repeat1] = aux_sym_option_informal_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_program_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__usage_start_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_long_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_short_option_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__option_descriptions_start] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_option_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACKdefault_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_usage_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_required_group] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_group] = {
    .visible = true,
    .named = true,
  },
  [sym_mutually_exclusive_elements] = {
    .visible = true,
    .named = true,
  },
  [sym__group_element] = {
    .visible = false,
    .named = true,
  },
  [sym__usage_start] = {
    .visible = false,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_long_option] = {
    .visible = true,
    .named = true,
  },
  [sym_short_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option] = {
    .visible = false,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_option_descriptions] = {
    .visible = true,
    .named = true,
  },
  [sym_option_description] = {
    .visible = true,
    .named = true,
  },
  [sym__option_default] = {
    .visible = false,
    .named = true,
  },
  [sym_option_informal_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_usage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_usage_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mutually_exclusive_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__group_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_descriptions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_informal_description_repeat1] = {
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 12,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 11,
  [36] = 36,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 16,
  [45] = 13,
  [46] = 46,
  [47] = 18,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 24,
  [53] = 53,
  [54] = 22,
  [55] = 38,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 19,
  [65] = 65,
  [66] = 21,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '|') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(38)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '<') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(38)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '<') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(39)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(39)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(41)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(41)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(42)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(15);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '|') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '|') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '<') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 48:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(69);
      if (lookahead == ',') ADVANCE(93);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '|') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_program_name);
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_program_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_program_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_program_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_program_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__usage_start_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_long_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_short_option_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__option_descriptions_start);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_option_default);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACKdefault_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_program_name] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [aux_sym_argument_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_long_option_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_short_option_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_description] = STATE(73),
    [aux_sym_description_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_CR,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_command,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    STATE(51), 1,
      sym__newline,
    STATE(4), 2,
      sym_mutually_exclusive_elements,
      aux_sym_usage_pattern_repeat1,
    STATE(23), 9,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [43] = 11,
    ACTIONS(5), 1,
      anon_sym_CR,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_command,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(21), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym__newline,
    STATE(2), 2,
      sym_mutually_exclusive_elements,
      aux_sym_usage_pattern_repeat1,
    STATE(23), 9,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [86] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_command,
    ACTIONS(34), 1,
      aux_sym_argument_token1,
    ACTIONS(37), 1,
      aux_sym_long_option_token1,
    ACTIONS(40), 1,
      aux_sym_short_option_token1,
    ACTIONS(23), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(4), 2,
      sym_mutually_exclusive_elements,
      aux_sym_usage_pattern_repeat1,
    STATE(23), 9,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [124] = 6,
    ACTIONS(45), 1,
      sym_command,
    ACTIONS(48), 1,
      aux_sym_argument_token1,
    ACTIONS(51), 1,
      aux_sym_long_option_token1,
    ACTIONS(54), 1,
      aux_sym_short_option_token1,
    STATE(5), 6,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
    ACTIONS(43), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [154] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(57), 1,
      sym_command,
    STATE(76), 1,
      sym_mutually_exclusive_elements,
    STATE(65), 3,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
    STATE(10), 6,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [189] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(57), 1,
      sym_command,
    STATE(69), 1,
      sym_mutually_exclusive_elements,
    STATE(61), 3,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
    STATE(10), 6,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [224] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(59), 1,
      sym_command,
    STATE(15), 9,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [254] = 8,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(57), 1,
      sym_command,
    STATE(15), 3,
      sym_required_group,
      sym_optional_group,
      sym__group_element,
    STATE(10), 6,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [286] = 6,
    ACTIONS(15), 1,
      aux_sym_argument_token1,
    ACTIONS(17), 1,
      aux_sym_long_option_token1,
    ACTIONS(19), 1,
      aux_sym_short_option_token1,
    ACTIONS(63), 1,
      sym_command,
    ACTIONS(61), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE,
    STATE(5), 6,
      sym_argument,
      sym_long_option,
      sym_short_option,
      sym__option,
      sym__element,
      aux_sym__group_element_repeat1,
  [312] = 4,
    ACTIONS(69), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_argument,
    ACTIONS(67), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(65), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [334] = 3,
    STATE(16), 1,
      sym_argument,
    ACTIONS(73), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(71), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [353] = 3,
    STATE(21), 1,
      sym_argument,
    ACTIONS(77), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(75), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [372] = 3,
    ACTIONS(83), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(81), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(79), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [391] = 2,
    ACTIONS(87), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(85), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [407] = 2,
    ACTIONS(91), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(89), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [423] = 2,
    ACTIONS(95), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(93), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [439] = 2,
    ACTIONS(99), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(97), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [455] = 2,
    ACTIONS(77), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(75), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [471] = 2,
    ACTIONS(103), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(101), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [487] = 2,
    ACTIONS(107), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
    ACTIONS(105), 7,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [503] = 4,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
    ACTIONS(109), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(113), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
  [522] = 4,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(22), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
    ACTIONS(115), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(117), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
  [541] = 4,
    ACTIONS(119), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
    ACTIONS(85), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(87), 4,
      sym_command,
      aux_sym_argument_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
  [560] = 6,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      aux_sym_description_token1,
    ACTIONS(128), 1,
      anon_sym_LBRACKdefault_COLON,
    STATE(63), 1,
      sym_option_informal_description,
    ACTIONS(124), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(30), 2,
      sym__option_default,
      aux_sym_option_informal_description_repeat1,
  [581] = 6,
    ACTIONS(126), 1,
      aux_sym_description_token1,
    ACTIONS(128), 1,
      anon_sym_LBRACKdefault_COLON,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_option_informal_description,
    ACTIONS(132), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(30), 2,
      sym__option_default,
      aux_sym_option_informal_description_repeat1,
  [602] = 6,
    ACTIONS(126), 1,
      aux_sym_description_token1,
    ACTIONS(128), 1,
      anon_sym_LBRACKdefault_COLON,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_option_informal_description,
    ACTIONS(136), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(30), 2,
      sym__option_default,
      aux_sym_option_informal_description_repeat1,
  [623] = 4,
    ACTIONS(71), 1,
      anon_sym_2,
    ACTIONS(138), 1,
      aux_sym_argument_token1,
    STATE(44), 1,
      sym_argument,
    ACTIONS(73), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_long_option_token1,
      anon_sym_COMMA,
  [639] = 5,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_description_token1,
    ACTIONS(147), 1,
      anon_sym_LBRACKdefault_COLON,
    ACTIONS(142), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(29), 2,
      sym__option_default,
      aux_sym_option_informal_description_repeat1,
  [657] = 5,
    ACTIONS(128), 1,
      anon_sym_LBRACKdefault_COLON,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_description_token1,
    ACTIONS(152), 2,
      anon_sym_CR,
      anon_sym_LF,
    STATE(29), 2,
      sym__option_default,
      aux_sym_option_informal_description_repeat1,
  [675] = 7,
    ACTIONS(156), 1,
      anon_sym_CR,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      aux_sym_long_option_token1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_2,
    STATE(27), 1,
      sym__newline,
    STATE(53), 1,
      sym_long_option,
  [697] = 3,
    ACTIONS(168), 1,
      sym_program_name,
    STATE(34), 2,
      sym_usage_pattern,
      aux_sym_usage_repeat1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [710] = 5,
    ACTIONS(170), 1,
      anon_sym_CR,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      sym__option_descriptions_start,
    STATE(71), 1,
      sym_option_descriptions,
    STATE(48), 2,
      sym__newline,
      aux_sym_source_file_repeat1,
  [727] = 3,
    ACTIONS(168), 1,
      sym_program_name,
    STATE(39), 2,
      sym_usage_pattern,
      aux_sym_usage_repeat1,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [740] = 5,
    ACTIONS(65), 1,
      anon_sym_2,
    ACTIONS(138), 1,
      aux_sym_argument_token1,
    ACTIONS(178), 1,
      anon_sym_EQ,
    STATE(64), 1,
      sym_argument,
    ACTIONS(67), 2,
      anon_sym_CR,
      anon_sym_LF,
  [757] = 5,
    ACTIONS(170), 1,
      anon_sym_CR,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__newline,
    STATE(40), 2,
      sym_option_description,
      aux_sym_option_descriptions_repeat1,
  [774] = 3,
    ACTIONS(79), 1,
      anon_sym_2,
    ACTIONS(184), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(81), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_long_option_token1,
      anon_sym_COMMA,
  [787] = 1,
    ACTIONS(186), 6,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__usage_start_token1,
      aux_sym_long_option_token1,
      aux_sym_short_option_token1,
      sym__option_descriptions_start,
  [796] = 3,
    ACTIONS(190), 1,
      sym_program_name,
    STATE(39), 2,
      sym_usage_pattern,
      aux_sym_usage_repeat1,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [809] = 5,
    ACTIONS(170), 1,
      anon_sym_CR,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym__newline,
    STATE(41), 2,
      sym_option_description,
      aux_sym_option_descriptions_repeat1,
  [826] = 5,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      anon_sym_CR,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym__newline,
    STATE(41), 2,
      sym_option_description,
      aux_sym_option_descriptions_repeat1,
  [843] = 2,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_description_token1,
      anon_sym_LBRACKdefault_COLON,
  [853] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_description_token1,
      anon_sym_LBRACKdefault_COLON,
  [863] = 2,
    ACTIONS(89), 1,
      anon_sym_2,
    ACTIONS(91), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_long_option_token1,
      anon_sym_COMMA,
  [873] = 4,
    ACTIONS(75), 1,
      anon_sym_2,
    ACTIONS(138), 1,
      aux_sym_argument_token1,
    STATE(66), 1,
      sym_argument,
    ACTIONS(77), 2,
      anon_sym_CR,
      anon_sym_LF,
  [887] = 4,
    ACTIONS(170), 1,
      anon_sym_CR,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(33), 2,
      sym__newline,
      aux_sym_source_file_repeat1,
  [901] = 2,
    ACTIONS(97), 1,
      anon_sym_2,
    ACTIONS(99), 4,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym_long_option_token1,
      anon_sym_COMMA,
  [911] = 4,
    ACTIONS(213), 1,
      anon_sym_CR,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(219), 1,
      sym__option_descriptions_start,
    STATE(48), 2,
      sym__newline,
      aux_sym_source_file_repeat1,
  [925] = 5,
    ACTIONS(170), 1,
      anon_sym_CR,
    ACTIONS(221), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym__usage_start,
    STATE(46), 1,
      sym_usage,
    STATE(75), 1,
      sym__newline,
  [941] = 4,
    ACTIONS(223), 1,
      aux_sym_long_option_token1,
    ACTIONS(225), 1,
      aux_sym_short_option_token1,
    STATE(31), 1,
      sym_short_option,
    STATE(56), 1,
      sym_long_option,
  [954] = 1,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
      sym_program_name,
  [961] = 3,
    ACTIONS(229), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [972] = 4,
    ACTIONS(156), 1,
      anon_sym_CR,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      anon_sym_2,
    STATE(26), 1,
      sym__newline,
  [985] = 3,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
    ACTIONS(109), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [996] = 1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
      sym_program_name,
  [1003] = 4,
    ACTIONS(156), 1,
      anon_sym_CR,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_2,
    STATE(27), 1,
      sym__newline,
  [1016] = 4,
    ACTIONS(156), 1,
      anon_sym_CR,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      anon_sym_2,
    STATE(25), 1,
      sym__newline,
  [1029] = 1,
    ACTIONS(242), 4,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
      sym_program_name,
  [1036] = 4,
    ACTIONS(244), 1,
      anon_sym_CR,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      anon_sym_,
    STATE(58), 1,
      sym__newline,
  [1049] = 1,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
      sym_program_name,
  [1056] = 3,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
  [1066] = 1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [1072] = 1,
    ACTIONS(254), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [1078] = 2,
    ACTIONS(75), 1,
      anon_sym_2,
    ACTIONS(77), 2,
      anon_sym_CR,
      anon_sym_LF,
  [1086] = 3,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_mutually_exclusive_elements_repeat1,
  [1096] = 2,
    ACTIONS(105), 1,
      anon_sym_2,
    ACTIONS(107), 2,
      anon_sym_CR,
      anon_sym_LF,
  [1104] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_CR,
      anon_sym_LF,
  [1110] = 2,
    ACTIONS(223), 1,
      aux_sym_long_option_token1,
    STATE(57), 1,
      sym_long_option,
  [1117] = 1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
  [1121] = 1,
    ACTIONS(258), 1,
      aux_sym_source_file_token1,
  [1125] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1129] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [1133] = 1,
    ACTIONS(264), 1,
      aux_sym_source_file_token1,
  [1137] = 1,
    ACTIONS(266), 1,
      anon_sym_LF,
  [1141] = 1,
    ACTIONS(268), 1,
      aux_sym__usage_start_token1,
  [1145] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
  [1149] = 1,
    ACTIONS(270), 1,
      anon_sym_LF,
  [1153] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1157] = 1,
    ACTIONS(274), 1,
      sym_option_default,
  [1161] = 1,
    ACTIONS(276), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 224,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 423,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 455,
  [SMALL_STATE(20)] = 471,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 522,
  [SMALL_STATE(24)] = 541,
  [SMALL_STATE(25)] = 560,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 602,
  [SMALL_STATE(28)] = 623,
  [SMALL_STATE(29)] = 639,
  [SMALL_STATE(30)] = 657,
  [SMALL_STATE(31)] = 675,
  [SMALL_STATE(32)] = 697,
  [SMALL_STATE(33)] = 710,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 740,
  [SMALL_STATE(36)] = 757,
  [SMALL_STATE(37)] = 774,
  [SMALL_STATE(38)] = 787,
  [SMALL_STATE(39)] = 796,
  [SMALL_STATE(40)] = 809,
  [SMALL_STATE(41)] = 826,
  [SMALL_STATE(42)] = 843,
  [SMALL_STATE(43)] = 853,
  [SMALL_STATE(44)] = 863,
  [SMALL_STATE(45)] = 873,
  [SMALL_STATE(46)] = 887,
  [SMALL_STATE(47)] = 901,
  [SMALL_STATE(48)] = 911,
  [SMALL_STATE(49)] = 925,
  [SMALL_STATE(50)] = 941,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 961,
  [SMALL_STATE(53)] = 972,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 996,
  [SMALL_STATE(56)] = 1003,
  [SMALL_STATE(57)] = 1016,
  [SMALL_STATE(58)] = 1029,
  [SMALL_STATE(59)] = 1036,
  [SMALL_STATE(60)] = 1049,
  [SMALL_STATE(61)] = 1056,
  [SMALL_STATE(62)] = 1066,
  [SMALL_STATE(63)] = 1072,
  [SMALL_STATE(64)] = 1078,
  [SMALL_STATE(65)] = 1086,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1104,
  [SMALL_STATE(68)] = 1110,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1121,
  [SMALL_STATE(71)] = 1125,
  [SMALL_STATE(72)] = 1129,
  [SMALL_STATE(73)] = 1133,
  [SMALL_STATE(74)] = 1137,
  [SMALL_STATE(75)] = 1141,
  [SMALL_STATE(76)] = 1145,
  [SMALL_STATE(77)] = 1149,
  [SMALL_STATE(78)] = 1153,
  [SMALL_STATE(79)] = 1157,
  [SMALL_STATE(80)] = 1161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_usage_pattern_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_usage_pattern_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__group_element_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__group_element_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__group_element_repeat1, 2), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__group_element_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__group_element_repeat1, 2), SHIFT_REPEAT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_element, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_option, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_option, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_option, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_option, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mutually_exclusive_elements_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mutually_exclusive_elements_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_option, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_short_option, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_group, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_required_group, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_group, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_group, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_option, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutually_exclusive_elements, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutually_exclusive_elements, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_usage_pattern_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_usage_pattern_repeat1, 1),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mutually_exclusive_elements_repeat1, 2), SHIFT_REPEAT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_informal_description_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_informal_description_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_informal_description_repeat1, 2), SHIFT_REPEAT(29),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_informal_description_repeat1, 2), SHIFT_REPEAT(79),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_informal_description, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_informal_description, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_descriptions, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__newline, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_usage_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_usage_repeat1, 2), SHIFT_REPEAT(3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_descriptions, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_descriptions_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_descriptions_repeat1, 2), SHIFT_REPEAT(74),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_descriptions_repeat1, 2), SHIFT_REPEAT(50),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__newline, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_default, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__option_default, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage_pattern, 3),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mutually_exclusive_elements_repeat1, 2), SHIFT_REPEAT(9),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__usage_start, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage_pattern, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_docopt(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
