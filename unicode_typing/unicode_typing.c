// Copyright 2020 @ridingqwerty
// Copyright 2020 @tzarc
// Copyright 2021 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "unicode_typing.h"
#include "process_unicode_common.h"
static uint8_t typing_mode = UCTM_NO_MODE;

ASSERT_COMMUNITY_MODULES_MIN_API_VERSION(0, 1, 0);

static void tap_unicode_glyph_nomods(uint32_t glyph) {
    if (glyph == 0xFFFD) {
        return;
    }
    uint8_t temp_mod = get_mods();
    clear_mods();
#ifndef NO_ACTION_ONESHOT
    clear_oneshot_mods();
#endif // NO_ACTION_ONESHOT
    register_unicode(glyph);
    set_mods(temp_mod);
}

static void tap_code16_nomods(uint16_t kc) {
    uint8_t temp_mod = get_mods();
    clear_mods();
#ifndef NO_ACTION_ONESHOT
    clear_oneshot_mods();
#endif // NO_ACTION_ONESHOT
    tap_code16(kc);
    set_mods(temp_mod);
}

typedef uint32_t (*translator_function_t)(bool is_shifted, uint32_t keycode);

#define DEFINE_UNICODE_RANGE_TRANSLATOR(translator_name, lower_alpha, upper_alpha, zero_glyph, number_one, \
                                        space_glyph)                                                       \
    static inline uint32_t translator_name(bool is_shifted, uint32_t keycode) {                            \
        switch (keycode) {                                                                                 \
            case KC_A ... KC_Z:                                                                            \
                return (is_shifted ? upper_alpha : lower_alpha) + keycode - KC_A;                          \
            case KC_0:                                                                                     \
                return zero_glyph;                                                                         \
            case KC_1 ... KC_9:                                                                            \
                return (number_one + keycode - KC_1);                                                      \
            case KC_SPACE:                                                                                 \
                return space_glyph;                                                                        \
        }                                                                                                  \
        return keycode;                                                                                    \
    }

#define DEFINE_UNICODE_LUT_TRANSLATOR(translator_name, ...)                     \
    static inline uint32_t translator_name(bool is_shifted, uint32_t keycode) { \
        static const uint32_t translation[] = {__VA_ARGS__};                    \
        uint32_t              ret           = keycode;                          \
        if ((keycode - KC_A) < ARRAY_SIZE(translation)) {                       \
            ret = translation[keycode - KC_A];                                  \
        }                                                                       \
        return ret;                                                             \
    }

/**
 * @brief Handler function for outputting unicode.
 * @param keycode Keycode from matrix.
 * @param record keyrecord_t data structure
 * @param translator translator lut for different unicode modes
 * @return true Continue processing matrix press, and send to host
 * @return false Replace keycode, and do not send to host
 */

static bool process_record_glyph_replacement(uint16_t keycode, keyrecord_t *record, translator_function_t translator) {
#ifdef NO_ACTION_ONESHOT
    uint8_t temp_mods = get_mods();
#else  // NO_ACTION_ONESHOT
    uint8_t temp_mods = get_mods() | get_oneshot_mods();
#endif // NO_ACTION_ONESHOT
    bool is_shifted = temp_mods & MOD_MASK_SHIFT;

    if (((temp_mods) & (MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI)) == 0) {
        if (KC_A <= keycode && keycode <= KC_Z) {
            if (record->event.pressed) {
                tap_unicode_glyph_nomods(translator(is_shifted, keycode));
            }
            return false;
        } else if (KC_1 <= keycode && keycode <= KC_0) {
            if (is_shifted) { // skip shifted numbers, so that we can still use symbols etc.
                return process_record_unicode_typing_kb(keycode, record);
            }
            if (record->event.pressed) {
                register_unicode(translator(is_shifted, keycode));
            }
            return false;
        } else if (keycode == KC_SPACE) {
            if (record->event.pressed) {
                register_unicode(translator(is_shifted, keycode));
            }
            return false;
        }
    }
    return true;
}

