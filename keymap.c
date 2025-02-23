#include QMK_KEYBOARD_H

enum unicode_names {
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
	UC_GUILLEMETLEFT,
	UC_GUILLEMETRIGHT,
	UC_GUILEFTSINGLE,
	UC_GUIRIGHTSINGLE,
	UC_ELLIPSIS,
	UC_INTERPUNCT,
	UC_BULLET,
	UC_BULLETHOLLOW,
	UC_INTERROBANG,
	UC_QUESTION,
	UC_EXCLAIM,
	UC_UNEQUAL,
	UC_DAGGER,
	UC_DAGGERDOUBLE,
	UC_STAR,
	UC_STARHOLLOW,
	UC_HEART,
	UC_LEGAL,
	UC_CHECK,
	UC_ARROWHORIZON,
	UC_ARROWVERTICAL,
	UC_ARROWLEFT,
	UC_ARROWRIGHT,
	UC_ARROWUP,
	UC_ARROWDOWN,
	UC_CEDILLACAP,
	UC_CEDILLA,
	UC_NTILDECAP,
	UC_NTILDE,
	UC_SSCAP,
	UC_SS,
	UC_AACUTECAP,
	UC_AACUTE,
	UC_EACUTECAP,
	UC_EACUTE,
	UC_IACUTECAP,
	UC_IACUTE,
	UC_OACUTECAP,
	UC_OACUTE,
	UC_UACUTECAP,
	UC_UACUTE,
	UC_YACUTECAP,
	UC_YACUTE,
	UC_ACIRCUMFLEXCAP,
	UC_ACIRCUMFLEX,
	UC_ECIRCUMFLEXCAP,
	UC_ECIRCUMFLEX,
	UC_ICIRCUMFLEXCAP,
	UC_ICIRCUMFLEX,
	UC_OCIRCUMFLEXCAP,
	UC_OCIRCUMFLEX,
	UC_UCIRCUMFLEXCAP,
	UC_UCIRCUMFLEX,
	UC_ADOTCAP,
	UC_ADOT,
	UC_EDOTCAP,
	UC_EDOT,
	UC_IDOTCAP,
	UC_IDOT,
	UC_ODOTCAP,
	UC_ODOT,
	UC_UDOTCAP,
	UC_UDOT,
	UC_YDOTCAP,
	UC_YDOT,
	UC_AECAP,
	UC_AE,
	UC_OECAP,
	UC_OE,
	UC_AGRAVECAP,
	UC_AGRAVE,
	UC_EGRAVECAP,
	UC_EGRAVE,
	UC_IGRAVECAP,
	UC_IGRAVE,
	UC_OGRAVECAP,
	UC_OGRAVE,
	UC_UGRAVECAP,
	UC_UGRAVE,
	UC_ARINGCAP,
	UC_ARING,
	UC_OSLASHCAP,
	UC_OSLASH,
	UC_ATILDECAP,
	UC_ATILDE,
	UC_OTILDECAP,
	UC_OTILDE,
};

