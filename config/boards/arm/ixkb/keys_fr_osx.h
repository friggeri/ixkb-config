#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define FR_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define FR_EXCLAMATION \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))
#define FR_EXCL (FR_EXCLAMATION)

/* " */
#define FR_DOUBLE_QUOTES \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))
#define FR_DQT (FR_DOUBLE_QUOTES)

/* # */
#define FR_HASH                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define FR_POUND (FR_HASH)

/* $ */
#define FR_DOLLAR               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, \
                 HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))
#define FR_DLLR (FR_DOLLAR)

/* % */
#define FR_PERCENT                 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define FR_PRCNT (FR_PERCENT)

/* & */
#define FR_AMPERSAND \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))
#define FR_AMPS (FR_AMPERSAND)

/* ' */
#define FR_SINGLE_QUOTE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))
#define FR_APOS (FR_SINGLE_QUOTE)

/* ( */
#define FR_LEFT_PARENTHESIS \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))
#define FR_LPAR (FR_LEFT_PARENTHESIS)

/* ) */
#define FR_RIGHT_PARENTHESIS \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))
#define FR_RPAR (FR_RIGHT_PARENTHESIS)

/* * */
#define FR_ASTERISK                \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define FR_STAR (FR_ASTERISK)

/* + */
#define FR_PLUS                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))

/* , */
#define FR_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* - */
#define FR_MINUS \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* . */
#define FR_PERIOD \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define FR_DOT (FR_PERIOD)

/* / */
#define FR_SLASH                   \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define FR_FSLH (FR_SLASH)

/* 0 */
#define FR_N0                      \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* 1 */
#define FR_N1 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))

/* 2 */
#define FR_N2 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))

/* 3 */
#define FR_N3 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* 4 */
#define FR_N4 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* 5 */
#define FR_N5 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))

/* 6 */
#define FR_N6 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* 7 */
#define FR_N7 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))

/* 8 */
#define FR_N8 \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))

/* 9 */
#define FR_N9                      \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))

/* : */
#define FR_COLON \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))

/* ; */
#define FR_SEMICOLON \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))
#define FR_SEMI (FR_SEMICOLON)

/* < */
#define FR_LESS_THAN \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define FR_LT (FR_LESS_THAN)

/* = */
#define FR_EQUAL \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* > */
#define FR_GREATER_THAN            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define FR_GT (FR_GREATER_THAN)

/* ? */
#define FR_QUESTION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))
#define FR_QMARK (FR_QUESTION)

