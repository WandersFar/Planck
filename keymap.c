#include QMK_KEYBOARD_H

layer_state_t default_layer_state_set_user(layer_state_t state) {
	switch (get_highest_layer(state)) {
	case 1: rgblight_enable_noeeprom(); autoshift_disable(); break;
	default: rgblight_enable_noeeprom(); autoshift_enable(); break;
	} return state; }

bool led_update_user(led_t led_state) {
	static bool caps = false;
	if (caps != led_state.caps_lock) { caps = led_state.caps_lock;
		(!caps) ? rgblight_disable_noeeprom() : rgblight_enable_noeeprom();
	} return true; }

enum unicode_names {
	UC_HEART,
	UC_MER,
	UC_VEN,
	UC_MOO,
	UC_MAR,
	UC_JUP,
	UC_SAT,
	UC_URA,
	UC_NEP,
	UC_PLU,
	UC_SUN,
	UC_ARI,
	UC_TAU,
	UC_GEM,
	UC_CAN,
	UC_LEO,
	UC_VIR,
	UC_LIB,
	UC_SCO,
	UC_SAG,
	UC_CAP,
	UC_AQU,
	UC_PIS,
	UC_CER,
	UC_VES,
	UC_JUN,
	UC_PAL,
	UC_FOR,
	UC_CHI,
	UC_LIL,
	UC_NOR,
	UC_SOU,
	UC_SEM,
	UC_SEX,
	UC_SQU,
	UC_TRI,
	UC_QUI,
	UC_OPP,
	UC_CON,
	UC_SUPZERO,
	UC_SUPONE,
	UC_SUPTWO,
	UC_SUPTHREE,
	UC_SUPFOUR,
	UC_SUPFIVE,
	UC_SUPSIX,
	UC_SUPSEVEN,
	UC_SUPEIGHT,
	UC_SUPNINE,
	UC_DEGREE,
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
	UC_LSINGLE,
	UC_LDOUBLE,
	UC_RSINGLE,
	UC_RDOUBLE,
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
	[UC_HEART] = 0x2764,	// ❤
	[UC_MER] = 0x263F,	// ☿
	[UC_VEN] = 0x2640,	// ♀
	[UC_MOO] = 0x263D,	// ☽
	[UC_MAR] = 0x2642,	// ♂
	[UC_JUP] = 0x2643,	// ♃
	[UC_SAT] = 0x2644,	// ♄
	[UC_URA] = 0x2645,	// ♅
	[UC_NEP] = 0x2646,	// ♆
	[UC_PLU] = 0x2647,	// ♇
	[UC_SUN] = 0x2609,	// ☉
	[UC_ARI] = 0x2648,	// ♈
	[UC_TAU] = 0x2649,	// ♉
	[UC_GEM] = 0x264A,	// ♊
	[UC_CAN] = 0x264B,	// ♋
	[UC_LEO] = 0x264C,	// ♌
	[UC_VIR] = 0x264D,	// ♍
	[UC_LIB] = 0x264E,	// ♎
	[UC_SCO] = 0x264F,	// ♏
	[UC_SAG] = 0x2650,	// ♐
	[UC_CAP] = 0x2651,	// ♑
	[UC_AQU] = 0x2652,	// ♒
	[UC_PIS] = 0x2653,	// ♓
	[UC_CER] = 0x26B3,	// ⚳
	[UC_VES] = 0x26B6,	// ⚶
	[UC_JUN] = 0x26B5,	// ⚵
	[UC_PAL] = 0x26B4,	// ⚴
	[UC_FOR] = 0x2297,	// ⊗
	[UC_CHI] = 0x26B7,	// ⚷
	[UC_LIL] = 0x26B8,	// ⚸
	[UC_NOR] = 0x260A,	// ☊
	[UC_SOU] = 0x260B,	// ☋
	[UC_SEM] = 0x26BA,	// ⚺
	[UC_SEX] = 0x26B9,	// ⚹
	[UC_SQU] = 0x25A1,	// □
	[UC_TRI] = 0x25B3,	// △
	[UC_QUI] = 0x26BB,	// ⚻
	[UC_OPP] = 0x260D,	// ☍
	[UC_CON] = 0x260C,	// ☌
	[UC_SUPZERO] = 0x2070,	// ⁰
	[UC_SUPONE] = 0x00B9,	// ¹
	[UC_SUPTWO] = 0x00B2,	// ²
	[UC_SUPTHREE] = 0x00B3,	// ³
	[UC_SUPFOUR] = 0x2074,	// ⁴
	[UC_SUPFIVE] = 0x2075,	// ⁵
	[UC_SUPSIX] = 0x2076,	// ⁶
	[UC_SUPSEVEN] = 0x2077,	// ⁷
	[UC_SUPEIGHT] = 0x2078,	// ⁸
	[UC_SUPNINE] = 0x2079,	// ⁹
	[UC_DEGREE] = 0x00B0,	// °
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
	[UC_LSINGLE] = 0x2018,	// ‘
	[UC_LDOUBLE] = 0x201C,	// “
	[UC_RSINGLE] = 0x2019,	// ’
	[UC_RDOUBLE] = 0x201D,	// ”
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

enum unicode_custom {
	CURLY = SAFE_RANGE,
};

enum states { OPEN, CLOSE };
enum states state = OPEN;
static uint16_t recent = KC_NO;
uint32_t callback(uint32_t trigger_time, void *cb_arg) { rgblight_disable_noeeprom(); return 0; }
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case DF(1): if (record->event.pressed) { defer_exec(5000, callback, NULL); } return true;
		case DF(0): if (record->event.pressed) { defer_exec(1000, callback, NULL); } return true;
		case LT(0,KC_DEL): if (!record->tap.count && record->event.pressed) { leader_start(); return false; } return true;
		case CURLY:
			static uint16_t TIMER;
			if (record->event.pressed) { TIMER = timer_read(); }
			else {
				if (timer_elapsed(TIMER) > TAPPING_TERM) {
					if(state == OPEN) { register_unicodemap(UC_LDOUBLE); state = CLOSE; }
					else { register_unicodemap(UC_RDOUBLE); state = OPEN; }
				} else {
					if (recent == UC_RSINGLE) { tap_code(KC_BSPC); register_unicodemap(UC_LSINGLE); recent = KC_NO; }
					else { register_unicodemap(UC_RSINGLE); recent = UC_RSINGLE; } }
			} return false;
		default: if (record->event.pressed) { recent = keycode; } return true; } };