const uint32_t unicode_map[] PROGMEM = {
	[UC_MER] = 0x263F,							// ☿
	[UC_VEN] = 0x2640,							// ♀
	[UC_MOO] = 0x263D,							// ☽
	[UC_MAR] = 0x2642,							// ♂
	[UC_JUP] = 0x2643,								// ♃
	[UC_SAT] = 0x2644,								// ♄
	[UC_URA] = 0x2645,							// ♅
	[UC_NEP] = 0x2646,							// ♆
	[UC_PLU] = 0x2647,								// ♇
	[UC_SUN] = 0x2609,							// ☉
	[UC_ARI] = 0x2648,								// ♈
	[UC_TAU] = 0x2649,							// ♉
	[UC_GEM] = 0x264A,							// ♊
	[UC_CAN] = 0x264B,							// ♋
	[UC_LEO] = 0x264C,							// ♌
	[UC_VIR] = 0x264D,								// ♍
	[UC_LIB] = 0x264E,								// ♎
	[UC_SCO] = 0x264F,							// ♏
	[UC_SAG] = 0x2650,							// ♐
	[UC_CAP] = 0x2651,								// ♑
	[UC_AQU] = 0x2652,							// ♒
	[UC_PIS] = 0x2653,								// ♓
	[UC_CER] = 0x26B3,							// ⚳
	[UC_VES] = 0x26B6,								// ⚶
	[UC_JUN] = 0x26B5,								// ⚵
	[UC_PAL] = 0x26B4,								// ⚴
	[UC_FOR] = 0x2297,							// ⊗
	[UC_CHI] = 0x26B7,								// ⚷
	[UC_LIL] = 0x26B8,								// ⚸
	[UC_NOR] = 0x260A,							// ☊
	[UC_SOU] = 0x260B,							// ☋
	[UC_SEM] = 0x26BA,							// ⚺
	[UC_SEX] = 0x26B9,								// ⚹
	[UC_SQU] = 0x25A1,							// □
	[UC_TRI] = 0x25B3,								// △
	[UC_QUI] = 0x26BB,								// ⚻
	[UC_OPP] = 0x260D,							// ☍
	[UC_CON] = 0x260C,							// ☌
	[UC_SUPZERO] = 0x2070,					// ⁰
	[UC_SUPONE] = 0x00B9,						// ¹
	[UC_SUPTWO] = 0x00B2,					// ²
	[UC_SUPTHREE] = 0x00B3,					// ³
	[UC_SUPFOUR] = 0x2074,					// ⁴
	[UC_SUPFIVE] = 0x2075,						// ⁵
	[UC_SUPSIX] = 0x2076,						// ⁶
	[UC_SUPSEVEN] = 0x2077,					// ⁷
	[UC_SUPEIGHT] = 0x2078,					// ⁸
	[UC_SUPNINE] = 0x2079,						// ⁹
	[UC_DEGREE] = 0x00B0,						// °
	[UC_ONEHALF] = 0x00BD,					// ½
	[UC_ONETHIRD] = 0x2153,					// ⅓
	[UC_ONEQUARTER] = 0x00BC,			// ¼
	[UC_ONEFIFTH] = 0x2155,					// ⅕
	[UC_ONESIXTH] = 0x2159,					// ⅙
	[UC_ONEEIGHTH] = 0x215B,				// ⅛
	[UC_TWOTHIRDS] = 0x2154,				// ⅔
	[UC_TWOFIFTHS] = 0x2156,				// ⅖
	[UC_THREEQUARTERS] = 0x00BE,		// ¾
	[UC_THREEFIFTHS] = 0x2157,				// ⅗
	[UC_THREEEIGHTHS] = 0x215C,			// ⅜
	[UC_FOURFIFTHS] = 0x2158,				// ⅘
	[UC_FIVESIXTHS] = 0x215A,					// ⅚
	[UC_FIVEEIGHTHS] = 0x215D,				// ⅝
	[UC_SEVENEIGHTHS] = 0x215E,			// ⅞
	[UC_DASHEM] = 0x2014,						// —
	[UC_DASHEN] = 0x2013,						// –
	[UC_LSINGLE] = 0x2018,						// ‘
	[UC_LDOUBLE] = 0x201C,					// “
	[UC_RSINGLE] = 0x2019,						// ’
	[UC_RDOUBLE] = 0x201D,					// ”
	[UC_GUILLEMETLEFT] = 0x00AB,		// «
	[UC_GUILLEMETRIGHT] = 0x00BB,		// »
	[UC_GUILEFTSINGLE] = 0x2039,			// ‹
	[UC_GUIRIGHTSINGLE] = 0x203A,		// ›
	[UC_ELLIPSIS] = 0x2026,						// …
	[UC_INTERPUNCT] = 0x00B7,				// ·
	[UC_BULLET] = 0x2022,						// •
	[UC_BULLETHOLLOW] = 0x25E6,		// ◦
	[UC_INTERROBANG] = 0x203D,			// ‽
	[UC_QUESTION] = 0x00BF,					// ¿
	[UC_EXCLAIM] = 0x00A1,					// ¡
	[UC_UNEQUAL] = 0x2260,					// ≠
	[UC_DAGGER] = 0x2020,					// †
	[UC_DAGGERDOUBLE] = 0x2021,		// ‡
	[UC_STAR] = 0x2605,							// ★
	[UC_STARHOLLOW] = 0x2606,			// ☆
	[UC_HEART] = 0x2764,						// ❤
	[UC_LEGAL] = 0x00A7,						// §
	[UC_CHECK] = 0x2713,						// ✓
	[UC_ARROWHORIZON] = 0x2194,		// ↔
	[UC_ARROWVERTICAL] = 0x2195,		// ↕
	[UC_ARROWLEFT] = 0x2190,				// ←
	[UC_ARROWRIGHT] = 0x2192,			// →
	[UC_ARROWUP] = 0x2191,					// ↑
	[UC_ARROWDOWN] = 0x2193,			// ↓
	[UC_CEDILLACAP] = 0x00C7,				// Ç
	[UC_CEDILLA] = 0x00E7,						// ç
	[UC_NTILDECAP] = 0x00D1,				// Ñ
	[UC_NTILDE] = 0x00F1,						// ñ
	[UC_SSCAP] = 0x1E9E,							// ẞ
	[UC_SS] = 0x00DF,								// ß
	[UC_AACUTECAP] = 0x00C1,				// Á
	[UC_AACUTE] = 0x00E1,						// á
	[UC_EACUTECAP] = 0x00C9,				// É
	[UC_EACUTE] = 0x00E9,						// é
	[UC_IACUTECAP] = 0x00CD,				// Í
	[UC_IACUTE] = 0x00ED,						// í
	[UC_OACUTECAP] = 0x00D3,				// Ó
	[UC_OACUTE] = 0x00F3,						// ó
	[UC_UACUTECAP] = 0x00DA,				// Ú
	[UC_UACUTE] = 0x00FA,						// ú
	[UC_YACUTECAP] = 0x00DD,				// Ý
	[UC_YACUTE] = 0x00FD,						// ý
	[UC_ACIRCUMFLEXCAP] = 0x00C2,	// Â
	[UC_ACIRCUMFLEX] = 0x00E2,			// â
	[UC_ECIRCUMFLEXCAP] = 0x00CA,	// Ê
	[UC_ECIRCUMFLEX] = 0x00EA,			// ê
	[UC_ICIRCUMFLEXCAP] = 0x00CE,		// Î
	[UC_ICIRCUMFLEX] = 0x00EE,				// î
	[UC_OCIRCUMFLEXCAP] = 0x00D4,	// Ô
	[UC_OCIRCUMFLEX] = 0x00F4,			// ô
	[UC_UCIRCUMFLEXCAP] = 0x00DB,	// Û
	[UC_UCIRCUMFLEX] = 0x00FB,			// û
	[UC_ADOTCAP] = 0x00C4,					// Ä
	[UC_ADOT] = 0x00E4,							// ä
	[UC_EDOTCAP] = 0x00CB,					// Ë
	[UC_EDOT] = 0x00EB,							// ë
	[UC_IDOTCAP] = 0x00CF,					// Ï
	[UC_IDOT] = 0x00EF,							// ï
	[UC_ODOTCAP] = 0x00D6,					// Ö
	[UC_ODOT] = 0x00F6,							// ö
	[UC_UDOTCAP] = 0x00DC,					// Ü
	[UC_UDOT] = 0x00FC,							// ü
	[UC_YDOTCAP] = 0x0178,					// Ÿ
	[UC_YDOT] = 0x00FF,							// ÿ
	[UC_AECAP] = 0x00C6,						// Æ
	[UC_AE] = 0x00E6,								// æ
	[UC_OECAP] = 0x0152,						// Œ
	[UC_OE] = 0x0153,								// œ
	[UC_AGRAVECAP] = 0x00C0,				// À
	[UC_AGRAVE] = 0x00E0,						// à
	[UC_EGRAVECAP] = 0x00C8,				// È
	[UC_EGRAVE] = 0x00E8,						// è
	[UC_IGRAVECAP] = 0x00CC,				// Ì
	[UC_IGRAVE] = 0x00EC,						// ì
	[UC_OGRAVECAP] = 0x00D2,				// Ò
	[UC_OGRAVE] = 0x00F2,						// ò
	[UC_UGRAVECAP] = 0x00D9,				// Ù
	[UC_UGRAVE] = 0x00F9,						// ù
	[UC_ARINGCAP] = 0x00C5,					// Å
	[UC_ARING] = 0x00E5,						// å
	[UC_OSLASHCAP] = 0x00D8,				// Ø
	[UC_OSLASH] = 0x00F8,						// ø
	[UC_ATILDECAP] = 0x00C3,				// Ã
	[UC_ATILDE] = 0x00E3,						// ã
	[UC_OTILDECAP] = 0x00D5,				// Õ
	[UC_OTILDE] = 0x00F5,						// õ
};

