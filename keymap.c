#include QMK_KEYBOARD_H

float lock[][2] = SONG(LOCK);
float unlock[][2] = SONG(UNLOCK);

layer_state_t default_layer_state_set_user(layer_state_t state) {
	switch (get_highest_layer(state)) {
	case 1:
		autoshift_disable();
		PLAY_SONG(lock);
		break;
	case 0:
		autoshift_enable();
		PLAY_SONG(unlock);
		break;
	} return state; }

bool led_update_user(led_t led_state) {
	static bool caps = false;
	if (caps != led_state.caps_lock) {
		caps = led_state.caps_lock;
		if (caps) { rgblight_enable_noeeprom(); }
		else { rgblight_disable_noeeprom(); }
	} return true; }

enum unicode_names {
	UC_DEGREE,
	UC_SUPONE,
	UC_SUPTWO,
	UC_SUPTHREE,
	UC_SUPFOUR,
	UC_SUPFIVE,
	UC_SUPSIX,
	UC_SUPSEVEN,
	UC_SUPEIGHT,
	UC_SUPNINE,
	UC_ONEHALF,
	UC_ONETHIRD,
	UC_ONEQUARTER,
	UC_ONEFIFTH,
	UC_ONESIXTH,
	UC_ONEEIGHTH,
	UC_TWOTHIRDS,
	UC_TWOFIFTHS,
	UC_THREEQUARTERS,
	UC_THREEFIFTHS,
	UC_THREEEIGHTHS,
	UC_FOURFIFTHS,
	UC_FIVESIXTHS,
	UC_FIVEEIGHTHS,
	UC_SEVENEIGHTHS,
	UC_DASHEM,
	UC_DASHEN,
	UC_QUOTELEFTSINGLE,
	UC_QUOTELEFTDOUBLE,
	UC_QUOTERIGHTSINGLE,
	UC_QUOTERIGHTDOUBLE,
	UC_EQT,
	UC_EQH,
	UC_ADT,
	UC_ADH,
	UC_ART,
	UC_ARH,
	UC_EDT,
	UC_EDH,
	UC_DGT,
	UC_DGH,
	UC_STT,
	UC_STH,
	UC_YDT,
	UC_YDH,
	UC_UDT,
	UC_UDH,
	UC_IDT,
	UC_IDH,
	UC_ODT,
	UC_ODH,
	UC_OST,
	UC_OSH,
	UC_GLT,
	UC_GLH,
	UC_ACT,
	UC_ACH,
	UC_AET,
	UC_AEH,
	UC_EAT,
	UC_EAH,
	UC_ECT,
	UC_ECH,
	UC_HVT,
	UC_HVH,
	UC_YAT,
	UC_YAH,
	UC_UAT,
	UC_UAH,
	UC_IAT,
	UC_IAH,
	UC_OAT,
	UC_OAH,
	UC_OET,
	UC_OEH,
	UC_GRT,
	UC_GRH,
	UC_AAT,
	UC_AAH,
	UC_SST,
	UC_SSH,
	UC_EGT,
	UC_EGH,
	UC_DTT,
	UC_DTH,
	UC_LUT,
	UC_LUH,
	UC_RDT,
	UC_RDH,
	UC_UGT,
	UC_UGH,
	UC_IGT,
	UC_IGH,
	UC_OGT,
	UC_OGH,
	UC_OTT,
	UC_OTH,
	UC_AGT,
	UC_AGH,
	UC_ATT,
	UC_ATH,
	UC_CLT,
	UC_CLH,
	UC_CKT,
	UC_CKH,
	UC_BUT,
	UC_BUH,
	UC_NTT,
	UC_NTH,
	UC_UCT,
	UC_UCH,
	UC_ICT,
	UC_ICH,
	UC_OCT,
	UC_OCH,
	UC_QUT,
	UC_QUH,
};

