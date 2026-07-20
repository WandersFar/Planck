uint32_t callback(uint32_t trigger_time, void *cb_arg) { rgblight_disable_noeeprom(); return 0; }
void keyboard_post_init_user(void) { rgblight_enable_noeeprom();
  rgblight_mode_noeeprom(RGBLIGHT_MODE_TWINKLE + 5); defer_exec(10000, callback, NULL); }

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