DEFINE_UNICODE_RANGE_TRANSLATOR(unicode_range_translator_script, 0x1D4EA, 0x1D4D0, 0x1D7CE, 0x1D7C1, 0x2002);
DEFINE_UNICODE_RANGE_TRANSLATOR(unicode_range_translator_double_struck, 0x1D552, 0x1D538, 0x1D7D8, 0x1D7D9, 0x2002);
DEFINE_UNICODE_RANGE_TRANSLATOR(unicode_range_translator_fraktur, 0x1D51E, 0x1D51E, '0', '1', 0x2002);

DEFINE_UNICODE_LUT_TRANSLATOR(unicode_lut_translator_aussie,
                              0x0250, // a
                              'q',    // b
                              0x0254, // c
                              'p',    // d
                              0x01DD, // e
                              0x025F, // f
                              0x0183, // g
                              0x0265, // h
                              0x1D09, // i
                              0x027E, // j
                              0x029E, // k
                              'l',    // l
                              0x026F, // m
                              'u',    // n
                              'o',    // o
                              'd',    // p
                              'b',    // q
                              0x0279, // r
                              's',    // s
                              0x0287, // t
                              'n',    // u
                              0x028C, // v
                              0x028D, // w
                              'x',    // x
                              0x028E, // y
                              'z',    // z
                              0x0269, // 1
                              0x3139, // 2
                              0x0190, // 3
                              0x3123, // 4
                              0x03DB, // 5
                              '9',    // 6
                              0x3125, // 7
                              '8',    // 8
                              '6',    // 9
                              '0'     // 0
);

DEFINE_UNICODE_LUT_TRANSLATOR(unicode_lut_translator_fraktur_bold,
                              0x1D586, // 𝖆
                              0x1D587, // 𝖇
                              0x1D588, // 𝖈
                              0x1D589, // 𝖉
                              0x1D58A, // 𝖊
                              0x1D58B, // 𝖋
                              0x1D58C, // 𝖌
                              0x1D58D, // 𝖍
                              0x1D58E, // 𝖎
                              0x1D58F, // 𝖏
                              0x1D590, // 𝖐
                              0x1D591, // 𝖑
                              0x1D592, // 𝖒
                              0x1D593, // 𝖓
                              0x1D594, // 𝖔
                              0x1D595, // 𝖕
                              0x1D596, // 𝖖
                              0x1D597, // 𝖗
                              0x1D598, // 𝖘
                              0x1D599, // 𝖙
                              0x1D59A, // 𝖚
                              0x1D59B, // 𝖛
                              0x1D59C, // 𝖜
                              0x1D59D, // 𝖝
                              0x1D59E, // 𝖞
                              0x1D59F, // 𝖟
                              '1',    // 1
                              '2',    // 2
                              '3',    // 3
                              '4',    // 4
                              '5',    // 5
                              '6',    // 6
                              '7',    // 7
                              '8',    // 8
                              '9',    // 9
                              '0'     // 0
);

DEFINE_UNICODE_LUT_TRANSLATOR(unicode_lut_translator_script_bold,
                              0x1D4EA, // 𝓪
                              0x1D4EB, // 𝓫
                              0x1D4EC, // 𝓬
                              0x1D4ED, // 𝓭
                              0x1D4EE, // 𝓮
                              0x1D4EF, // 𝓯
                              0x1D4F0, // 𝓰
                              0x1D4F1, // 𝓱
                              0x1D4F2, // 𝓲
                              0x1D4F3, // 𝓳
                              0x1D4F4, // 𝓴
                              0x1D4F5, // 𝓵
                              0x1D4F6, // 𝓶
                              0x1D4F7, // 𝓷
                              0x1D4F8, // 𝓸
                              0x1D4F9, // 𝓹
                              0x1D4FA, // 𝓺
                              0x1D4FB, // 𝓻
                              0x1D4FC, // 𝓼
                              0x1D4FD, // 𝓽
                              0x1D4FE, // 𝓾
                              0x1D4FF, // 𝓿
                              0x1D500, // 𝔀
                              0x1D501, // 𝔁
                              0x1D502, // 𝔂
                              0x1D503, // 𝔃
                              '1',    // 1
                              '2',    // 2
                              '3',    // 3
                              '4',    // 4
                              '5',    // 5
                              '6',    // 6
                              '7',    // 7
                              '8',    // 8
                              '9',    // 9
                              '0'     // 0
);

