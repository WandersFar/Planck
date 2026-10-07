bool encoder_update_user(uint8_t index, bool clockwise) {
  switch (get_highest_layer(layer_state|default_layer_state)) {
    case FN: (!clockwise) ? tap_code_delay(KC_VOLD, 10) : tap_code_delay(KC_VOLU, 10); break;
    case BASE: if (get_mods() & MOD_MASK_CTRL) { tap_code((!clockwise) ? KC_Z : KC_Y); }
      else if (get_mods() & MOD_MASK_SHIFT) { tap_code16((!clockwise) ? KC_F3 : S(KC_F3)); }
      else if (get_mods() & MOD_MASK_ALT) { del_mods(MOD_MASK_ALT);
        tap_code16((!clockwise) ? C(KC_MINS) : C(KC_EQL)); }
      else if (get_mods() & MOD_MASK_GUI) { del_mods(MOD_MASK_GUI);
        tap_code((!clockwise) ? KC_WH_L : KC_WH_R); }
    default: tap_code((!clockwise) ? KC_WH_U : KC_WH_D); break; } return false; }

uint32_t callback(uint32_t trigger_time, void *cb_arg) { rgblight_disable_noeeprom(); return 0; }
void keyboard_post_init_user(void) { rgblight_enable_noeeprom();
  rgblight_mode_noeeprom(RGBLIGHT_MODE_TWINKLE + 5); defer_exec(5000, callback, NULL); }

bool led_update_user(led_t led_state) { static bool caps = false; if (caps != led_state.caps_lock)
  { caps = led_state.caps_lock; (!caps) ? rgblight_disable_noeeprom() : rgblight_enable_noeeprom();
  rgblight_mode_noeeprom(RGBLIGHT_MODE_TWINKLE + 5); } return true; }

