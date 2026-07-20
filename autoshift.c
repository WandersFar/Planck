bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) { switch (keycode) {
    case LT(FN,KC_V):
    case LT(FN,KC_M):
    case LGUI_T(KC_A):
    case LALT_T(KC_S):
    case LSFT_T(KC_D):
    case LCTL_T(KC_F):
    case RCTL_T(KC_J):
    case RSFT_T(KC_K):
    case RALT_T(KC_L):
    case KC_BSPC:
    case KC_DEL:
    case KC_ENT:
    case KC_TAB:
    case C(KC_PGUP):
    case C(KC_PGDN):
    case KC_INS:
    case KC_P1:
    case KC_P2:
    case KC_BTN1:
    case KC_BTN2:
    case KC_BTN3:
    case KC_PIPE:
    case KC_DQT:
    case KC_TILD:
    case KC_COLN: return true; default: return false; } }

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) { switch (keycode) {
    case KC_BSPC: tap_code16((!shifted) ? KC_BSPC : C(KC_BSPC)); break;
    case KC_DEL: tap_code16((!shifted) ? KC_DEL : C(KC_DEL)); break;
    case KC_ENT: tap_code((!shifted) ? KC_ENT : KC_ESC); break;
    case KC_TAB: tap_code16((!shifted) ? KC_TAB : S(KC_TAB)); break;
    case C(KC_PGUP): tap_code16((!shifted) ? C(KC_PGUP) : KC_PGUP); break;
    case C(KC_PGDN): tap_code16((!shifted) ? C(KC_PGDN) : KC_PGDN); break;
    case KC_INS: tap_code((!shifted) ? KC_INS : KC_APP); break;
    case KC_P1: register_unicodemap((!shifted) ? RSINGLE : LSINGLE); break;
    case KC_P2: register_unicodemap((!shifted) ? DASHEM : DASHEN); break;
    case KC_BTN1: register_code((!shifted) ? KC_BTN1 : KC_BTN1); break;
    case KC_BTN2: register_code((!shifted) ? KC_BTN2 : KC_BTN2); break;
    case KC_BTN3: register_code((!shifted) ? KC_BTN3 : KC_BTN3); break;
    case KC_PIPE: tap_code16((!shifted) ? KC_PIPE : KC_BSLS); break;
    case KC_DQT: tap_code16((!shifted) ? KC_DQT : KC_QUOT); break;
    case KC_TILD: tap_code16((!shifted) ? KC_TILD : KC_GRV); break;
    case KC_COLN: tap_code16((!shifted) ? KC_COLN : KC_SCLN); break;
    default: if (shifted && leader_sequence_active()) { leader_sequence_add(get_tap_keycode(keycode)); }
      if (shifted) { add_weak_mods(MOD_BIT(KC_RSFT)); }
      register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode); } }

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) { switch (keycode) {
    case KC_BTN1: unregister_code((!shifted) ? KC_BTN1 : KC_NO); break;
    case KC_BTN2: unregister_code((!shifted) ? KC_BTN2 : KC_NO); break;
    case KC_BTN3: unregister_code((!shifted) ? KC_BTN3 : KC_NO); break;
    default: unregister_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode); clear_weak_mods(); } }