void leader_start_user(void) { rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT); }
void leader_end_user(void) {
    if (leader_sequence_one_key(KC_R)) { reset_keyboard(); }
    else if (leader_sequence_one_key(KC_C)) { register_unicodemap(UC_CEDILLA); }
    else if (leader_sequence_one_key(KC_N)) { register_unicodemap(UC_NTILDE); }
    else if (leader_sequence_one_key(KC_S)) { register_unicodemap(UC_SS); }
    else if (leader_sequence_one_key(KC_B)) { register_unicodemap(UC_BULLET); }
    else if (leader_sequence_one_key(KC_D)) { register_unicodemap(UC_DAGGER); }
    else if (leader_sequence_one_key(KC_H)) { register_unicodemap(UC_HEART); }
    else if (leader_sequence_one_key(KC_K)) { register_unicodemap(UC_CHECK); }
    else if (leader_sequence_one_key(KC_L)) { register_unicodemap(UC_LEGAL); }
    else if (leader_sequence_one_key(KC_X)) { register_unicodemap(UC_STAR); }
    else if (leader_sequence_one_key(KC_EQL)) { register_unicodemap(UC_UNEQUAL); }
    else if (leader_sequence_one_key(KC_SPC)) { register_unicodemap(UC_ELLIPSIS); }
    else if (leader_sequence_one_key(KC_COMM)) { register_unicodemap(UC_GUILLEMETLEFT); }
    else if (leader_sequence_one_key(KC_DOT)) { register_unicodemap(UC_GUILLEMETRIGHT); }
    else if (leader_sequence_one_key(KC_SLSH)) { register_unicodemap(UC_INTERROBANG); }
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
    else if (leader_sequence_two_keys(KC_A, KC_I)) { register_unicodemap(UC_ARROWUP); }
    else if (leader_sequence_two_keys(KC_A, KC_J)) { register_unicodemap(UC_ARROWLEFT); }
    else if (leader_sequence_two_keys(KC_A, KC_K)) { register_unicodemap(UC_ARROWDOWN); }
    else if (leader_sequence_two_keys(KC_A, KC_L)) { register_unicodemap(UC_ARROWRIGHT); }
    else if (leader_sequence_two_keys(KC_A, KC_H)) { register_unicodemap(UC_ARROWHORIZON); }
    else if (leader_sequence_two_keys(KC_A, KC_V)) { register_unicodemap(UC_ARROWVERTICAL); }
    else if (leader_sequence_two_keys(KC_B, KC_B)) { register_unicodemap(UC_BULLETHOLLOW); }
    else if (leader_sequence_two_keys(KC_D, KC_D)) { register_unicodemap(UC_DAGGERDOUBLE); }
    else if (leader_sequence_two_keys(KC_X, KC_X)) { register_unicodemap(UC_STARHOLLOW); }
    else if (leader_sequence_two_keys(KC_SPC, KC_SPC)) { register_unicodemap(UC_INTERPUNCT); }
    else if (leader_sequence_two_keys(KC_COMM, KC_COMM)) { register_unicodemap(UC_GUILEFTSINGLE); }
    else if (leader_sequence_two_keys(KC_DOT, KC_DOT)) { register_unicodemap(UC_GUIRIGHTSINGLE); }
    else if (leader_sequence_two_keys(KC_SLSH, KC_SLSH)) { register_unicodemap(UC_QUESTION); }
    else if (leader_sequence_two_keys(KC_1, KC_1)) { register_unicodemap(UC_EXCLAIM); }
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
    else if (leader_sequence_two_keys(KC_C, KC_C)) { register_unicodemap(UC_CEDILLACAP); }
    else if (leader_sequence_two_keys(KC_N, KC_N)) { register_unicodemap(UC_NTILDECAP); }
    else if (leader_sequence_two_keys(KC_S, KC_S)) { register_unicodemap(UC_SSCAP); }
    else if (leader_sequence_two_keys(KC_A, KC_A)) { register_unicodemap(UC_AACUTE); }
    else if (leader_sequence_two_keys(KC_E, KC_A)) { register_unicodemap(UC_EACUTE); }
    else if (leader_sequence_two_keys(KC_I, KC_A)) { register_unicodemap(UC_IACUTE); }
    else if (leader_sequence_two_keys(KC_O, KC_A)) { register_unicodemap(UC_OACUTE); }
    else if (leader_sequence_two_keys(KC_U, KC_A)) { register_unicodemap(UC_UACUTE); }
    else if (leader_sequence_two_keys(KC_Y, KC_A)) { register_unicodemap(UC_YACUTE); }
    else if (leader_sequence_two_keys(KC_A, KC_C)) { register_unicodemap(UC_ACIRCUMFLEX); }
    else if (leader_sequence_two_keys(KC_E, KC_C)) { register_unicodemap(UC_ECIRCUMFLEX); }
    else if (leader_sequence_two_keys(KC_I, KC_C)) { register_unicodemap(UC_ICIRCUMFLEX); }
    else if (leader_sequence_two_keys(KC_O, KC_C)) { register_unicodemap(UC_OCIRCUMFLEX); }
    else if (leader_sequence_two_keys(KC_U, KC_C)) { register_unicodemap(UC_UCIRCUMFLEX); }
    else if (leader_sequence_two_keys(KC_A, KC_D)) { register_unicodemap(UC_ADOT); }
    else if (leader_sequence_two_keys(KC_E, KC_D)) { register_unicodemap(UC_EDOT); }
    else if (leader_sequence_two_keys(KC_I, KC_D)) { register_unicodemap(UC_IDOT); }
    else if (leader_sequence_two_keys(KC_O, KC_D)) { register_unicodemap(UC_ODOT); }
    else if (leader_sequence_two_keys(KC_U, KC_D)) { register_unicodemap(UC_UDOT); }
    else if (leader_sequence_two_keys(KC_Y, KC_D)) { register_unicodemap(UC_YDOT); }
    else if (leader_sequence_two_keys(KC_A, KC_E)) { register_unicodemap(UC_AE); }
    else if (leader_sequence_two_keys(KC_O, KC_E)) { register_unicodemap(UC_OE); }
    else if (leader_sequence_two_keys(KC_A, KC_G)) { register_unicodemap(UC_AGRAVE); }
    else if (leader_sequence_two_keys(KC_E, KC_G)) { register_unicodemap(UC_EGRAVE); }
    else if (leader_sequence_two_keys(KC_I, KC_G)) { register_unicodemap(UC_IGRAVE); }
    else if (leader_sequence_two_keys(KC_O, KC_G)) { register_unicodemap(UC_OGRAVE); }
    else if (leader_sequence_two_keys(KC_U, KC_G)) { register_unicodemap(UC_UGRAVE); }
    else if (leader_sequence_two_keys(KC_A, KC_R)) { register_unicodemap(UC_ARING); }
    else if (leader_sequence_two_keys(KC_O, KC_S)) { register_unicodemap(UC_OSLASH); }
    else if (leader_sequence_two_keys(KC_A, KC_T)) { register_unicodemap(UC_ATILDE); }
    else if (leader_sequence_two_keys(KC_O, KC_T)) { register_unicodemap(UC_OTILDE); }
    else if (leader_sequence_two_keys(KC_P, KC_P)) { send_unicode_string(":þ"); }
    else if (leader_sequence_three_keys(KC_L, KC_E, KC_N)) { send_unicode_string("( ͡° ͜ʖ ͡°)"); }
    else if (leader_sequence_three_keys(KC_C, KC_R, KC_Y)) { send_unicode_string("ಥ_ಥ"); }
    else if (leader_sequence_three_keys(KC_D, KC_I, KC_S)) { send_unicode_string("ಠ_ಠ"); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_K)) { send_unicode_string("¯\\_(ツ)_/¯"); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_M)) { send_unicode_string("¯\\\\\\_(ツ)\\_/¯"); }
    else if (leader_sequence_three_keys(KC_A, KC_A, KC_A)) { register_unicodemap(UC_AACUTECAP); }
    else if (leader_sequence_three_keys(KC_E, KC_A, KC_A)) { register_unicodemap(UC_EACUTECAP); }
    else if (leader_sequence_three_keys(KC_I, KC_A, KC_A)) { register_unicodemap(UC_IACUTECAP); }
    else if (leader_sequence_three_keys(KC_O, KC_A, KC_A)) { register_unicodemap(UC_OACUTECAP); }
    else if (leader_sequence_three_keys(KC_U, KC_A, KC_A)) { register_unicodemap(UC_UACUTECAP); }
    else if (leader_sequence_three_keys(KC_Y, KC_A, KC_A)) { register_unicodemap(UC_YACUTECAP); }
    else if (leader_sequence_three_keys(KC_A, KC_C, KC_C)) { register_unicodemap(UC_ACIRCUMFLEXCAP); }
    else if (leader_sequence_three_keys(KC_E, KC_C, KC_C)) { register_unicodemap(UC_ECIRCUMFLEXCAP); }
    else if (leader_sequence_three_keys(KC_I, KC_C, KC_C)) { register_unicodemap(UC_ICIRCUMFLEXCAP); }
    else if (leader_sequence_three_keys(KC_O, KC_C, KC_C)) { register_unicodemap(UC_OCIRCUMFLEXCAP); }
    else if (leader_sequence_three_keys(KC_U, KC_C, KC_C)) { register_unicodemap(UC_UCIRCUMFLEXCAP); }
    else if (leader_sequence_three_keys(KC_A, KC_D, KC_D)) { register_unicodemap(UC_ADOTCAP); }
    else if (leader_sequence_three_keys(KC_E, KC_D, KC_D)) { register_unicodemap(UC_EDOTCAP); }
    else if (leader_sequence_three_keys(KC_I, KC_D, KC_D)) { register_unicodemap(UC_IDOTCAP); }
    else if (leader_sequence_three_keys(KC_O, KC_D, KC_D)) { register_unicodemap(UC_ODOTCAP); }
    else if (leader_sequence_three_keys(KC_U, KC_D, KC_D)) { register_unicodemap(UC_UDOTCAP); }
    else if (leader_sequence_three_keys(KC_Y, KC_D, KC_D)) { register_unicodemap(UC_YDOTCAP); }
    else if (leader_sequence_three_keys(KC_A, KC_E, KC_E)) { register_unicodemap(UC_AECAP); }
    else if (leader_sequence_three_keys(KC_O, KC_E, KC_E)) { register_unicodemap(UC_OECAP); }
    else if (leader_sequence_three_keys(KC_A, KC_G, KC_G)) { register_unicodemap(UC_AGRAVECAP); }
    else if (leader_sequence_three_keys(KC_E, KC_G, KC_G)) { register_unicodemap(UC_EGRAVECAP); }
    else if (leader_sequence_three_keys(KC_I, KC_G, KC_G)) { register_unicodemap(UC_IGRAVECAP); }
    else if (leader_sequence_three_keys(KC_O, KC_G, KC_G)) { register_unicodemap(UC_OGRAVECAP); }
    else if (leader_sequence_three_keys(KC_U, KC_G, KC_G)) { register_unicodemap(UC_UGRAVECAP); }
    else if (leader_sequence_three_keys(KC_A, KC_R, KC_R)) { register_unicodemap(UC_ARINGCAP); }
    else if (leader_sequence_three_keys(KC_O, KC_S, KC_S)) { register_unicodemap(UC_OSLASHCAP); }
    else if (leader_sequence_three_keys(KC_A, KC_T, KC_T)) { register_unicodemap(UC_ATILDECAP); }
    else if (leader_sequence_three_keys(KC_O, KC_T, KC_T)) { register_unicodemap(UC_OTILDECAP); }
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
	COMBO(L_VOL_DN, KC_VOLD),					// 4 (we keep four volume up and down for now)
	COMBO(R_VOL_DN, KC_VOLD),					// 5 (once we solder rotary encoder, we delete)
	COMBO(L_VOL_UP, KC_VOLU),					// 6 (all bridge combos, the bool below, and)
	COMBO(R_VOL_UP, KC_VOLU),					// 7 (COMBO_SHOULD_TRIGGER in config.h)
	COMBO(SCR_LEFT, KC_WH_L),					// 8
	COMBO(SCR_RIGHT, KC_WH_R),				// 9
	COMBO(WORD_LEFT, C(KC_LEFT)),			// 10
	COMBO(WORD_RIGHT, C(KC_RGHT)),		// 11
	COMBO(CAPS_LOCK, KC_CAPS),				// 12 (only these three combos will be left after you solder)
	COMBO(TASK_SWITCH, LSA(KC_ESC)),		// 13 (the rotary encoder; config.h COMBO_COUNT to 3)
	COMBO(FN_LOCK, DF(2)), };						// 14 (delete COMBO_SHOULD_TRIGGER; also the bool below)

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {	// delete this bool after soldering the rotary encoder; delete in config.h also
        case 2:	// combo_index wants an integer; the place order in the array above, not combo name
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

typedef enum { TD_NONE, TD_1T, TD_1H, TD_2T, TD_2H, } td_state_t;
typedef struct { bool is_press_action; td_state_t state; } td_tap_t;
enum { DASH, HOME, END };

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case TD(DASH): return 200;
		case TD(HOME):
		case TD(END): return 320;
		default: return TAPPING_TERM; } }