layer_state_t default_layer_state_set_user(layer_state_t state) { switch (get_highest_layer(state)) {
  case GAME: rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_TWINKLE + 2);
    autoshift_disable(); defer_exec(3000, callback, NULL); break;
  case BASE: rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    autoshift_enable(); defer_exec(500, callback, NULL); break;
  default: rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_TWINKLE + 2);
    autoshift_enable(); break; } return state; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (get_highest_layer(layer_state|default_layer_state)) { case OZ: switch (keycode) {
    case KC_SPC: if (record->event.pressed) { tap_code(KC_SPC); tap_code(KC_LEFT); return false; } return false;
    case LT(1,KC_COMM): if (record->tap.count && record->event.pressed) { register_unicodemap(LSINGLE); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZAMP); tap_code(KC_LEFT); } return false;
    case LT(1,KC_DOT): if (record->tap.count && record->event.pressed) { register_unicodemap(ZDOT); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(EXCLAIM); tap_code(KC_LEFT); } return false;
    case LT(1,KC_SLSH): if (record->tap.count && record->event.pressed) { register_unicodemap(QUESTION); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZBANG); tap_code(KC_LEFT); } return false;
    case LT(1,KC_MINS): if (record->tap.count && record->event.pressed) { tap_code(KC_MINS); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(DASHEM); tap_code(KC_LEFT); } return false;
    case LT(1,KC_QUOT): if (record->tap.count && record->event.pressed) { register_unicodemap(ZQS); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZQD); tap_code(KC_LEFT); } return false;
    case LT(1,KC_1): if (record->tap.count && record->event.pressed) { register_unicodemap(Z1); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(EXCLAIM); tap_code(KC_LEFT); } return false;
    case LT(1,KC_2): if (record->tap.count && record->event.pressed) { register_unicodemap(Z2); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_2)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_3): if (record->tap.count && record->event.pressed) { register_unicodemap(Z3); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_3)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_4): if (record->tap.count && record->event.pressed) { register_unicodemap(Z4); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_4)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_5): if (record->tap.count && record->event.pressed) { tap_code(KC_5); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_5)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_6): if (record->tap.count && record->event.pressed) { tap_code(KC_9); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_6)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_7): if (record->tap.count && record->event.pressed) { register_unicodemap(Z7); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZAMP); tap_code(KC_LEFT); } return false;
    case LT(1,KC_8): if (record->tap.count && record->event.pressed) { tap_code(KC_8); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_8)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_9): if (record->tap.count && record->event.pressed) { tap_code(KC_6); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_0)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_0): if (record->tap.count && record->event.pressed) { tap_code(KC_0); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_9)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_A): if (record->tap.count && record->event.pressed) { register_unicodemap(ZA); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZAA); tap_code(KC_LEFT); } return false;
    case LT(1,KC_B): if (record->tap.count && record->event.pressed) { tap_code(KC_Q); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZBB); tap_code(KC_LEFT); } return false;
    case LT(1,KC_C): if (record->tap.count && record->event.pressed) { register_unicodemap(ZC); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZCC); tap_code(KC_LEFT); } return false;
    case LT(1,KC_D): if (record->tap.count && record->event.pressed) { tap_code(KC_P); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZDD); tap_code(KC_LEFT); } return false;
    case LT(1,KC_E): if (record->tap.count && record->event.pressed) { register_unicodemap(ZE); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZEE); tap_code(KC_LEFT); } return false;
    case LT(1,KC_F): if (record->tap.count && record->event.pressed) { register_unicodemap(ZF); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZFF); tap_code(KC_LEFT); } return false;
    case LT(1,KC_G): if (record->tap.count && record->event.pressed) { register_unicodemap(ZG); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZGG); tap_code(KC_LEFT); } return false;
    case LT(1,KC_H): if (record->tap.count && record->event.pressed) { register_unicodemap(ZH); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_H)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_I): if (record->tap.count && record->event.pressed) { register_unicodemap(ZI); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_I)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_J): if (record->tap.count && record->event.pressed) { send_unicode_string("ſ̣"); tap_code(KC_LEFT); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZJJ); tap_code(KC_LEFT); } return false;
    case LT(1,KC_K): if (record->tap.count && record->event.pressed) { register_unicodemap(ZK); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZKK); tap_code(KC_LEFT); } return false;
    case LT(1,KC_L): if (record->tap.count && record->event.pressed) { register_unicodemap(ZL); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZLL); tap_code(KC_LEFT); } return false;
    case LT(1,KC_M): if (record->tap.count && record->event.pressed) { register_unicodemap(ZM); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZMM); tap_code(KC_LEFT); } return false;
    case LT(1,KC_N): if (record->tap.count && record->event.pressed) { tap_code(KC_U); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_N)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_O): if (record->tap.count && record->event.pressed) { tap_code(KC_O); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_O)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_P): if (record->tap.count && record->event.pressed) { tap_code(KC_D); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZPP); tap_code(KC_LEFT); } return false;
    case LT(1,KC_Q): if (record->tap.count && record->event.pressed) { tap_code(KC_B); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(OGRAVECAP); tap_code(KC_LEFT); } return false;
    case LT(1,KC_R): if (record->tap.count && record->event.pressed) { register_unicodemap(ZR); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZRR); tap_code(KC_LEFT); } return false;
    case LT(1,KC_S): if (record->tap.count && record->event.pressed) { tap_code(KC_S); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_S)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_T): if (record->tap.count && record->event.pressed) { register_unicodemap(ZT); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZTT); tap_code(KC_LEFT); } return false;
    case LT(1,KC_U): if (record->tap.count && record->event.pressed) { tap_code(KC_N); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZUU); tap_code(KC_LEFT); } return false;
    case LT(1,KC_V): if (record->tap.count && record->event.pressed) { register_unicodemap(ZV); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZVV); tap_code(KC_LEFT); } return false;
    case LT(1,KC_W): if (record->tap.count && record->event.pressed) { register_unicodemap(ZW); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_M)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_X): if (record->tap.count && record->event.pressed) { tap_code(KC_X); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_X)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_Y): if (record->tap.count && record->event.pressed) { register_unicodemap(ZY); tap_code(KC_LEFT); } else if (record->event.pressed) { register_unicodemap(ZYY); tap_code(KC_LEFT); } return false;
    case LT(1,KC_Z): if (record->tap.count && record->event.pressed) { tap_code(KC_Z); tap_code(KC_LEFT); } else if (record->event.pressed) { tap_code16(S(KC_Z)); tap_code(KC_LEFT); } return false;
    case LT(1,KC_ENT): if (record->tap.count && record->event.pressed) { tap_code(KC_END); tap_code(KC_ENT); } else if (record->event.pressed) { tap_code16(C(KC_BSPC)); } return false;
    case LT(1,KC_BSPC): if (record->tap.count && record->event.pressed) { tap_code(KC_RGHT); tap_code(KC_BSPC); } else if (record->event.pressed) { tap_code16(C(KC_DEL)); } return false;
    default: return true; } }
  switch (keycode) {
    case LT(FN,BASE): if (record->tap.count && record->event.pressed) { set_single_default_layer(BASE); return false; }
    default: return true; } };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ortho_4x12(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
    KC_LEFT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGHT,
    KC_QUOT, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SPC), KC_UP,
    LT(FN,KC_MUTE), KC_Z, KC_X, KC_C, LT(FN,KC_V), KC_B, KC_N, LT(FN,KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_DOWN),
  [OZ] = LAYOUT_ortho_4x12(DF(BASE), LT(1,KC_1), LT(1,KC_2), LT(1,KC_3), LT(1,KC_4), LT(1,KC_5), LT(1,KC_6), LT(1,KC_7), LT(1,KC_8), LT(1,KC_9), LT(1,KC_0), LT(1,KC_MINS),
    C(KC_LEFT), LT(1,KC_Q), LT(1,KC_W), LT(1,KC_E), LT(1,KC_R), LT(1,KC_T), LT(1,KC_Y), LT(1,KC_U), LT(1,KC_I), LT(1,KC_O), LT(1,KC_P), C(KC_RGHT),
    LT(1,KC_QUOT), LT(1,KC_A), LT(1,KC_S), LT(1,KC_D), LT(1,KC_F), LT(1,KC_G), LT(1,KC_H), LT(1,KC_J), LT(1,KC_K), LT(1,KC_L), KC_SPC, TD(HOME),
    LT(FN,KC_MUTE), LT(1,KC_Z), LT(1,KC_X), LT(1,KC_C), LT(1,KC_V), LT(1,KC_B), LT(1,KC_N), LT(1,KC_M), LT(1,KC_COMM), LT(1,KC_DOT), LT(1,KC_SLSH), TD(END)),
  [GAME] = LAYOUT_ortho_4x12(LT(FN,BASE), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, LT(FN,KC_DEL),
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SPC, KC_ENT,
    LT(FN,KC_MUTE), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC),
  [FN] = LAYOUT_ortho_4x12(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
    KC_LBRC, C(KC_PPLS), A(KC_F4), KC_MS_U, KC_BTN1, KC_BTN3, KC_BTN3, KC_BTN1, KC_MS_U, RCS(KC_ESC), G(KC_PSCR), KC_RBRC,
    KC_TILD, KC_APP, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_COLN, KC_BSLS,
    KC_MUTE, UG_SATU, UG_SATD, RCS(KC_LEFT), C(KC_LEFT), TD(HOME), TD(END), C(KC_RGHT), RCS(KC_RGHT), UG_HUED, UG_HUEU, UG_TOGG) };