const uint32_t unicode_map[] PROGMEM = {
	[UC_DEGREE] = 0x00B0,	// °
	[UC_SUPONE] = 0x00B9,	// ¹
	[UC_SUPTWO] = 0x00B2,	// ²
	[UC_SUPTHREE] = 0x00B3,	// ³
	[UC_SUPFOUR] = 0x2074,	// ⁴
	[UC_SUPFIVE] = 0x2075,	// ⁵
	[UC_SUPSIX] = 0x2076,	// ⁶
	[UC_SUPSEVEN] = 0x2077,	// ⁷
	[UC_SUPEIGHT] = 0x2078,	// ⁸
	[UC_SUPNINE] = 0x2079,	// ⁹
	[UC_ONEHALF] = 0x00BD,	// ½
	[UC_ONETHIRD] = 0x2153,	// ⅓
	[UC_ONEQUARTER] = 0x00BC,	// ¼
	[UC_ONEFIFTH] = 0x2155,	// ⅕
	[UC_ONESIXTH] = 0x2159,	// ⅙
	[UC_ONEEIGHTH] = 0x215B,	// ⅛
	[UC_TWOTHIRDS] = 0x2154,	// ⅔
	[UC_TWOFIFTHS] = 0x2156,	// ⅖
	[UC_THREEQUARTERS] = 0x00BE,	// ¾
	[UC_THREEFIFTHS] = 0x2157,	// ⅗
	[UC_THREEEIGHTHS] = 0x215C,	// ⅜
	[UC_FOURFIFTHS] = 0x2158,	// ⅘
	[UC_FIVESIXTHS] = 0x215A,	// ⅚
	[UC_FIVEEIGHTHS] = 0x215D,	// ⅝
	[UC_SEVENEIGHTHS] = 0x215E,	// ⅞
	[UC_DASHEM] = 0x2014,	// —
	[UC_DASHEN] = 0x2013,	// –
	[UC_QUOTELEFTSINGLE] = 0x2018,	// ‘
	[UC_QUOTELEFTDOUBLE] = 0x201C,	// “
	[UC_QUOTERIGHTSINGLE] = 0x2019,	// ’
	[UC_QUOTERIGHTDOUBLE] = 0x201D,	// ”
	[UC_EQT] = 0x2260,	// ≠
	[UC_EQH] = 0x00A1,	// ¡
	[UC_ADT] = 0x00E4,	// ä
	[UC_ADH] = 0x00C4,	// Ä
	[UC_ART] = 0x00E5,	// å
	[UC_ARH] = 0x00C5,	// Å
	[UC_EDT] = 0x00EB,	// ë
	[UC_EDH] = 0x00CB,	// Ë
	[UC_DGT] = 0x2020,	// †
	[UC_DGH] = 0x2021,	// ‡
	[UC_STT] = 0x2605,	// ★
	[UC_STH] = 0x2606,	// ☆
	[UC_YDT] = 0x00FF,	// ÿ
	[UC_YDH] = 0x0178,	// Ÿ
	[UC_UDT] = 0x00FC,	// ü
	[UC_UDH] = 0x00DC,	// Ü
	[UC_IDT] = 0x00EF,	// ï
	[UC_IDH] = 0x00CF,	// Ï
	[UC_ODT] = 0x00F6,	// ö
	[UC_ODH] = 0x00D6,	// Ö
	[UC_OST] = 0x00F8,	// ø
	[UC_OSH] = 0x00D8,	// Ø
	[UC_GLT] = 0x00AB,	// «
	[UC_GLH] = 0x2039,	// ‹
	[UC_ACT] = 0x00E2,	// â
	[UC_ACH] = 0x00C2,	// Â
	[UC_AET] = 0x00E6,	// æ
	[UC_AEH] = 0x00C6,	// Æ
	[UC_EAT] = 0x00E9,	// é
	[UC_EAH] = 0x00C9,	// É
	[UC_ECT] = 0x00EA,	// ê
	[UC_ECH] = 0x00CA,	// Ê
	[UC_HVT] = 0x2194,	// ↔
	[UC_HVH] = 0x2195,	// ↕
	[UC_YAT] = 0x00FD,	// ý
	[UC_YAH] = 0x00DD,	// Ý
	[UC_UAT] = 0x00FA,	// ú
	[UC_UAH] = 0x00DA,	// Ú
	[UC_IAT] = 0x00ED,	// í
	[UC_IAH] = 0x00CD,	// Í
	[UC_OAT] = 0x00F3,	// ó
	[UC_OAH] = 0x00D3,	// Ó
	[UC_OET] = 0x0153,	// œ
	[UC_OEH] = 0x0152,	// Œ
	[UC_GRT] = 0x00BB,	// »
	[UC_GRH] = 0x203A,	// ›
	[UC_AAT] = 0x00E1,	// á
	[UC_AAH] = 0x00C1,	// Á
	[UC_SST] = 0x00DF,	// ß
	[UC_SSH] = 0x1E9E,	// ẞ
	[UC_EGT] = 0x00E8,	// è
	[UC_EGH] = 0x00C8,	// È
	[UC_DTT] = 0x2026,	// …
	[UC_DTH] = 0x00B7,	// ·
	[UC_LUT] = 0x2190,	// ←
	[UC_LUH] = 0x2191,	// ↑
	[UC_RDT] = 0x2192,	// →
	[UC_RDH] = 0x2193,	// ↓
	[UC_UGT] = 0x00F9,	// ù
	[UC_UGH] = 0x00D9,	// Ù
	[UC_IGT] = 0x00EC,	// ì
	[UC_IGH] = 0x00CC,	// Ì
	[UC_OGT] = 0x00F2,	// ò
	[UC_OGH] = 0x00D2,	// Ò
	[UC_OTT] = 0x00F5,	// õ
	[UC_OTH] = 0x00D5,	// Õ
	[UC_AGT] = 0x00E0,	// à
	[UC_AGH] = 0x00C0,	// À
	[UC_ATT] = 0x00E3,	// ã
	[UC_ATH] = 0x00C3,	// Ã
	[UC_CLT] = 0x00E7,	// ç
	[UC_CLH] = 0x00C7,	// Ç
	[UC_CKT] = 0x2713,	// ✓
	[UC_CKH] = 0x00A7,	// §
	[UC_BUT] = 0x2022,	// •
	[UC_BUH] = 0x25E6,	// ◦
	[UC_NTT] = 0x00F1,	// ñ
	[UC_NTH] = 0x00D1,	// Ñ
	[UC_UCT] = 0x00FB,	// û
	[UC_UCH] = 0x00DB,	// Û
	[UC_ICT] = 0x00EE,	// î
	[UC_ICH] = 0x00CE,	// Î
	[UC_OCT] = 0x00F4,	// ô
	[UC_OCH] = 0x00D4,	// Ô
	[UC_QUT] = 0x203D,	// ‽
	[UC_QUH] = 0x00BF,	// ¿
};