void leader_start_user(void) { rgblight_enable_noeeprom(); }
void leader_end_user(void) {
    if (leader_sequence_one_key(KC_R)) { reset_keyboard(); }
    else if (leader_sequence_one_key(KC_C)) { register_unicodemap(UC_CLT); }
    else if (leader_sequence_one_key(KC_N)) { register_unicodemap(UC_NTT); }
    else if (leader_sequence_one_key(KC_S)) { register_unicodemap(UC_SST); }
    else if (leader_sequence_one_key(KC_B)) { register_unicodemap(UC_BUT); }
    else if (leader_sequence_one_key(KC_D)) { register_unicodemap(UC_DGT); }
    else if (leader_sequence_one_key(KC_H)) { register_unicodemap(UC_HEART); }
    else if (leader_sequence_one_key(KC_K)) { register_unicodemap(UC_CKT); }
    else if (leader_sequence_one_key(KC_L)) { register_unicodemap(UC_CKH); }
    else if (leader_sequence_one_key(KC_X)) { register_unicodemap(UC_STT); }
    else if (leader_sequence_one_key(KC_EQL)) { register_unicodemap(UC_EQT); }
    else if (leader_sequence_one_key(KC_SPC)) { register_unicodemap(UC_DTT); }
    else if (leader_sequence_one_key(KC_COMM)) { register_unicodemap(UC_GLT); }
    else if (leader_sequence_one_key(KC_DOT)) { register_unicodemap(UC_GRT); }
    else if (leader_sequence_one_key(KC_SLSH)) { register_unicodemap(UC_QUT); }
    else if (leader_sequence_one_key(KC_1)) { register_unicodemap(UC_SUPONE); }
    else if (leader_sequence_one_key(KC_2)) { register_unicodemap(UC_SUPTWO); }
    else if (leader_sequence_one_key(KC_3)) { register_unicodemap(UC_SUPTHREE); }
    else if (leader_sequence_one_key(KC_4)) { register_unicodemap(UC_SUPFOUR); }
    else if (leader_sequence_one_key(KC_5)) { register_unicodemap(UC_SUPFIVE); }
    else if (leader_sequence_one_key(KC_6)) { register_unicodemap(UC_SUPSIX); }
    else if (leader_sequence_one_key(KC_7)) { register_unicodemap(UC_SUPSEVEN); }
    else if (leader_sequence_one_key(KC_8)) { register_unicodemap(UC_SUPEIGHT); }
    else if (leader_sequence_one_key(KC_9)) { register_unicodemap(UC_SUPNINE); }
    else if (leader_sequence_one_key(KC_0)) { register_unicodemap(UC_SUPZERO); }
    else if (leader_sequence_two_keys(KC_A, KC_I)) { register_unicodemap(UC_LUH); }
    else if (leader_sequence_two_keys(KC_A, KC_J)) { register_unicodemap(UC_LUT); }
    else if (leader_sequence_two_keys(KC_A, KC_K)) { register_unicodemap(UC_RDH); }
    else if (leader_sequence_two_keys(KC_A, KC_L)) { register_unicodemap(UC_RDT); }
    else if (leader_sequence_two_keys(KC_A, KC_H)) { register_unicodemap(UC_HVT); }
    else if (leader_sequence_two_keys(KC_A, KC_V)) { register_unicodemap(UC_HVH); }
    else if (leader_sequence_two_keys(KC_B, KC_B)) { register_unicodemap(UC_BUH); }
    else if (leader_sequence_two_keys(KC_D, KC_D)) { register_unicodemap(UC_DGH); }
    else if (leader_sequence_two_keys(KC_X, KC_X)) { register_unicodemap(UC_STH); }
    else if (leader_sequence_two_keys(KC_SPC, KC_SPC)) { register_unicodemap(UC_DTH); }
    else if (leader_sequence_two_keys(KC_COMM, KC_COMM)) { register_unicodemap(UC_GLH); }
    else if (leader_sequence_two_keys(KC_DOT, KC_DOT)) { register_unicodemap(UC_GRH); }
    else if (leader_sequence_two_keys(KC_SLSH, KC_SLSH)) { register_unicodemap(UC_QUH); }
    else if (leader_sequence_two_keys(KC_1, KC_1)) { register_unicodemap(UC_EQH); }
    else if (leader_sequence_two_keys(KC_1, KC_2)) { register_unicodemap(UC_ONEHALF); }
    else if (leader_sequence_two_keys(KC_1, KC_3)) { register_unicodemap(UC_ONETHIRD); }
    else if (leader_sequence_two_keys(KC_1, KC_4)) { register_unicodemap(UC_ONEQUARTER); }
    else if (leader_sequence_two_keys(KC_1, KC_5)) { register_unicodemap(UC_ONEFIFTH); }
    else if (leader_sequence_two_keys(KC_1, KC_6)) { register_unicodemap(UC_ONESIXTH); }
    else if (leader_sequence_two_keys(KC_1, KC_8)) { register_unicodemap(UC_ONEEIGHTH); }
    else if (leader_sequence_two_keys(KC_2, KC_3)) { register_unicodemap(UC_TWOTHIRDS); }
    else if (leader_sequence_two_keys(KC_2, KC_5)) { register_unicodemap(UC_TWOFIFTHS); }
    else if (leader_sequence_two_keys(KC_3, KC_4)) { register_unicodemap(UC_THREEQUARTERS); }
    else if (leader_sequence_two_keys(KC_3, KC_5)) { register_unicodemap(UC_THREEFIFTHS); }
    else if (leader_sequence_two_keys(KC_3, KC_8)) { register_unicodemap(UC_THREEEIGHTHS); }
    else if (leader_sequence_two_keys(KC_4, KC_5)) { register_unicodemap(UC_FOURFIFTHS); }
    else if (leader_sequence_two_keys(KC_5, KC_6)) { register_unicodemap(UC_FIVESIXTHS); }
    else if (leader_sequence_two_keys(KC_5, KC_8)) { register_unicodemap(UC_FIVEEIGHTHS); }
    else if (leader_sequence_two_keys(KC_7, KC_8)) { register_unicodemap(UC_SEVENEIGHTHS); }
    else if (leader_sequence_two_keys(KC_0, KC_0)) { register_unicodemap(UC_DEGREE); }
    else if (leader_sequence_two_keys(KC_C, KC_C)) { register_unicodemap(UC_CLH); }
    else if (leader_sequence_two_keys(KC_N, KC_N)) { register_unicodemap(UC_NTH); }
    else if (leader_sequence_two_keys(KC_S, KC_S)) { register_unicodemap(UC_SSH); }
    else if (leader_sequence_two_keys(KC_A, KC_A)) { register_unicodemap(UC_AAT); }
    else if (leader_sequence_two_keys(KC_E, KC_A)) { register_unicodemap(UC_EAT); }
    else if (leader_sequence_two_keys(KC_I, KC_A)) { register_unicodemap(UC_IAT); }
    else if (leader_sequence_two_keys(KC_O, KC_A)) { register_unicodemap(UC_OAT); }
    else if (leader_sequence_two_keys(KC_U, KC_A)) { register_unicodemap(UC_UAT); }
    else if (leader_sequence_two_keys(KC_Y, KC_A)) { register_unicodemap(UC_YAT); }
    else if (leader_sequence_two_keys(KC_A, KC_C)) { register_unicodemap(UC_ACT); }
    else if (leader_sequence_two_keys(KC_E, KC_C)) { register_unicodemap(UC_ECT); }
    else if (leader_sequence_two_keys(KC_I, KC_C)) { register_unicodemap(UC_ICT); }
    else if (leader_sequence_two_keys(KC_O, KC_C)) { register_unicodemap(UC_OCT); }
    else if (leader_sequence_two_keys(KC_U, KC_C)) { register_unicodemap(UC_UCT); }
    else if (leader_sequence_two_keys(KC_A, KC_D)) { register_unicodemap(UC_ADT); }
    else if (leader_sequence_two_keys(KC_E, KC_D)) { register_unicodemap(UC_EDT); }
    else if (leader_sequence_two_keys(KC_I, KC_D)) { register_unicodemap(UC_IDT); }
    else if (leader_sequence_two_keys(KC_O, KC_D)) { register_unicodemap(UC_ODT); }
    else if (leader_sequence_two_keys(KC_U, KC_D)) { register_unicodemap(UC_UDT); }
    else if (leader_sequence_two_keys(KC_Y, KC_D)) { register_unicodemap(UC_YDT); }
    else if (leader_sequence_two_keys(KC_A, KC_E)) { register_unicodemap(UC_AET); }
    else if (leader_sequence_two_keys(KC_O, KC_E)) { register_unicodemap(UC_OET); }
    else if (leader_sequence_two_keys(KC_A, KC_G)) { register_unicodemap(UC_AGT); }
    else if (leader_sequence_two_keys(KC_E, KC_G)) { register_unicodemap(UC_EGT); }
    else if (leader_sequence_two_keys(KC_I, KC_G)) { register_unicodemap(UC_IGT); }
    else if (leader_sequence_two_keys(KC_O, KC_G)) { register_unicodemap(UC_OGT); }
    else if (leader_sequence_two_keys(KC_U, KC_G)) { register_unicodemap(UC_UGT); }
    else if (leader_sequence_two_keys(KC_A, KC_R)) { register_unicodemap(UC_ART); }
    else if (leader_sequence_two_keys(KC_O, KC_S)) { register_unicodemap(UC_OST); }
    else if (leader_sequence_two_keys(KC_A, KC_T)) { register_unicodemap(UC_ATT); }
    else if (leader_sequence_two_keys(KC_O, KC_T)) { register_unicodemap(UC_OTT); }
    else if (leader_sequence_two_keys(KC_P, KC_P)) { send_unicode_string(":þ"); }
    else if (leader_sequence_three_keys(KC_L, KC_E, KC_N)) { send_unicode_string("( ͡° ͜ʖ ͡°)"); }
    else if (leader_sequence_three_keys(KC_C, KC_R, KC_Y)) { send_unicode_string("ಥ_ಥ"); }
    else if (leader_sequence_three_keys(KC_D, KC_I, KC_S)) { send_unicode_string("ಠ_ಠ"); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_K)) { send_unicode_string("¯\\_(ツ)_/¯"); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_M)) { send_unicode_string("¯\\\\\\_(ツ)\\_/¯"); }
    else if (leader_sequence_three_keys(KC_A, KC_A, KC_A)) { register_unicodemap(UC_AAH); }
    else if (leader_sequence_three_keys(KC_E, KC_A, KC_A)) { register_unicodemap(UC_EAH); }
    else if (leader_sequence_three_keys(KC_I, KC_A, KC_A)) { register_unicodemap(UC_IAH); }
    else if (leader_sequence_three_keys(KC_O, KC_A, KC_A)) { register_unicodemap(UC_OAH); }
    else if (leader_sequence_three_keys(KC_U, KC_A, KC_A)) { register_unicodemap(UC_UAH); }
    else if (leader_sequence_three_keys(KC_Y, KC_A, KC_A)) { register_unicodemap(UC_YAH); }
    else if (leader_sequence_three_keys(KC_A, KC_C, KC_C)) { register_unicodemap(UC_ACH); }
    else if (leader_sequence_three_keys(KC_E, KC_C, KC_C)) { register_unicodemap(UC_ECH); }
    else if (leader_sequence_three_keys(KC_I, KC_C, KC_C)) { register_unicodemap(UC_ICH); }
    else if (leader_sequence_three_keys(KC_O, KC_C, KC_C)) { register_unicodemap(UC_OCH); }
    else if (leader_sequence_three_keys(KC_U, KC_C, KC_C)) { register_unicodemap(UC_UCH); }
    else if (leader_sequence_three_keys(KC_A, KC_D, KC_D)) { register_unicodemap(UC_ADH); }
    else if (leader_sequence_three_keys(KC_E, KC_D, KC_D)) { register_unicodemap(UC_EDH); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_D)) { register_unicodemap(UC_IDH); }
    else if (leader_sequence_three_keys(KC_O, KC_D, KC_D)) { register_unicodemap(UC_ODH); }
    else if (leader_sequence_three_keys(KC_U, KC_D, KC_D)) { register_unicodemap(UC_UDH); }
    else if (leader_sequence_three_keys(KC_Y, KC_D, KC_D)) { register_unicodemap(UC_YDH); }
    else if (leader_sequence_three_keys(KC_A, KC_E, KC_E)) { register_unicodemap(UC_AEH); }
    else if (leader_sequence_three_keys(KC_O, KC_E, KC_E)) { register_unicodemap(UC_OEH); }
    else if (leader_sequence_three_keys(KC_A, KC_G, KC_G)) { register_unicodemap(UC_AGH); }
    else if (leader_sequence_three_keys(KC_E, KC_G, KC_G)) { register_unicodemap(UC_EGH); }
    else if (leader_sequence_three_keys(KC_I, KC_G, KC_G)) { register_unicodemap(UC_IGH); }
    else if (leader_sequence_three_keys(KC_O, KC_G, KC_G)) { register_unicodemap(UC_OGH); }
    else if (leader_sequence_three_keys(KC_U, KC_G, KC_G)) { register_unicodemap(UC_UGH); }
    else if (leader_sequence_three_keys(KC_A, KC_R, KC_R)) { register_unicodemap(UC_ARH); }
    else if (leader_sequence_three_keys(KC_O, KC_S, KC_S)) { register_unicodemap(UC_OSH); }
    else if (leader_sequence_three_keys(KC_A, KC_T, KC_T)) { register_unicodemap(UC_ATH); }
    else if (leader_sequence_three_keys(KC_O, KC_T, KC_T)) { register_unicodemap(UC_OTH); }
    else if (leader_sequence_three_keys(KC_M, KC_E, KC_R)) { register_unicodemap(UC_MER); }
    else if (leader_sequence_three_keys(KC_V, KC_E, KC_N)) { register_unicodemap(UC_VEN); }
    else if (leader_sequence_three_keys(KC_M, KC_O, KC_O)) { register_unicodemap(UC_MOO); }
    else if (leader_sequence_three_keys(KC_M, KC_A, KC_R)) { register_unicodemap(UC_MAR); }
    else if (leader_sequence_three_keys(KC_J, KC_U, KC_P)) { register_unicodemap(UC_JUP); }
    else if (leader_sequence_three_keys(KC_S, KC_A, KC_T)) { register_unicodemap(UC_SAT); }
    else if (leader_sequence_three_keys(KC_U, KC_R, KC_A)) { register_unicodemap(UC_URA); }
    else if (leader_sequence_three_keys(KC_N, KC_E, KC_P)) { register_unicodemap(UC_NEP); }
    else if (leader_sequence_three_keys(KC_P, KC_L, KC_U)) { register_unicodemap(UC_PLU); }
    else if (leader_sequence_three_keys(KC_S, KC_U, KC_N)) { register_unicodemap(UC_SUN); }
    else if (leader_sequence_three_keys(KC_A, KC_R, KC_I)) { register_unicodemap(UC_ARI); }
    else if (leader_sequence_three_keys(KC_T, KC_A, KC_U)) { register_unicodemap(UC_TAU); }
    else if (leader_sequence_three_keys(KC_G, KC_E, KC_M)) { register_unicodemap(UC_GEM); }
    else if (leader_sequence_three_keys(KC_C, KC_A, KC_N)) { register_unicodemap(UC_CAN); }
    else if (leader_sequence_three_keys(KC_L, KC_E, KC_O)) { register_unicodemap(UC_LEO); }
    else if (leader_sequence_three_keys(KC_V, KC_I, KC_R)) { register_unicodemap(UC_VIR); }
    else if (leader_sequence_three_keys(KC_L, KC_I, KC_B)) { register_unicodemap(UC_LIB); }
    else if (leader_sequence_three_keys(KC_S, KC_C, KC_O)) { register_unicodemap(UC_SCO); }
    else if (leader_sequence_three_keys(KC_S, KC_A, KC_G)) { register_unicodemap(UC_SAG); }
    else if (leader_sequence_three_keys(KC_C, KC_A, KC_P)) { register_unicodemap(UC_CAP); }
    else if (leader_sequence_three_keys(KC_A, KC_Q, KC_U)) { register_unicodemap(UC_AQU); }
    else if (leader_sequence_three_keys(KC_P, KC_I, KC_S)) { register_unicodemap(UC_PIS); }
    else if (leader_sequence_three_keys(KC_C, KC_E, KC_R)) { register_unicodemap(UC_CER); }
    else if (leader_sequence_three_keys(KC_V, KC_E, KC_S)) { register_unicodemap(UC_VES); }
    else if (leader_sequence_three_keys(KC_J, KC_U, KC_N)) { register_unicodemap(UC_JUN); }
    else if (leader_sequence_three_keys(KC_P, KC_A, KC_L)) { register_unicodemap(UC_PAL); }
    else if (leader_sequence_three_keys(KC_F, KC_O, KC_R)) { register_unicodemap(UC_FOR); }
    else if (leader_sequence_three_keys(KC_C, KC_H, KC_I)) { register_unicodemap(UC_CHI); }
    else if (leader_sequence_three_keys(KC_L, KC_I, KC_L)) { register_unicodemap(UC_LIL); }
    else if (leader_sequence_three_keys(KC_N, KC_O, KC_R)) { register_unicodemap(UC_NOR); }
    else if (leader_sequence_three_keys(KC_S, KC_O, KC_U)) { register_unicodemap(UC_SOU); }
    else if (leader_sequence_three_keys(KC_S, KC_E, KC_M)) { register_unicodemap(UC_SEM); }
    else if (leader_sequence_three_keys(KC_S, KC_E, KC_X)) { register_unicodemap(UC_SEX); }
    else if (leader_sequence_three_keys(KC_S, KC_Q, KC_U)) { register_unicodemap(UC_SQU); }
    else if (leader_sequence_three_keys(KC_T, KC_R, KC_I)) { register_unicodemap(UC_TRI); }
    else if (leader_sequence_three_keys(KC_Q, KC_U, KC_I)) { register_unicodemap(UC_QUI); }
    else if (leader_sequence_three_keys(KC_O, KC_P, KC_P)) { register_unicodemap(UC_OPP); }
    else if (leader_sequence_three_keys(KC_C, KC_O, KC_N)) { register_unicodemap(UC_CON); }