/* @ */
#define FR_AT_SIGN              \
  (ZMK_HID_USAGE(HID_USAGE_KEY, \
                 HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define FR_AT (FR_AT_SIGN)

/* [ */
#define FR_LEFT_BRACKET \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))))
#define FR_LBKT (FR_LEFT_BRACKET)

/* \ */
#define FR_BACKSLASH                  \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))))
#define FR_BSLH (FR_BACKSLASH)

/* ] */
#define FR_RIGHT_BRACKET              \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))))
#define FR_RBKT (FR_RIGHT_BRACKET)

/* ^ */
#define FR_CARET                \
  (ZMK_HID_USAGE(HID_USAGE_KEY, \
                 HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* _ */
#define FR_UNDERSCORE \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))
#define FR_UNDER (FR_UNDERSCORE)

/* ` */
#define FR_GRAVE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))

/* a */
#define FR_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* b */
#define FR_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define FR_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define FR_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define FR_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define FR_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define FR_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define FR_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define FR_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define FR_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define FR_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define FR_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define FR_M \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* n */
#define FR_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define FR_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define FR_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define FR_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* r */
#define FR_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define FR_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define FR_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define FR_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define FR_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define FR_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* x */
#define FR_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define FR_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define FR_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* { */
#define FR_LEFT_BRACE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define FR_LBRC (FR_LEFT_BRACE)

/* | */
#define FR_PIPE (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))))

/* } */
#define FR_RIGHT_BRACE             \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define FR_RBRC (FR_RIGHT_BRACE)

/* ~ */
#define FR_TILDE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N)))

#define FR_NO_BREAK_SPACE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR)))
#define FR_NBSP (FR_NO_BREAK_SPACE)

/* ¡ */
#define FR_INVERTED_EXCLAMATION \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FR_IEXCL (FR_INVERTED_EXCLAMATION)

/* ¢ */
#define FR_CENT (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))))

/* £ */
#define FR_POUND_SIGN \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

/* ¥ */
#define FR_YEN          \
  (LS(LA(ZMK_HID_USAGE( \
      HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))))

/* § */
#define FR_SECTION \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))
#define FR_SECT (FR_SECTION)

/* ¨ */
#define FR_UMLAUT                  \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* © */
#define FR_COPYRIGHT \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C)))

/* ª */
#define FR_FEMININE_ORDINAL_INDICATOR \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))))
#define FR_ORDF (FR_FEMININE_ORDINAL_INDICATOR)

/* « */
#define FR_LEFT_ANGLE_QUOTE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define FR_LAQUO (FR_LEFT_ANGLE_QUOTE)

/* ¬ */
#define FR_NOT (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L)))

/* ® */
#define FR_REGISTERED \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R)))

/* ° */
#define FR_DEGREE                  \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define FR_DEG (FR_DEGREE)

/* ± */
#define FR_PLUS_MINUS                 \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))))

/* ´ */
#define FR_ACUTE                      \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))))

/* µ */
#define FR_MU \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))
#define FR_MICRO (FR_MU)

/* ¶ */
#define FR_PILCROW \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define FR_PARA (FR_PILCROW)

/* · */
#define FR_MIDDLE_DOT \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))))
#define FR_MIDDOT (FR_MIDDLE_DOT)

/* º */
#define FR_MASCULINE_ORDINAL_INDICATOR \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U)))
#define FR_ORDM (FR_MASCULINE_ORDINAL_INDICATOR)

/* » */
#define FR_RIGHT_ANGLE_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))))
#define FR_RAQUO (FR_RIGHT_ANGLE_QUOTE)

/* ¿ */
#define FR_INVERTED_QUESTION \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))))
#define FR_IQMARK (FR_INVERTED_QUESTION)

/* ß */
#define FR_SHARP_S (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B)))
#define FR_ESZETT (FR_SHARP_S)
#define FR_SZ (FR_SHARP_S)

/* à */
#define FR_A_GRAVE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* Á */
#define FR_A_ACUTE                    \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))))

/* Â */
#define FR_A_CIRCUMFLEX \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)))
#define FR_A_CIRC (FR_A_CIRCUMFLEX)

/* å */
#define FR_A_RING \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))))

/* æ */
#define FR_AE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q)))

/* ç */
#define FR_C_CEDILLA \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* è */
#define FR_E_GRAVE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* é */
#define FR_E_ACUTE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* ê */
#define FR_E_CIRCUMFLEX \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))
#define FR_E_CIRC (FR_E_CIRCUMFLEX)

/* ë */
#define FR_E_UMLAUT \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))

/* Ì */
#define FR_I_GRAVE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H)))

/* Í */
#define FR_I_ACUTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))))

/* î */
#define FR_I_CIRCUMFLEX \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)))
#define FR_I_CIRC (FR_I_CIRCUMFLEX)

/* Ï */
#define FR_I_UMLAUT (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J)))

/* Ò */
#define FR_O_GRAVE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)))

/* Ó */
#define FR_O_ACUTE                    \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                       HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))))

/* ô */
#define FR_O_CIRCUMFLEX            \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))
#define FR_O_CIRC (FR_O_CIRCUMFLEX)

/* ÷ */
#define FR_DIVIDE                  \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define FR_DIV (FR_DIVIDE)

/* ø */
#define FR_O_SLASH                 \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* ù */
#define FR_U_GRAVE \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* Ú */
#define FR_U_ACUTE (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)))

/* ı */
#define FR_I_DOTLESS \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))))

/* π */
#define FR_PI (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P)))

/* Ω */
#define FR_OMEGA \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))))

/* – */
#define FR_EN_DASH \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))))

/* — */
#define FR_EM_DASH \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* ‘ */
#define FR_LEFT_SINGLE_QUOTE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* ’ */
#define FR_RIGHT_SINGLE_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))))

/* ‚ */
#define FR_SINGLE_LOW_9_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))))

/* “ */
#define FR_LEFT_DOUBLE_QUOTE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ” */
#define FR_RIGHT_DOUBLE_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))))

/* „ */
#define FR_DOUBLE_LOW_9_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))))

/* • */
#define FR_BULLET                  \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* … */
#define FR_HORIZONTAL_ELLIPSIS \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))

/* ‹ */
#define FR_SINGLE_LEFT_POINTING_ANGLE_QUOTE \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)))

/* › */
#define FR_SINGLE_RIGHT_POINTING_ANGLE_QUOTE \
  (LS(LA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))))

/* € */
#define FR_EURO                    \
  (LA(ZMK_HID_USAGE(HID_USAGE_KEY, \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* foo */