enum layer_names { BASE, OZ, GAME, FN };

#include QMK_KEYBOARD_H
#include "tapdance.c"
#include "leader.c"
#include "combos.c"
#include "autoshift.c"
#include "overrides.c"
#include "process.c"
#include "rgb.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ortho_4x12(C(KC_PGUP), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, C(KC_PGDN),
    TD(HOME), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, TD(END),
    KC_LEFT, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SPC), KC_RGHT,
    KC_UP, KC_Z, KC_X, KC_C, LT(FN,KC_V), KC_B, KC_N, LT(FN,KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_DOWN),
  [OZ] = LAYOUT_ortho_4x12(LT(1,KC_MINS), LT(1,KC_1), LT(1,KC_2), LT(1,KC_3), LT(1,KC_4), LT(1,KC_5), LT(1,KC_6), LT(1,KC_7), LT(1,KC_8), LT(1,KC_9), LT(1,KC_0), LT(1,KC_END),
    LT(1,KC_LEFT), LT(1,KC_Q), LT(1,KC_W), LT(1,KC_E), LT(1,KC_R), LT(1,KC_T), LT(1,KC_Y), LT(1,KC_U), LT(1,KC_I), LT(1,KC_O), LT(1,KC_P), LT(1,KC_RGHT),
    LT(1,KC_DEL), LT(1,KC_A), LT(1,KC_S), LT(1,KC_D), LT(1,KC_F), LT(1,KC_G), LT(1,KC_H), LT(1,KC_J), LT(1,KC_K), LT(1,KC_L), LT(1,KC_SPC), LT(1,KC_QUOT),
    LT(1,KC_BSPC), LT(1,KC_Z), LT(1,KC_X), LT(1,KC_C), LT(1,KC_V), LT(1,KC_B), LT(1,KC_N), LT(1,KC_M), LT(1,KC_COMM), LT(1,KC_DOT), LT(1,KC_SLSH), DF(BASE)),
  [GAME] = LAYOUT_ortho_4x12(LT(FN,KC_VOLD), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, LT(FN,KC_VOLU),
    LALT_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, RALT_T(KC_DEL),
    LSFT_T(KC_ENT), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SPC, RSFT_T(KC_BSPC),
    LCTL_T(KC_ESC), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RCTL_T(BASE)),
  [FN] = LAYOUT_ortho_4x12(KC_MINS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_EQL,
    KC_LBRC, C(KC_PPLS), A(KC_F4), KC_MS_U, KC_BTN1, KC_BTN3, KC_BTN3, KC_BTN1, KC_MS_U, RCS(KC_ESC), G(KC_PSCR), KC_RBRC,
    KC_PIPE, KC_TILD, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_COLN, KC_DQT,
    KC_F11, KC_MUTE, KC_VOLD, KC_VOLU, KC_WH_U, KC_WH_L, KC_WH_R, KC_WH_D, UG_HUED, UG_HUEU, UG_SATU, KC_F12) };