static bool process_record_aussie(uint16_t keycode, keyrecord_t *record) {
    uint8_t temp_mods = get_mods();
    bool is_shifted = temp_mods & MOD_MASK_SHIFT;
    if ((KC_A <= keycode) && (keycode <= KC_0)) {
        if (record->event.pressed) {
            if (!process_record_glyph_replacement(keycode, record, unicode_lut_translator_aussie)) {
                tap_code16_nomods(KC_LEFT);
                return false;
            }
        }
    } else if (record->event.pressed && keycode == KC_SPACE) {
        tap_code16_nomods(KC_SPACE);
        tap_code16_nomods(KC_LEFT);
        return false;
    } else if (record->event.pressed && keycode == KC_ENTER) {
        tap_code16_nomods(KC_END);
        tap_code16_nomods(KC_ENTER);
        return false;
    } else if (record->event.pressed && keycode == KC_HOME) {
        tap_code16_nomods(KC_END);
        return false;
    } else if (record->event.pressed && keycode == KC_END) {
        tap_code16_nomods(KC_HOME);
        return false;
    } else if (record->event.pressed && keycode == KC_BSPC) {
        tap_code16_nomods(KC_RGHT);
        tap_code16_nomods(KC_BSPC);
        return false;
    } else if (record->event.pressed && keycode == KC_QUOT) {
        tap_unicode_glyph_nomods(is_shifted ? 0x201E : 0x201A);
        tap_code16_nomods(KC_LEFT);
        return false;
    } else if (record->event.pressed && keycode == KC_COMMA) {
        tap_unicode_glyph_nomods(is_shifted ? '<' : 0x2018);
        tap_code16_nomods(KC_LEFT);
        return false;
    } else if (record->event.pressed && keycode == KC_DOT) {
        tap_unicode_glyph_nomods(is_shifted ? '>' : 0x02D9);
        tap_code16_nomods(KC_LEFT);
        return false;
    } else if (record->event.pressed && keycode == KC_SLASH) {
        tap_unicode_glyph_nomods(is_shifted ? 0x00BF : '/');
        tap_code16_nomods(KC_LEFT);
        return false;
    }
    return true;
}

/**
 * @brief Main handler for unicode input
 * @param keycode Keycode from switch matrix
 * @param record keyrecord_t data structure
 * @return true Send keycode from matrix to host
 * @return false Stop processing and do not send to host
 */

bool process_record_unicode_typing(uint16_t keycode, keyrecord_t *record) {
#ifdef NO_ACTION_ONESHOT
    if ((get_mods() & ~MOD_MASK_SHIFT) != 0)
#else  // NO_ACTION_ONESHOT
    if (((get_mods() | get_oneshot_mods()) & ~MOD_MASK_SHIFT) != 0)
#endif // NO_ACTION_ONESHOT
    {
        return true;
    }

    if (IS_QK_MOD_TAP(keycode) && record->tap.count) {
        keycode = QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
    }
    if (IS_QK_LAYER_TAP(keycode) && record->tap.count) {
        keycode = QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);
    }

    if (typing_mode == UCTM_AUSSIE) {
        return process_record_aussie(keycode, record);
    } else if (typing_mode == UCTM_SCRIPT) {
        if (((KC_A <= keycode) && (keycode <= KC_0)) || keycode == KC_SPACE) {
            return process_record_glyph_replacement(keycode, record, unicode_range_translator_script);
        }
    } else if (typing_mode == UCTM_DOUBLE_STRUCK) {
        if (((KC_A <= keycode) && (keycode <= KC_0)) || keycode == KC_SPACE) {
            return process_record_glyph_replacement(keycode, record, unicode_range_translator_double_struck);
        }
    } else if (typing_mode == UCTM_FRAKTUR) {
        if (((KC_A <= keycode) && (keycode <= KC_0)) || keycode == KC_SPACE) {
            return process_record_glyph_replacement(keycode, record, unicode_range_translator_fraktur);
        }
    }
    return true;
}

void set_unicode_typing_mode(uint8_t mode) {
    typing_mode = mode;
}