td_state_t cur_dance(tap_dance_state_t *state) {
	if (state->count == 1) {
		if (state->pressed) return TD_1H;
		else return TD_1T; }
	else if (state->pressed) return TD_2H;
	else return TD_2T; }

static td_tap_t dtap_state = { .is_press_action = true, .state = TD_NONE };
static td_tap_t htap_state = { .is_press_action = true, .state = TD_NONE };
static td_tap_t etap_state = { .is_press_action = true, .state = TD_NONE };

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

uint32_t callback(uint32_t trigger_time, void *cb_arg) { rgblight_disable_noeeprom(); return 0; }
void keyboard_post_init_user(void) { rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD + 2); defer_exec(8000, callback, NULL); }

bool led_update_user(led_t led_state) {
	static bool caps = false;
	if (caps != led_state.caps_lock) { caps = led_state.caps_lock;
		(!caps) ? rgblight_disable_noeeprom() : rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL + 5); } return true; }

layer_state_t default_layer_state_set_user(layer_state_t state) {
	switch (get_highest_layer(state)) {
	case 2: rgblight_enable_noeeprom(); rgblight_reload_from_eeprom(); autoshift_enable(); break;
	case 1: rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL + 5); autoshift_disable(); break;
	case 0: rgblight_enable_noeeprom(); rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT); autoshift_enable(); break; } return state; }

enum unicode_custom { CURLY = SAFE_RANGE };
enum states { OPEN, CLOSE };
enum states state = OPEN;
static uint16_t recent = KC_NO;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case DF(1): if (record->event.pressed) { defer_exec(3000, callback, NULL); } return true;
		case DF(0): if (record->event.pressed) { defer_exec(500, callback, NULL); } return true;
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