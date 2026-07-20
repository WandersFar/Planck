const key_override_t ctrl_voldn_pgup_override = ko_make_basic(MOD_MASK_CTRL, LT(FN,KC_VOLD), KC_PGUP);
const key_override_t ctrl_volup_pgdn_override = ko_make_basic(MOD_MASK_CTRL, LT(FN,KC_VOLU), KC_PGDN);
const key_override_t ctrl_tab_home_override = ko_make_basic(MOD_BIT(KC_RCTL), LALT_T(KC_TAB), KC_HOME);
const key_override_t ctrl_del_end_override = ko_make_basic(MOD_BIT(KC_LCTL), RALT_T(KC_DEL), KC_END);
const key_override_t ctrl_enter_left_override = ko_make_basic(MOD_BIT(KC_RCTL), LSFT_T(KC_ENT), KC_LEFT);
const key_override_t ctrl_bksp_right_override = ko_make_basic(MOD_BIT(KC_LCTL), RSFT_T(KC_BSPC), KC_RGHT);
const key_override_t ctrl_esc_up_override = ko_make_basic(MOD_MASK_CTRL, LCTL_T(KC_ESC), KC_UP);
const key_override_t ctrl_base_down_override = ko_make_basic(MOD_MASK_CTRL, RCTL_T(BASE), KC_DOWN);
const key_override_t left_shift_pgup_override = ko_make_basic(MOD_MASK_SHIFT, C(KC_PGUP), RCS(KC_PGUP));
const key_override_t left_shift_pgdn_override = ko_make_basic(MOD_MASK_SHIFT, C(KC_PGDN), RCS(KC_PGDN));
const key_override_t zoom_out_override = ko_make_basic(MOD_MASK_CTRL, C(KC_PGUP), C(KC_MINS));
const key_override_t zoom_in_override = ko_make_basic(MOD_MASK_CTRL, C(KC_PGDN), C(KC_EQL));

const key_override_t *key_overrides[] = {
    &ctrl_voldn_pgup_override,
    &ctrl_volup_pgdn_override,
    &ctrl_tab_home_override,
    &ctrl_del_end_override,
    &ctrl_enter_left_override,
    &ctrl_bksp_right_override,
    &ctrl_esc_up_override,
    &ctrl_base_down_override,
    &left_shift_pgup_override,
    &left_shift_pgdn_override,
    &zoom_out_override,
    &zoom_in_override };