#define U_DEG UM(UC_DEGREE)	// °
#define U_ONE UM(UC_SUPONE)	// ¹
#define U_TWO UM(UC_SUPTWO)	// ²
#define U_TRE UM(UC_SUPTHREE)	// ³
#define U_FOR UM(UC_SUPFOUR)	// ⁴
#define U_FVE UM(UC_SUPFIVE)	// ⁵
#define U_SIX UM(UC_SUPSIX)	// ⁶
#define U_SVN UM(UC_SUPSEVEN)	// ⁷
#define U_EGT UM(UC_SUPEIGHT)	// ⁸
#define U_NIN UM(UC_SUPNINE)	// ⁹
#define U_HLF UM(UC_ONEHALF)	// ½
#define U_TRD UM(UC_ONETHIRD)	// ⅓
#define U_QTR UM(UC_ONEQUARTER)	// ¼
#define U_FTH UM(UC_ONEFIFTH)	// ⅕
#define U_XTH UM(UC_ONESIXTH)	// ⅙
#define U_GTH UM(UC_ONEEIGHTH)	// ⅛
#define U_WRD UM(UC_TWOTHIRDS)	// ⅔
#define U_WFT UM(UC_TWOFIFTHS)	// ⅖
#define U_TQT UM(UC_THREEQUARTERS)	// ¾
#define U_TFT UM(UC_THREEFIFTHS)	// ⅗
#define U_TGT UM(UC_THREEEIGHTHS)	// ⅜
#define U_FFT UM(UC_FOURFIFTHS)	// ⅘
#define U_VXT UM(UC_FIVESIXTHS)	// ⅚
#define U_VGT UM(UC_FIVEEIGHTHS)	// ⅝
#define U_SGT UM(UC_SEVENEIGHTHS)	// ⅞

enum autoshift_unicode {
	U_EQ = SAFE_RANGE,	// ≠ ¡
	U_AD,	// ä Ä
	U_AR,	// å Å
	U_ED,	// ë Ë
	U_DG,	// † ‡
	U_ST,	// ★ ☆
	U_YD,	// ÿ Ÿ
	U_UD,	// ü Ü
	U_ID,	// ï Ï
	U_OD,	// ö Ö
	U_OS,	// ø Ø
	U_GL,	// « ‹
	U_AC,	// â Â
	U_AE,	// æ Æ
	U_EA,	// é É
	U_EC,	// ê Ê
	U_HV,	// ↔ ↕
	U_YA,	// ý Ý
	U_UA,	// ú Ú
	U_IA,	// í Í
	U_OA,	// ó Ó
	U_OE,	// œ Œ
	U_GR,	// » ›
	U_AA,	// á Á
	U_SS,	// ß ẞ
	U_EG,	// è È
	U_DT,	// … ·
	U_LU,	// ← ↑
	U_RD,	// → ↓
	U_UG,	// ù Ù
	U_IG,	// ì Ì
	U_OG,	// ò Ò
	U_OT,	// õ Õ
	U_AG,	// à À
	U_AT,	// ã Ã
	U_CL,	// ç Ç
	U_CK,	// ✓ §
	U_BU,	// • ◦
	U_NT,	// ñ Ñ
	U_UC,	// û Û
	U_IC,	// î Î
	U_OC,	// ô Ô
	U_QU,	// ‽ ¿
	U_CRY,	// ಠ_ಠ ಥ_ಥ
	U_IDK,	// ¯\_(ツ)_/¯ ¯\\\_(ツ)\_/¯
	U_LEN,	// :þ ( ͡° ͜ʖ ͡°)
	U_QUOTE,
};