rgblight_disable_noeeprom(); }

const uint16_t PROGMEM L_SCR_DN[] = {KC_C, LT(2,KC_V), COMBO_END};
const uint16_t PROGMEM R_SCR_DN[] = {LT(2,KC_M), KC_COMM, COMBO_END};
const uint16_t PROGMEM L_SCR_UP[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM R_SCR_UP[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM L_VOL_DN[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM R_VOL_DN[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM L_VOL_UP[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM R_VOL_UP[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM SCR_LEFT[] = {LALT_T(KC_S), LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM SCR_RIGHT[] = {RSFT_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM WORD_LEFT[] = {LSFT_T(KC_D), LCTL_T(KC_F), COMBO_END};
const uint16_t PROGMEM WORD_RIGHT[] = {RCTL_T(KC_J), RSFT_T(KC_K), COMBO_END};
const uint16_t PROGMEM CAPS_LOCK[] = {LSFT_T(KC_D), RSFT_T(KC_K), COMBO_END};
const uint16_t PROGMEM TASK_SWITCH[] = {LCTL_T(KC_F), RCTL_T(KC_J), COMBO_END};
const uint16_t PROGMEM FN_LOCK[] = {LT(2,KC_V), LT(2,KC_M), COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
	COMBO(L_SCR_DN, KC_WH_D),					// 0 (an array begins counting at 0, not 1)
	COMBO(R_SCR_DN, KC_WH_D),					// 1
	COMBO(L_SCR_UP, KC_WH_U),					// 2 (disabled on game layer 1 below)
	COMBO(R_SCR_UP, KC_WH_U),					// 3 (disabled on game layer 1 below)
	COMBO(L_VOL_DN, KC_VOLD),						// 4 (we keep the four volume up and down for now)
	COMBO(R_VOL_DN, KC_VOLD),					// 5 (once we solder the rotary encoder, we delete)
	COMBO(L_VOL_UP, KC_VOLU),						// 6 (all the bridge combos along with)
	COMBO(R_VOL_UP, KC_VOLU),					// 7 (the combo_should_trigger bool below)
	COMBO(SCR_LEFT, KC_WH_L),						// 8
	COMBO(SCR_RIGHT, KC_WH_R),					// 9
	COMBO(WORD_LEFT, C(KC_LEFT)),				// 10
	COMBO(WORD_RIGHT, C(KC_RGHT)),			// 11
	COMBO(CAPS_LOCK, KC_CAPS),					// 12 (last three combos will be the only ones left after you solder)
	COMBO(TASK_SWITCH, LSA(KC_ESC)),		// 13 (the rotary encoder; in config.h update COMBO_COUNT to 3)
	COMBO(FN_LOCK, DF(2)), };							// 14 (and delete COMBO_SHOULD_TRIGGER; also the bool below)

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {	// delete this whole bool after soldering the rotary encoder; delete in config.h also
        case 2:	// combo_index wants an integer; the place order in the array above, not the name of the combo
        case 3: if (IS_LAYER_ON(1)) { return false; } break; } return true; }

bool encoder_update_user(uint8_t index, bool clockwise) {
	switch (get_highest_layer(layer_state|default_layer_state)) {
		case 2: tap_code16((!clockwise) ? C(KC_LEFT) : C(KC_RGHT)); break;
		case 1: (!clockwise) ? tap_code_delay(KC_VOLD, 10) : tap_code_delay(KC_VOLU, 10); break;
		case 0:
			if (get_mods() & MOD_MASK_CTRL) { tap_code((!clockwise) ? KC_Z : KC_Y);
			} else if (get_mods() & MOD_MASK_SHIFT) { del_mods(MOD_MASK_SHIFT);
					(!clockwise) ? tap_code16(S(KC_F3)) : tap_code(KC_F3);
			} else if (get_mods() & MOD_MASK_ALT) { del_mods(MOD_MASK_ALT);
					tap_code16((!clockwise) ? C(KC_MINS) : C(KC_EQL));
			} else if (get_mods() & MOD_MASK_GUI) { del_mods(MOD_MASK_GUI);
					tap_code((!clockwise) ? KC_WH_L : KC_WH_R);
			} else tap_code((!clockwise) ? KC_WH_U : KC_WH_D); break;
	} return false; }

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
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
		case KC_BTN1:
		case KC_BTN2:
		case KC_BTN3:
		case KC_DQT:
		case KC_TILD:
		case KC_COLN:
			return true;
		default:
			return false; } }

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
	switch(keycode) {
		case KC_BSPC: register_code16((!shifted) ? KC_BSPC : C(KC_BSPC)); break;
		case KC_TAB: register_code16((!shifted) ? KC_TAB : S(KC_TAB)); break;
		case KC_ENT: register_code((!shifted) ? KC_ENT : KC_ESC); break;
		case KC_BTN1: register_code((!shifted) ? KC_BTN1 : KC_BTN1); break;
		case KC_BTN2: register_code((!shifted) ? KC_BTN2 : KC_BTN2); break;
		case KC_BTN3: register_code((!shifted) ? KC_BTN3 : KC_BTN3); break;
		case KC_DQT: register_code16((!shifted) ? KC_DQT : KC_QUOT); break;
		case KC_TILD: register_code16((!shifted) ? KC_TILD : KC_GRV); break;
		case KC_COLN: register_code16((!shifted) ? KC_COLN : KC_SCLN); break;
		default:
			if (shifted) { add_weak_mods(MOD_BIT(KC_RSFT)); }
			register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode); } }

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
	switch(keycode) {
		case KC_BSPC: unregister_code16((!shifted) ? KC_BSPC : C(KC_BSPC)); break;
		case KC_TAB: unregister_code16((!shifted) ? KC_TAB : S(KC_TAB)); break;
		case KC_ENT: unregister_code((!shifted) ? KC_ENT : KC_ESC); break;
		case KC_BTN1: unregister_code((!shifted) ? KC_BTN1 : KC_NO); break;
		case KC_BTN2: unregister_code((!shifted) ? KC_BTN2 : KC_NO); break;
		case KC_BTN3: unregister_code((!shifted) ? KC_BTN3 : KC_NO); break;
		case KC_DQT: unregister_code16((!shifted) ? KC_DQT : KC_QUOT); break;
		case KC_TILD: unregister_code16((!shifted) ? KC_TILD : KC_GRV); break;
		case KC_COLN: unregister_code16((!shifted) ? KC_COLN : KC_SCLN); break;
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

enum { DASH, HOME, END };

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case TD(DASH):
			return 200;
		case TD(HOME):
		case TD(END):
			return 320;
		default:
			return TAPPING_TERM; } }

td_state_t cur_dance(tap_dance_state_t *state) {
	if (state->count == 1) {
		if (state->pressed) return TD_1H;
		else return TD_1T; }
	else if (state->pressed) return TD_2H;
	else return TD_2T; }

static td_tap_t dtap_state = {
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
	[HOME] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, h_finished, h_reset),
	[END] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, e_finished, e_reset), };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TD(DASH),
		KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
		CURLY, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SPC), KC_ENT,
		LT(1,KC_MUTE), KC_Z, KC_X, KC_C, LT(2,KC_V), KC_B, KC_N, LT(2,KC_M), KC_COMM, KC_DOT, KC_SLSH, LT(0,KC_DEL)),
	[1] = LAYOUT_ortho_4x12(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
		KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
		KC_QUOT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SPC, KC_ENT,
		LT(2,KC_MUTE), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, DF(0)),
	[2] = LAYOUT_ortho_4x12(KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
		KC_LBRC, KC_APP, A(KC_F4), KC_MS_U, KC_BTN1, KC_BTN3, KC_PGUP, TD(HOME), KC_UP, TD(END), G(KC_PSCR), KC_RBRC,
		KC_DQT, KC_TILD, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_COLN, KC_BSLS,
		DF(1), RGB_RMOD, RGB_SAD, RGB_HUD, C(KC_PGUP), C(KC_PPLS), RCS(KC_ESC), C(KC_PGDN), RGB_HUI, RGB_SAI, RGB_MOD, DF(0)) };