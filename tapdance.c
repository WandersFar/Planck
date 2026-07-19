typedef enum { TD_NONE, TD_1T, TD_1H, TD_2T, TD_2H, } td_state_t;
typedef struct { bool is_press_action; td_state_t state; } td_tap_t;
enum { HOME, END };

td_state_t cur_dance(tap_dance_state_t *state) {
  if (state->count == 1) { if (state->pressed) return TD_1H; else return TD_1T; }
  else if (state->pressed) return TD_2H; else return TD_2T; }

static td_tap_t htap_state = { .is_press_action = true, .state = TD_NONE };
static td_tap_t etap_state = { .is_press_action = true, .state = TD_NONE };

void h_fn(tap_dance_state_t *state, void *user_data) { htap_state.state = cur_dance(state);
  switch (htap_state.state) {
    case TD_1T: tap_code(KC_HOME); break;
    case TD_1H: tap_code16(S(KC_HOME)); break;
    case TD_2T: tap_code16(C(KC_HOME)); break;
    case TD_2H: tap_code16(RCS(KC_HOME)); break;
    case TD_NONE: break; }
  htap_state.state = TD_NONE; }

void e_fn(tap_dance_state_t *state, void *user_data) { etap_state.state = cur_dance(state);
  switch (etap_state.state) {
    case TD_1T: tap_code(KC_END); break;
    case TD_1H: tap_code16(S(KC_END)); break;
    case TD_2T: tap_code16(C(KC_END)); break;
    case TD_2H: tap_code16(RCS(KC_END)); break;
    case TD_NONE: break; }
  etap_state.state = TD_NONE; }

tap_dance_action_t tap_dance_actions[] = {
  [HOME] = ACTION_TAP_DANCE_FN(h_fn),
  [END] = ACTION_TAP_DANCE_FN(e_fn) };

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { switch (keycode) {
  case TD(HOME):
  case TD(END): return 240;
  default: return TAPPING_TERM; } }