enum states { OPEN, CLOSE };
enum states state = OPEN;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	static uint16_t TIMER;
	switch (keycode) {
		case U_QUOTE:
			if (record->event.pressed) { TIMER = timer_read(); }
			else { if (timer_elapsed(TIMER) > TAPPING_TERM) {
				if(state == OPEN) { register_unicodemap(UC_QUOTELEFTDOUBLE); state = CLOSE; }
				else { register_unicodemap(UC_QUOTERIGHTDOUBLE); state = OPEN; }
			} else { if (timer_elapsed(TIMER) < TAPPING_TERM) register_unicodemap(UC_QUOTERIGHTSINGLE); } return false; }
		default: return true; } };

const uint16_t PROGMEM l_scroll_down[] = {KC_C, LT(2,KC_V), COMBO_END};
const uint16_t PROGMEM r_scroll_down[] = {LT(2,KC_M), KC_COMM, COMBO_END};
const uint16_t PROGMEM l_scroll_up[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM r_scroll_up[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM l_vol_down[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM r_vol_down[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM l_vol_up[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM r_vol_up[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM scroll_left[] = {LALT_T(KC_S), LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM scroll_right[] = {RSFT_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM word_left[] = {LSFT_T(KC_D), LCTL_T(KC_F), COMBO_END};
const uint16_t PROGMEM word_right[] = {RCTL_T(KC_J), RSFT_T(KC_K), COMBO_END};
const uint16_t PROGMEM caps_lock[] = {LSFT_T(KC_D), RSFT_T(KC_K), COMBO_END};
const uint16_t PROGMEM shift_alt_esc[] = {LCTL_T(KC_F), RCTL_T(KC_J), COMBO_END};
const uint16_t PROGMEM degree[] = {KC_EQL, KC_0, COMBO_END};
const uint16_t PROGMEM sup_1[] = {KC_EQL, KC_1, COMBO_END};
const uint16_t PROGMEM sup_2[] = {KC_EQL, KC_2, COMBO_END};
const uint16_t PROGMEM sup_3[] = {KC_EQL, KC_3, COMBO_END};
const uint16_t PROGMEM sup_4[] = {KC_EQL, KC_4, COMBO_END};
const uint16_t PROGMEM sup_5[] = {KC_EQL, KC_5, COMBO_END};
const uint16_t PROGMEM sup_6[] = {KC_EQL, KC_6, COMBO_END};
const uint16_t PROGMEM sup_7[] = {KC_EQL, KC_7, COMBO_END};
const uint16_t PROGMEM sup_8[] = {KC_EQL, KC_8, COMBO_END};
const uint16_t PROGMEM sup_9[] = {KC_EQL, KC_9, COMBO_END};
const uint16_t PROGMEM one_half[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM one_third[] = {KC_1, KC_3, COMBO_END};
const uint16_t PROGMEM one_quarter[] = {KC_1, KC_4, COMBO_END};
const uint16_t PROGMEM one_fifth[] = {KC_1, KC_5, COMBO_END};
const uint16_t PROGMEM one_sixth[] = {KC_1, KC_6, COMBO_END};
const uint16_t PROGMEM one_eighth[] = {KC_1, KC_8, COMBO_END};
const uint16_t PROGMEM two_thirds[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM two_fifths[] = {KC_2, KC_5, COMBO_END};
const uint16_t PROGMEM three_quarters[] = {KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM three_fifths[] = {KC_3, KC_5, COMBO_END};
const uint16_t PROGMEM three_eighths[] = {KC_3, KC_8, COMBO_END};
const uint16_t PROGMEM four_fifths[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM five_sixths[] = {KC_5, KC_6, COMBO_END};
const uint16_t PROGMEM five_eighths[] = {KC_5, KC_8, COMBO_END};
const uint16_t PROGMEM seven_eighths[] = {KC_7, KC_8, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
	COMBO(l_scroll_down, KC_WH_D),
	COMBO(r_scroll_down, KC_WH_D),
	COMBO(l_scroll_up, KC_WH_U),
	COMBO(r_scroll_up, KC_WH_U),
	COMBO(l_vol_down, KC_VOLD),
	COMBO(r_vol_down, KC_VOLD),
	COMBO(l_vol_up, KC_VOLU),
	COMBO(r_vol_up, KC_VOLU),
	COMBO(scroll_left, KC_WH_L),
	COMBO(scroll_right, KC_WH_R),
	COMBO(word_left, C(KC_LEFT)),
	COMBO(word_right, C(KC_RGHT)),
	COMBO(caps_lock, KC_CAPS),
	COMBO(shift_alt_esc, LSA(KC_ESC)),
	COMBO(degree, U_DEG),
	COMBO(sup_1, U_ONE),
	COMBO(sup_2, U_TWO),
	COMBO(sup_3, U_TRE),
	COMBO(sup_4, U_FOR),
	COMBO(sup_5, U_FVE),
	COMBO(sup_6, U_SIX),
	COMBO(sup_7, U_SVN),
	COMBO(sup_8, U_EGT),
	COMBO(sup_9, U_NIN),
	COMBO(one_half, U_HLF),
	COMBO(one_third, U_TRD),
	COMBO(one_quarter, U_QTR),
	COMBO(one_fifth, U_FTH),
	COMBO(one_sixth, U_XTH),
	COMBO(one_eighth, U_GTH),
	COMBO(two_thirds, U_WRD),
	COMBO(two_fifths, U_WFT),
	COMBO(three_quarters, U_TQT),
	COMBO(three_fifths, U_TFT),
	COMBO(three_eighths, U_TGT),
	COMBO(four_fifths, U_FFT),
	COMBO(five_sixths, U_VXT),
	COMBO(five_eighths, U_VGT),
	COMBO(seven_eighths, U_SGT), };

bool encoder_update_user(uint8_t index, bool clockwise) {
	switch (get_highest_layer(layer_state|default_layer_state)) {
		case 0:
			if (get_mods() & MOD_MASK_CTRL) {
					if (clockwise) { tap_code(KC_Y);
					} else { tap_code(KC_Z); }
			} else if (get_mods() & MOD_MASK_SHIFT) {
					del_mods(MOD_MASK_SHIFT);
					if (clockwise) { tap_code(KC_F3);
					} else { tap_code16(S(KC_F3)); }
			} else if (get_mods() & MOD_MASK_ALT) {
					del_mods(MOD_MASK_ALT);
					if (clockwise) { tap_code16(C(KC_EQL));
					} else { tap_code16(C(KC_MINS)); }
			} else if (get_mods() & MOD_MASK_GUI) {
					del_mods(MOD_MASK_GUI);
					if (clockwise) { tap_code(KC_WH_R);
					} else { tap_code(KC_WH_L); }
			} else if (clockwise) { tap_code(KC_WH_D);
			} else { tap_code(KC_WH_U); }
			break;
		default:
			if (clockwise) { tap_code_delay(KC_VOLU, 10);
			} else { tap_code_delay(KC_VOLD, 10); }
			break;
	} return false; }

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case LT(3,KC_G):
		case LT(3,KC_H):
		case LT(2,KC_V):
		case LT(2,KC_M):
		case LGUI_T(KC_A):
		case LALT_T(KC_S):
		case LSFT_T(KC_D):
		case LCTL_T(KC_F):
		case RCTL_T(KC_J):
		case RSFT_T(KC_K):
		case RALT_T(KC_L):
		case KC_BSPC:
		case KC_TAB:
		case KC_ENT:
		case KC_DEL:
		case KC_BTN1:
		case KC_BTN2:
		case KC_BTN3:
		case KC_COLN:
		case KC_DQT:
		case U_EQ:
		case U_AD:
		case U_AR:
		case U_ED:
		case U_DG:
		case U_ST:
		case U_YD:
		case U_UD:
		case U_ID:
		case U_OD:
		case U_OS:
		case U_GL:
		case U_AC:
		case U_AE:
		case U_EA:
		case U_EC:
		case U_HV:
		case U_YA:
		case U_UA:
		case U_IA:
		case U_OA:
		case U_OE:
		case U_GR:
		case U_AA:
		case U_SS:
		case U_EG:
		case U_DT:
		case U_LU:
		case U_RD:
		case U_UG:
		case U_IG:
		case U_OG:
		case U_OT:
		case U_AG:
		case U_AT:
		case U_CL:
		case U_CK:
		case U_BU:
		case U_NT:
		case U_UC:
		case U_IC:
		case U_OC:
		case U_QU:
		case U_CRY:
		case U_IDK:
		case U_LEN:
			return true;
		default:
			return false; } }

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
	switch(keycode) {
		case KC_BSPC: register_code16((!shifted) ? KC_BSPC : C(KC_BSPC)); break;
		case KC_TAB: register_code16((!shifted) ? KC_TAB : S(KC_TAB)); break;
		case KC_ENT: register_code16((!shifted) ? KC_ENT : KC_ESC); break;
		case KC_DEL: register_code16((!shifted) ? KC_DEL : S(KC_DEL)); break;
		case KC_BTN1: register_code((!shifted) ? KC_BTN1 : KC_BTN1); break;
		case KC_BTN2: register_code((!shifted) ? KC_BTN2 : KC_BTN2); break;
		case KC_BTN3: register_code((!shifted) ? KC_BTN3 : KC_BTN3); break;
		case KC_COLN: register_code16((!shifted) ? KC_COLN : KC_SCLN); break;
		case KC_DQT: register_code16((!shifted) ? KC_DQT : KC_QUOT); break;
		case U_EQ: register_unicodemap((!shifted) ? UC_EQT : UC_EQH); break;
		case U_AD: register_unicodemap((!shifted) ? UC_ADT : UC_ADH); break;
		case U_AR: register_unicodemap((!shifted) ? UC_ART : UC_ARH); break;
		case U_ED: register_unicodemap((!shifted) ? UC_EDT : UC_EDH); break;
		case U_DG: register_unicodemap((!shifted) ? UC_DGT : UC_DGH); break;
		case U_ST: register_unicodemap((!shifted) ? UC_STT : UC_STH); break;
		case U_YD: register_unicodemap((!shifted) ? UC_YDT : UC_YDH); break;
		case U_UD: register_unicodemap((!shifted) ? UC_UDT : UC_UDH); break;
		case U_ID: register_unicodemap((!shifted) ? UC_IDT : UC_IDH); break;
		case U_OD: register_unicodemap((!shifted) ? UC_ODT : UC_ODH); break;
		case U_OS: register_unicodemap((!shifted) ? UC_OST : UC_OSH); break;
		case U_GL: register_unicodemap((!shifted) ? UC_GLT : UC_GLH); break;
		case U_AC: register_unicodemap((!shifted) ? UC_ACT : UC_ACH); break;
		case U_AE: register_unicodemap((!shifted) ? UC_AET : UC_AEH); break;
		case U_EA: register_unicodemap((!shifted) ? UC_EAT : UC_EAH); break;
		case U_EC: register_unicodemap((!shifted) ? UC_ECT : UC_ECH); break;
		case U_HV: register_unicodemap((!shifted) ? UC_HVT : UC_HVH); break;
		case U_YA: register_unicodemap((!shifted) ? UC_YAT : UC_YAH); break;
		case U_UA: register_unicodemap((!shifted) ? UC_UAT : UC_UAH); break;
		case U_IA: register_unicodemap((!shifted) ? UC_IAT : UC_IAH); break;
		case U_OA: register_unicodemap((!shifted) ? UC_OAT : UC_OAH); break;
		case U_OE: register_unicodemap((!shifted) ? UC_OET : UC_OEH); break;
		case U_GR: register_unicodemap((!shifted) ? UC_GRT : UC_GRH); break;
		case U_AA: register_unicodemap((!shifted) ? UC_AAT : UC_AAH); break;
		case U_SS: register_unicodemap((!shifted) ? UC_SST : UC_SSH); break;
		case U_EG: register_unicodemap((!shifted) ? UC_EGT : UC_EGH); break;
		case U_DT: register_unicodemap((!shifted) ? UC_DTT : UC_DTH); break;
		case U_LU: register_unicodemap((!shifted) ? UC_LUT : UC_LUH); break;
		case U_RD: register_unicodemap((!shifted) ? UC_RDT : UC_RDH); break;
		case U_UG: register_unicodemap((!shifted) ? UC_UGT : UC_UGH); break;
		case U_IG: register_unicodemap((!shifted) ? UC_IGT : UC_IGH); break;
		case U_OG: register_unicodemap((!shifted) ? UC_OGT : UC_OGH); break;
		case U_OT: register_unicodemap((!shifted) ? UC_OTT : UC_OTH); break;
		case U_AG: register_unicodemap((!shifted) ? UC_AGT : UC_AGH); break;
		case U_AT: register_unicodemap((!shifted) ? UC_ATT : UC_ATH); break;
		case U_CL: register_unicodemap((!shifted) ? UC_CLT : UC_CLH); break;
		case U_CK: register_unicodemap((!shifted) ? UC_CKT : UC_CKH); break;
		case U_BU: register_unicodemap((!shifted) ? UC_BUT : UC_BUH); break;
		case U_NT: register_unicodemap((!shifted) ? UC_NTT : UC_NTH); break;
		case U_UC: register_unicodemap((!shifted) ? UC_UCT : UC_UCH); break;
		case U_IC: register_unicodemap((!shifted) ? UC_ICT : UC_ICH); break;
		case U_OC: register_unicodemap((!shifted) ? UC_OCT : UC_OCH); break;
		case U_QU: register_unicodemap((!shifted) ? UC_QUT : UC_QUH); break;
		case U_CRY: send_unicode_string((!shifted) ? ("ಠ_ಠ") : ("ಥ_ಥ")); break;
		case U_IDK: send_unicode_string((!shifted) ? ("¯\\_(ツ)_/¯") : ("¯\\\\\\_(ツ)\\_/¯")); break;
		case U_LEN: send_unicode_string((!shifted) ? (":þ") : ("( ͡° ͜ʖ ͡°)")); break;
		default:
			if (shifted) { add_weak_mods(MOD_BIT(KC_RSFT)); }
			register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode); } }

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
	switch(keycode) {
		case KC_BSPC: unregister_code16((!shifted) ? KC_BSPC : C(KC_BSPC)); break;
		case KC_TAB: unregister_code16((!shifted) ? KC_TAB : S(KC_TAB)); break;
		case KC_ENT: unregister_code16((!shifted) ? KC_ENT : KC_ESC); break;
		case KC_DEL: unregister_code16((!shifted) ? KC_DEL : S(KC_DEL)); break;
		case KC_BTN1: unregister_code((!shifted) ? KC_BTN1 : KC_NO); break;
		case KC_BTN2: unregister_code((!shifted) ? KC_BTN2 : KC_NO); break;
		case KC_BTN3: unregister_code((!shifted) ? KC_BTN3 : KC_NO); break;
		case KC_COLN: unregister_code16((!shifted) ? KC_COLN : KC_SCLN); break;
		case KC_DQT: unregister_code16((!shifted) ? KC_DQT : KC_QUOT); break;
		case U_EQ: break;
		case U_AD: break;
		case U_AR: break;
		case U_ED: break;
		case U_DG: break;
		case U_ST: break;
		case U_YD: break;
		case U_UD: break;
		case U_ID: break;
		case U_OD: break;
		case U_OS: break;
		case U_GL: break;
		case U_AC: break;
		case U_AE: break;
		case U_EA: break;
		case U_EC: break;
		case U_HV: break;
		case U_YA: break;
		case U_UA: break;
		case U_IA: break;
		case U_OA: break;
		case U_OE: break;
		case U_GR: break;
		case U_AA: break;
		case U_SS: break;
		case U_EG: break;
		case U_DT: break;
		case U_LU: break;
		case U_RD: break;
		case U_UG: break;
		case U_IG: break;
		case U_OG: break;
		case U_OT: break;
		case U_AG: break;
		case U_AT: break;
		case U_CL: break;
		case U_CK: break;
		case U_BU: break;
		case U_NT: break;
		case U_UC: break;
		case U_IC: break;
		case U_OC: break;
		case U_QU: break;
		case U_CRY: break;
		case U_IDK: break;
		case U_LEN: break;
		default:
			unregister_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
			clear_weak_mods(); } }

typedef enum {
	TD_NONE,
	TD_1T,
	TD_1H,
	TD_2T,
	TD_2H,
} td_state_t;

typedef struct {
	bool is_press_action;
	td_state_t state;
} td_tap_t;

enum {
	DASH,
	QUOTE,
	HOME,
	END, };

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case TD(DASH):
		case TD(QUOTE):
			return 200;
		case TD(HOME):
		case TD(END):
			return 320;
		default:
			return TAPPING_TERM; } }

td_state_t cur_dance(tap_dance_state_t *state) {
	if (state->count == 1) {
		if (state->pressed) return TD_1H;
		else return TD_1T;
	} else if (state->pressed) return TD_2H;
		else return TD_2T; }

static td_tap_t dtap_state = {
	.is_press_action = true,
	.state = TD_NONE };

static td_tap_t qtap_state = {
	.is_press_action = true,
	.state = TD_NONE };

static td_tap_t htap_state = {
	.is_press_action = true,
	.state = TD_NONE };

static td_tap_t etap_state = {
	.is_press_action = true,
	.state = TD_NONE };

void d_finished(tap_dance_state_t *state, void *user_data) {
	dtap_state.state = cur_dance(state);
	switch (dtap_state.state) {
		case TD_1T: register_code(KC_MINS); break;
		case TD_1H: register_code16(S(KC_MINS)); break;
		case TD_2T: register_unicodemap(UC_DASHEM); break;
		case TD_2H: register_unicodemap(UC_DASHEN); break;
		case TD_NONE: break; } }

void d_reset(tap_dance_state_t *state, void *user_data) {
	switch (dtap_state.state) {
		case TD_1T: unregister_code(KC_MINS); break;
		case TD_1H: unregister_code16(S(KC_MINS)); break;
		case TD_2T: break;
		case TD_2H: break;
		case TD_NONE: break; }
	dtap_state.state = TD_NONE; }

void q_finished(tap_dance_state_t *state, void *user_data) {
	qtap_state.state = cur_dance(state);
	switch (qtap_state.state) {
		case TD_1T: register_unicodemap(UC_QUOTERIGHTSINGLE); break;
		case TD_1H: register_code16(S(KC_QUOT)); break;
		case TD_2T: register_unicodemap(UC_QUOTELEFTSINGLE); break;
		case TD_2H: register_code(KC_QUOT); break;
		case TD_NONE: break; } }

void q_reset(tap_dance_state_t *state, void *user_data) {
	switch (qtap_state.state) {
		case TD_1T: break;
		case TD_1H: unregister_code16(S(KC_QUOT)); break;
		case TD_2T: break;
		case TD_2H: unregister_code(KC_QUOT); break;
		case TD_NONE: break; }
	qtap_state.state = TD_NONE; }

void h_finished(tap_dance_state_t *state, void *user_data) {
	htap_state.state = cur_dance(state);
	switch (htap_state.state) {
		case TD_1T: register_code(KC_HOME); break;
		case TD_1H: register_code16(S(KC_HOME)); break;
		case TD_2T: register_code16(C(KC_HOME)); break;
		case TD_2H: register_code16(RCS(KC_HOME)); break;
		case TD_NONE: break; } }

void h_reset(tap_dance_state_t *state, void *user_data) {
	switch (htap_state.state) {
		case TD_1T: unregister_code(KC_HOME); break;
		case TD_1H: unregister_code16(S(KC_HOME)); break;
		case TD_2T: unregister_code16(C(KC_HOME)); break;
		case TD_2H: unregister_code16(RCS(KC_HOME)); break;
		case TD_NONE: break; }
	htap_state.state = TD_NONE; }

void e_finished(tap_dance_state_t *state, void *user_data) {
	etap_state.state = cur_dance(state);
	switch (etap_state.state) {
		case TD_1T: register_code(KC_END); break;
		case TD_1H: register_code16(S(KC_END)); break;
		case TD_2T: register_code16(C(KC_END)); break;
		case TD_2H: register_code16(RCS(KC_END)); break;
		case TD_NONE: break; } }

void e_reset(tap_dance_state_t *state, void *user_data) {
	switch (etap_state.state) {
		case TD_1T: unregister_code(KC_END); break;
		case TD_1H: unregister_code16(S(KC_END)); break;
		case TD_2T: unregister_code16(C(KC_END)); break;
		case TD_2H: unregister_code16(RCS(KC_END)); break;
		case TD_NONE: break; }
	etap_state.state = TD_NONE; }

tap_dance_action_t tap_dance_actions[] = {
	[DASH] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, d_finished, d_reset),
	[QUOTE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, q_finished, q_reset),
	[HOME] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, h_finished, h_reset),
	[END] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, e_finished, e_reset), };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TD(DASH),
		KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
		TD(QUOTE), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), LT(3,KC_G), LT(3,KC_H), RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SPC), KC_ENT,
		LT(1,KC_MUTE), KC_Z, KC_X, KC_C, LT(2,KC_V), KC_B, KC_N, LT(2,KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_DEL),
	[1] = LAYOUT_ortho_4x12(LT(2,KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, LT(2,KC_DEL),
		KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
		KC_QUOT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SPC, KC_ENT,
		DF(0), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, QK_BOOT),
	[2] = LAYOUT_ortho_4x12(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
		KC_LBRC, LCTL(KC_PPLS), LALT(KC_F4), KC_MS_U, KC_BTN1, KC_BTN3, KC_PGUP, TD(HOME), KC_UP, TD(END), LGUI(KC_PSCR), KC_RBRC,
		KC_GRV, KC_APP, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_COLN, KC_BSLS,
		RGB_TOG, RGB_RMOD, RGB_SAD, RGB_HUD, C(KC_PGUP), RGB_VAD, RGB_VAI, C(KC_PGDN), RGB_HUI, RGB_SAI, RGB_MOD, RCS(KC_ESC)),
	[3] = LAYOUT_ortho_4x12(U_EQ, U_AD, U_AR, U_ED, U_DG, U_ST, U_YD, U_UD, U_ID, U_OD, U_OS, U_CRY,
		U_GL, U_AC, U_AE, U_EA, U_EC, U_HV, U_YA, U_UA, U_IA, U_OA, U_OE, U_GR,
		U_QUOTE, U_AA, U_SS, U_EG, U_DT, U_LU, U_RD, U_UG, U_IG, U_OG, U_OT, U_IDK,
		DF(1), U_AG, U_AT, U_CL, U_CK, U_BU, U_NT, U_UC, U_IC, U_OC, U_QU, U_LEN) };