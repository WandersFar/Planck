enum layer_names { BASE, AUSSIE, GAME, FN };

enum unicode_names {
  ZA,
  ZC,
  ZE,
  ZF,
  ZG,
  ZH,
  ZI,
  ZK,
  ZL,
  ZM,
  ZR,
  ZT,
  ZV,
  ZW,
  ZY,
  ZAA,
  ZBB,
  ZCC,
  ZDD,
  ZEE,
  ZFF,
  ZGG,
  ZJJ,
  ZKK,
  ZLL,
  ZMM,
  ZPP,
  ZRR,
  ZTT,
  ZUU,
  ZVV,
  ZYY,
  ZDOT,
  ZQS,
  ZQD,
  ZAMP,
  ZBANG,
  CEDILLACAP,
  CEDILLA,
  NTILDECAP,
  NTILDE,
  SSCAP,
  SS,
  AACUTECAP,
  AACUTE,
  EACUTECAP,
  EACUTE,
  IACUTECAP,
  IACUTE,
  OACUTECAP,
  OACUTE,
  UACUTECAP,
  UACUTE,
  YACUTECAP,
  YACUTE,
  ACIRCUMFLEXCAP,
  ACIRCUMFLEX,
  ECIRCUMFLEXCAP,
  ECIRCUMFLEX,
  ICIRCUMFLEXCAP,
  ICIRCUMFLEX,
  OCIRCUMFLEXCAP,
  OCIRCUMFLEX,
  UCIRCUMFLEXCAP,
  UCIRCUMFLEX,
  ADOTCAP,
  ADOT,
  EDOTCAP,
  EDOT,
  IDOTCAP,
  IDOT,
  ODOTCAP,
  ODOT,
  UDOTCAP,
  UDOT,
  YDOTCAP,
  YDOT,
  AECAP,
  AE,
  OECAP,
  OE,
  AGRAVECAP,
  AGRAVE,
  EGRAVECAP,
  EGRAVE,
  IGRAVECAP,
  IGRAVE,
  OGRAVECAP,
  OGRAVE,
  UGRAVECAP,
  UGRAVE,
  ARINGCAP,
  ARING,
  OSLASHCAP,
  OSLASH,
  ATILDECAP,
  ATILDE,
  OTILDECAP,
  OTILDE,
  DASHEM,
  DASHEN,
  LSINGLE,
  LDOUBLE,
  RSINGLE,
  RDOUBLE,
  GUILLEMETLEFT,
  GUILLEMETRIGHT,
  GUILEFTSINGLE,
  GUIRIGHTSINGLE,
  ELLIPSIS,
  INTERPUNCT,
  BULLET,
  BULLETHOLLOW,
  INTERROBANG,
  QUESTION,
  EXCLAIM,
  CENTAMERICAN,
  EUROEUROPEAN,
  POUNDBRITISH,
  YENJAPANESE,
  UNEQUAL,
  DAGGER,
  DAGGERDOUBLE,
  SNOWFLAKEIN,
  SNOWFLAKEOUT,
  STAR,
  STARHOLLOW,
  STARPINWHEEL,
  STAROUTLINE,
  TWINKLE,
  TWINKLECLOVER,
  HEART,
  LEGAL,
  CHECK,
  INFINITY,
  FLOWER,
  FLEURDELIS,
  FLORALSHAMROCK,
  FLORALVINE,
  VINEOPEN,
  VINECLOSE,
  ARROWFLETCHED,
  ARROWSOLID,
  ARROWHORIZON,
  ARROWVERTICAL,
  ARROWLEFT,
  ARROWRIGHT,
  ARROWUP,
  ARROWDOWN,
  SUPZERO,
  SUPONE,
  SUPTWO,
  SUPTHREE,
  SUPFOUR,
  SUPFIVE,
  SUPSIX,
  SUPSEVEN,
  SUPEIGHT,
  SUPNINE,
  DEGREE,
  ONEHALF,
  ONETHIRD,
  ONEQUARTER,
  ONEFIFTH,
  ONESIXTH,
  ONEEIGHTH,
  TWOTHIRDS,
  TWOFIFTHS,
  THREEQUARTERS,
  THREEFIFTHS,
  THREEEIGHTHS,
  FOURFIFTHS,
  FIVESIXTHS,
  FIVEEIGHTHS,
  SEVENEIGHTHS,
  MERCURY,
  VENUS,
  MOON,
  MARS,
  JUPITER,
  SATURN,
  URANUS,
  NEPTUNE,
  PLUTO,
  SUN,
  ARIES,
  TAURUS,
  GEMINI,
  CANCER,
  LEO,
  VIRGO,
  LIBRA,
  SCORPIO,
  SAGITTARIUS,
  CAPRICORN,
  AQUARIUS,
  PISCES,
  CERES,
  VESTA,
  JUNO,
  PALLAS,
  FORTUNE,
  CHIRON,
  LILITH,
  NORTH,
  SOUTH,
  SEMISEXTILE,
  SEXTILE,
  SQUARE,
  TRINE,
  QUINCUNX,
  OPPOSITION,
  CONJUNCTION,
};

const uint32_t unicode_map[] PROGMEM = {
  [ZA] = 0x250,  // ɐ
  [ZC] = 0x254,  // ɔ
  [ZE] = 0x1DD,  // ǝ
  [ZF] = 0x25F,  // ɟ
  [ZG] = 0x253,  // ɓ
  [ZH] = 0x265,  // ɥ
  [ZI] = 0x1D09,  // ᴉ
  [ZK] = 0x29E,  // ʞ
  [ZL] = 0x5DF,  // ן
  [ZM] = 0x26F,  // ɯ
  [ZR] = 0x279,  // ɹ
  [ZT] = 0x287,  // ʇ
  [ZV] = 0x28C,  // ʌ
  [ZW] = 0x28D,  // ʍ
  [ZY] = 0x28E,  // ʎ
  [ZAA] = 0xA4EF,  // ꓯ
  [ZBB] = 0xA4ED,  // ꓭ
  [ZCC] = 0x2183,  // Ↄ
  [ZDD] = 0xA4F7,  // ꓷ
  [ZEE] = 0x18E,  // Ǝ
  [ZFF] = 0x2132,  // Ⅎ
  [ZGG] = 0x2141,  // ⅁
  [ZJJ] = 0x148B,  // ᒋ
  [ZKK] = 0xA4D8,  // ꓘ
  [ZLL] = 0x2142,  // ⅂
  [ZMM] = 0xA7FD,  // ꟽ
  [ZPP] = 0xA4D2,  // ꓒ
  [ZRR] = 0xA4E4,  // ꓤ
  [ZTT] = 0xA4D5,  // ꓕ
  [ZUU] = 0xA4F5,  // ꓵ
  [ZVV] = 0xA4E5,  // ꓥ
  [ZYY] = 0x2144,  // ⅄
  [ZDOT] = 0x2D9,  // ˙
  [ZQS] = 0x201A,  // ‚
  [ZQD] = 0x201E,  // „
  [ZAMP] = 0x214B,  // ⅋
  [ZBANG] = 0x2E18,  // ⸘
  [CEDILLACAP] = 0xC7,  // Ç
  [CEDILLA] = 0xE7,  // ç
  [NTILDECAP] = 0xD1,  // Ñ
  [NTILDE] = 0xF1,  // ñ
  [SSCAP] = 0x1E9E,  // ẞ
  [SS] = 0xDF,  // ß
  [AACUTECAP] = 0xC1,  // Á
  [AACUTE] = 0xE1,  // á
  [EACUTECAP] = 0xC9,  // É
  [EACUTE] = 0xE9,  // é
  [IACUTECAP] = 0xCD,  // Í
  [IACUTE] = 0xED,  // í
  [OACUTECAP] = 0xD3,  // Ó
  [OACUTE] = 0xF3,  // ó
  [UACUTECAP] = 0xDA,  // Ú
  [UACUTE] = 0xFA,  // ú
  [YACUTECAP] = 0xDD,  // Ý
  [YACUTE] = 0xFD,  // ý
  [ACIRCUMFLEXCAP] = 0xC2,  // Â
  [ACIRCUMFLEX] = 0xE2,  // â
  [ECIRCUMFLEXCAP] = 0xCA,  // Ê
  [ECIRCUMFLEX] = 0xEA,  // ê
  [ICIRCUMFLEXCAP] = 0xCE,  // Î
  [ICIRCUMFLEX] = 0xEE,  // î
  [OCIRCUMFLEXCAP] = 0xD4,  // Ô
  [OCIRCUMFLEX] = 0xF4,  // ô
  [UCIRCUMFLEXCAP] = 0xDB,  // Û
  [UCIRCUMFLEX] = 0xFB,  // û
  [ADOTCAP] = 0xC4,  // Ä
  [ADOT] = 0xE4,  // ä
  [EDOTCAP] = 0xCB,  // Ë
  [EDOT] = 0xEB,  // ë
  [IDOTCAP] = 0xCF,  // Ï
  [IDOT] = 0xEF,  // ï
  [ODOTCAP] = 0xD6,  // Ö
  [ODOT] = 0xF6,  // ö
  [UDOTCAP] = 0xDC,  // Ü
  [UDOT] = 0xFC,  // ü
  [YDOTCAP] = 0x178,  // Ÿ
  [YDOT] = 0xFF,  // ÿ
  [AECAP] = 0xC6,  // Æ
  [AE] = 0xE6,  // æ
  [OECAP] = 0x152,  // Œ
  [OE] = 0x153,  // œ
  [AGRAVECAP] = 0xC0,  // À
  [AGRAVE] = 0xE0,  // à
  [EGRAVECAP] = 0xC8,  // È
  [EGRAVE] = 0xE8,  // è
  [IGRAVECAP] = 0xCC,  // Ì
  [IGRAVE] = 0xEC,  // ì
  [OGRAVECAP] = 0xD2,  // Ò
  [OGRAVE] = 0xF2,  // ò
  [UGRAVECAP] = 0xD9,  // Ù
  [UGRAVE] = 0xF9,  // ù
  [ARINGCAP] = 0xC5,  // Å
  [ARING] = 0xE5,  // å
  [OSLASHCAP] = 0xD8,  // Ø
  [OSLASH] = 0xF8,  // ø
  [ATILDECAP] = 0xC3,  // Ã
  [ATILDE] = 0xE3,  // ã
  [OTILDECAP] = 0xD5,  // Õ
  [OTILDE] = 0xF5,  // õ
  [DASHEM] = 0x2014,  // —
  [DASHEN] = 0x2013,  // –
  [LSINGLE] = 0x2018,  // ‘
  [LDOUBLE] = 0x201C,  // “
  [RSINGLE] = 0x2019,  // ’
  [RDOUBLE] = 0x201D,  // ”
  [GUILLEMETLEFT] = 0xAB,  // «
  [GUILLEMETRIGHT] = 0xBB,  // »
  [GUILEFTSINGLE] = 0x2039,  // ‹
  [GUIRIGHTSINGLE] = 0x203A,  // ›
  [ELLIPSIS] = 0x2026,  // …
  [INTERPUNCT] = 0xB7,  // ·
  [BULLET] = 0x2022,  // •
  [BULLETHOLLOW] = 0x25E6,  // ◦
  [INTERROBANG] = 0x203D,  // ‽
  [QUESTION] = 0xBF,  // ¿
  [EXCLAIM] = 0xA1,  // ¡
  [CENTAMERICAN] = 0xA2,  // ¢
  [EUROEUROPEAN] = 0x20AC,  // €
  [POUNDBRITISH] = 0xA3,  // £
  [YENJAPANESE] = 0xA5,  // ¥
  [UNEQUAL] = 0x2260,  // ≠
  [DAGGER] = 0x2020,  // †
  [DAGGERDOUBLE] = 0x2021,  // ‡
  [SNOWFLAKEIN] = 0x2745,  // ❅
  [SNOWFLAKEOUT] = 0x2746,  // ❆
  [STAR] = 0x2605,  // ★
  [STARHOLLOW] = 0x2606,  // ☆
  [STARPINWHEEL] = 0x272F,  // ✯
  [STAROUTLINE] = 0x272D,  // ✭
  [TWINKLE] = 0x2748,  // ❈
  [TWINKLECLOVER] = 0x2725,  // ✥
  [HEART] = 0x2764,  // ❤
  [LEGAL] = 0xA7,  // §
  [CHECK] = 0x2713,  // ✓
  [INFINITY] = 0x221E,  // ∞
  [FLOWER] = 0x2740,  // ❀
  [FLEURDELIS] = 0x269C,  // ⚜
  [FLORALSHAMROCK] = 0x2618,  // ☘
  [FLORALVINE] = 0x2766,  // ❦
  [VINEOPEN] = 0x2619,  // ☙
  [VINECLOSE] = 0x2767,  // ❧
  [ARROWFLETCHED] = 0x27B3,  // ➳
  [ARROWSOLID] = 0x27B5,  // ➵
  [ARROWHORIZON] = 0x2194,  // ↔
  [ARROWVERTICAL] = 0x2195,  // ↕
  [ARROWLEFT] = 0x2190,  // ←
  [ARROWRIGHT] = 0x2192,  // →
  [ARROWUP] = 0x2191,  // ↑
  [ARROWDOWN] = 0x2193,  // ↓
  [SUPZERO] = 0x2070,  // ⁰
  [SUPONE] = 0xB9,  // ¹
  [SUPTWO] = 0xB2,  // ²
  [SUPTHREE] = 0xB3,  // ³
  [SUPFOUR] = 0x2074,  // ⁴
  [SUPFIVE] = 0x2075,  // ⁵
  [SUPSIX] = 0x2076,  // ⁶
  [SUPSEVEN] = 0x2077,  // ⁷
  [SUPEIGHT] = 0x2078,  // ⁸
  [SUPNINE] = 0x2079,  // ⁹
  [DEGREE] = 0xB0,  // °
  [ONEHALF] = 0xBD,  // ½
  [ONETHIRD] = 0x2153,  // ⅓
  [ONEQUARTER] = 0xBC,  // ¼
  [ONEFIFTH] = 0x2155,  // ⅕
  [ONESIXTH] = 0x2159,  // ⅙
  [ONEEIGHTH] = 0x215B,  // ⅛
  [TWOTHIRDS] = 0x2154,  // ⅔
  [TWOFIFTHS] = 0x2156,  // ⅖
  [THREEQUARTERS] = 0xBE,  // ¾
  [THREEFIFTHS] = 0x2157,  // ⅗
  [THREEEIGHTHS] = 0x215C,  // ⅜
  [FOURFIFTHS] = 0x2158,  // ⅘
  [FIVESIXTHS] = 0x215A,  // ⅚
  [FIVEEIGHTHS] = 0x215D,  // ⅝
  [SEVENEIGHTHS] = 0x215E,  // ⅞
  [MERCURY] = 0x263F,  // ☿
  [VENUS] = 0x2640,  // ♀
  [MOON] = 0x263D,  // ☽
  [MARS] = 0x2642,  // ♂
  [JUPITER] = 0x2643,  // ♃
  [SATURN] = 0x2644,  // ♄
  [URANUS] = 0x2645,  // ♅
  [NEPTUNE] = 0x2646,  // ♆
  [PLUTO] = 0x2647,  // ♇
  [SUN] = 0x2609,  // ☉
  [ARIES] = 0x2648,  // ♈
  [TAURUS] = 0x2649,  // ♉
  [GEMINI] = 0x264A,  // ♊
  [CANCER] = 0x264B,  // ♋
  [LEO] = 0x264C,  // ♌
  [VIRGO] = 0x264D,  // ♍
  [LIBRA] = 0x264E,  // ♎
  [SCORPIO] = 0x264F,  // ♏
  [SAGITTARIUS] = 0x2650,  // ♐
  [CAPRICORN] = 0x2651,  // ♑
  [AQUARIUS] = 0x2652,  // ♒
  [PISCES] = 0x2653,  // ♓
  [CERES] = 0x26B3,  // ⚳
  [VESTA] = 0x26B6,  // ⚶
  [JUNO] = 0x26B5,  // ⚵
  [PALLAS] = 0x26B4,  // ⚴
  [FORTUNE] = 0x2297,  // ⊗
  [CHIRON] = 0x26B7,  // ⚷
  [LILITH] = 0x26B8,  // ⚸
  [NORTH] = 0x260A,  // ☊
  [SOUTH] = 0x260B,  // ☋
  [SEMISEXTILE] = 0x26BA,  // ⚺
  [SEXTILE] = 0x26B9,  // ⚹
  [SQUARE] = 0x25A1,  // □
  [TRINE] = 0x25B3,  // △
  [QUINCUNX] = 0x26BB,  // ⚻
  [OPPOSITION] = 0x260D,  // ☍
  [CONJUNCTION] = 0x260C,  // ☌
};

void leader_start_user(void) { rgblight_enable_noeeprom();
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT); }
void leader_end_user(void) {
  if (leader_sequence_one_key(KC_R)) { reset_keyboard(); }
  else if (leader_sequence_two_keys(KC_O, KC_Z)) { set_single_default_layer(AUSSIE); return; }
  else if (leader_sequence_one_key(KC_SPC)) { register_unicodemap(ELLIPSIS); }
  else if (leader_sequence_one_key(KC_COMM)) { register_unicodemap(GUILLEMETLEFT); }
  else if (leader_sequence_one_key(KC_DOT)) { register_unicodemap(GUILLEMETRIGHT); }
  else if (leader_sequence_one_key(KC_SLSH)) { register_unicodemap(INTERROBANG); }
  else if (leader_sequence_one_key(KC_1)) { register_unicodemap(SUPONE); }
  else if (leader_sequence_one_key(KC_2)) { register_unicodemap(SUPTWO); }
  else if (leader_sequence_one_key(KC_3)) { register_unicodemap(SUPTHREE); }
  else if (leader_sequence_one_key(KC_4)) { register_unicodemap(SUPFOUR); }
  else if (leader_sequence_one_key(KC_5)) { register_unicodemap(SUPFIVE); }
  else if (leader_sequence_one_key(KC_6)) { register_unicodemap(SUPSIX); }
  else if (leader_sequence_one_key(KC_7)) { register_unicodemap(SUPSEVEN); }
  else if (leader_sequence_one_key(KC_8)) { register_unicodemap(SUPEIGHT); }
  else if (leader_sequence_one_key(KC_9)) { register_unicodemap(SUPNINE); }
  else if (leader_sequence_one_key(KC_0)) { register_unicodemap(SUPZERO); }
  else if (leader_sequence_one_key(KC_C)) { register_unicodemap(CEDILLA); }
  else if (leader_sequence_one_key(KC_N)) { register_unicodemap(NTILDE); }
  else if (leader_sequence_one_key(KC_S)) { register_unicodemap(SS); }
  else if (leader_sequence_one_key(KC_B)) { register_unicodemap(BULLET); }
  else if (leader_sequence_one_key(KC_D)) { register_unicodemap(DAGGER); }
  else if (leader_sequence_one_key(KC_F)) { register_unicodemap(FLOWER); }
  else if (leader_sequence_one_key(KC_H)) { register_unicodemap(HEART); }
  else if (leader_sequence_one_key(KC_I)) { register_unicodemap(INFINITY); }
  else if (leader_sequence_one_key(KC_K)) { register_unicodemap(CHECK); }
  else if (leader_sequence_one_key(KC_L)) { register_unicodemap(LEGAL); }
  else if (leader_sequence_one_key(KC_Q)) { register_unicodemap(UNEQUAL); }
  else if (leader_sequence_one_key(KC_T)) { register_unicodemap(TWINKLE); }
  else if (leader_sequence_one_key(KC_V)) { register_unicodemap(VINEOPEN); }
  else if (leader_sequence_one_key(KC_X)) { register_unicodemap(STAR); }
  else if (leader_sequence_one_key(KC_Z)) { register_unicodemap(STARPINWHEEL); }
  else if (leader_sequence_one_key(KC_P)) { send_unicode_string(":þ"); }
  else if (leader_sequence_two_keys(KC_L, KC_N)) { send_unicode_string("( ͡° ͜ʖ ͡°)"); }
  else if (leader_sequence_two_keys(KC_C, KC_Y)) { send_unicode_string("ಥ_ಥ"); }
  else if (leader_sequence_two_keys(KC_D, KC_S)) { send_unicode_string("ಠ_ಠ"); }
  else if (leader_sequence_two_keys(KC_D, KC_K)) { send_unicode_string("¯\\_(ツ)_/¯"); }
  else if (leader_sequence_two_keys(KC_D, KC_M)) { send_unicode_string("¯\\\\\\_(ツ)\\_/¯"); }
  else if (leader_sequence_two_keys(KC_SPC, KC_SPC)) { register_unicodemap(INTERPUNCT); }
  else if (leader_sequence_two_keys(KC_COMM, KC_COMM)) { register_unicodemap(GUILEFTSINGLE); }
  else if (leader_sequence_two_keys(KC_DOT, KC_DOT)) { register_unicodemap(GUIRIGHTSINGLE); }
  else if (leader_sequence_two_keys(KC_SLSH, KC_SLSH)) { register_unicodemap(QUESTION); }
  else if (leader_sequence_two_keys(KC_1, KC_1)) { register_unicodemap(EXCLAIM); }
  else if (leader_sequence_two_keys(KC_1, KC_2)) { register_unicodemap(ONEHALF); }
  else if (leader_sequence_two_keys(KC_1, KC_3)) { register_unicodemap(ONETHIRD); }
  else if (leader_sequence_two_keys(KC_1, KC_4)) { register_unicodemap(ONEQUARTER); }
  else if (leader_sequence_two_keys(KC_1, KC_5)) { register_unicodemap(ONEFIFTH); }
  else if (leader_sequence_two_keys(KC_1, KC_6)) { register_unicodemap(ONESIXTH); }
  else if (leader_sequence_two_keys(KC_1, KC_8)) { register_unicodemap(ONEEIGHTH); }
  else if (leader_sequence_two_keys(KC_2, KC_3)) { register_unicodemap(TWOTHIRDS); }
  else if (leader_sequence_two_keys(KC_2, KC_5)) { register_unicodemap(TWOFIFTHS); }
  else if (leader_sequence_two_keys(KC_3, KC_4)) { register_unicodemap(THREEQUARTERS); }
  else if (leader_sequence_two_keys(KC_3, KC_5)) { register_unicodemap(THREEFIFTHS); }
  else if (leader_sequence_two_keys(KC_3, KC_8)) { register_unicodemap(THREEEIGHTHS); }
  else if (leader_sequence_two_keys(KC_4, KC_5)) { register_unicodemap(FOURFIFTHS); }
  else if (leader_sequence_two_keys(KC_5, KC_6)) { register_unicodemap(FIVESIXTHS); }
  else if (leader_sequence_two_keys(KC_5, KC_8)) { register_unicodemap(FIVEEIGHTHS); }
  else if (leader_sequence_two_keys(KC_7, KC_8)) { register_unicodemap(SEVENEIGHTHS); }
  else if (leader_sequence_two_keys(KC_0, KC_0)) { register_unicodemap(DEGREE); }
  else if (leader_sequence_two_keys(KC_A, KC_I)) { register_unicodemap(ARROWUP); }
  else if (leader_sequence_two_keys(KC_A, KC_J)) { register_unicodemap(ARROWLEFT); }
  else if (leader_sequence_two_keys(KC_A, KC_K)) { register_unicodemap(ARROWDOWN); }
  else if (leader_sequence_two_keys(KC_A, KC_L)) { register_unicodemap(ARROWRIGHT); }
  else if (leader_sequence_two_keys(KC_A, KC_H)) { register_unicodemap(ARROWHORIZON); }
  else if (leader_sequence_two_keys(KC_A, KC_V)) { register_unicodemap(ARROWVERTICAL); }
  else if (leader_sequence_two_keys(KC_A, KC_F)) { register_unicodemap(ARROWFLETCHED); }
  else if (leader_sequence_two_keys(KC_A, KC_S)) { register_unicodemap(ARROWSOLID); }
  else if (leader_sequence_two_keys(KC_B, KC_B)) { register_unicodemap(BULLETHOLLOW); }
  else if (leader_sequence_two_keys(KC_C, KC_A)) { register_unicodemap(CENTAMERICAN); }
  else if (leader_sequence_two_keys(KC_E, KC_E)) { register_unicodemap(EUROEUROPEAN); }
  else if (leader_sequence_two_keys(KC_P, KC_B)) { register_unicodemap(POUNDBRITISH); }
  else if (leader_sequence_two_keys(KC_Y, KC_J)) { register_unicodemap(YENJAPANESE); }
  else if (leader_sequence_two_keys(KC_D, KC_D)) { register_unicodemap(DAGGERDOUBLE); }
  else if (leader_sequence_two_keys(KC_F, KC_D)) { register_unicodemap(FLEURDELIS); }
  else if (leader_sequence_two_keys(KC_F, KC_S)) { register_unicodemap(FLORALSHAMROCK); }
  else if (leader_sequence_two_keys(KC_F, KC_V)) { register_unicodemap(FLORALVINE); }
  else if (leader_sequence_two_keys(KC_S, KC_F)) { register_unicodemap(SNOWFLAKEIN); }
  else if (leader_sequence_two_keys(KC_S, KC_K)) { register_unicodemap(SNOWFLAKEOUT); }
  else if (leader_sequence_two_keys(KC_T, KC_T)) { register_unicodemap(TWINKLECLOVER); }
  else if (leader_sequence_two_keys(KC_V, KC_V)) { register_unicodemap(VINECLOSE); }
  else if (leader_sequence_two_keys(KC_X, KC_X)) { register_unicodemap(STARHOLLOW); }
  else if (leader_sequence_two_keys(KC_Z, KC_Z)) { register_unicodemap(STAROUTLINE); }
  else if (leader_sequence_two_keys(KC_C, KC_C)) { register_unicodemap(CEDILLACAP); }
  else if (leader_sequence_two_keys(KC_N, KC_N)) { register_unicodemap(NTILDECAP); }
  else if (leader_sequence_two_keys(KC_S, KC_S)) { register_unicodemap(SSCAP); }
  else if (leader_sequence_two_keys(KC_A, KC_A)) { register_unicodemap(AACUTE); }
  else if (leader_sequence_two_keys(KC_E, KC_A)) { register_unicodemap(EACUTE); }
  else if (leader_sequence_two_keys(KC_I, KC_A)) { register_unicodemap(IACUTE); }
  else if (leader_sequence_two_keys(KC_O, KC_A)) { register_unicodemap(OACUTE); }
  else if (leader_sequence_two_keys(KC_U, KC_A)) { register_unicodemap(UACUTE); }
  else if (leader_sequence_two_keys(KC_Y, KC_A)) { register_unicodemap(YACUTE); }
  else if (leader_sequence_two_keys(KC_A, KC_C)) { register_unicodemap(ACIRCUMFLEX); }
  else if (leader_sequence_two_keys(KC_E, KC_C)) { register_unicodemap(ECIRCUMFLEX); }
  else if (leader_sequence_two_keys(KC_I, KC_C)) { register_unicodemap(ICIRCUMFLEX); }
  else if (leader_sequence_two_keys(KC_O, KC_C)) { register_unicodemap(OCIRCUMFLEX); }
  else if (leader_sequence_two_keys(KC_U, KC_C)) { register_unicodemap(UCIRCUMFLEX); }
  else if (leader_sequence_two_keys(KC_A, KC_D)) { register_unicodemap(ADOT); }
  else if (leader_sequence_two_keys(KC_E, KC_D)) { register_unicodemap(EDOT); }
  else if (leader_sequence_two_keys(KC_I, KC_D)) { register_unicodemap(IDOT); }
  else if (leader_sequence_two_keys(KC_O, KC_D)) { register_unicodemap(ODOT); }
  else if (leader_sequence_two_keys(KC_U, KC_D)) { register_unicodemap(UDOT); }
  else if (leader_sequence_two_keys(KC_Y, KC_D)) { register_unicodemap(YDOT); }
  else if (leader_sequence_two_keys(KC_A, KC_E)) { register_unicodemap(AE); }
  else if (leader_sequence_two_keys(KC_O, KC_E)) { register_unicodemap(OE); }
  else if (leader_sequence_two_keys(KC_A, KC_G)) { register_unicodemap(AGRAVE); }
  else if (leader_sequence_two_keys(KC_E, KC_G)) { register_unicodemap(EGRAVE); }
  else if (leader_sequence_two_keys(KC_I, KC_G)) { register_unicodemap(IGRAVE); }
  else if (leader_sequence_two_keys(KC_O, KC_G)) { register_unicodemap(OGRAVE); }
  else if (leader_sequence_two_keys(KC_U, KC_G)) { register_unicodemap(UGRAVE); }
  else if (leader_sequence_two_keys(KC_A, KC_R)) { register_unicodemap(ARING); }
  else if (leader_sequence_two_keys(KC_O, KC_S)) { register_unicodemap(OSLASH); }
  else if (leader_sequence_two_keys(KC_A, KC_T)) { register_unicodemap(ATILDE); }
  else if (leader_sequence_two_keys(KC_O, KC_T)) { register_unicodemap(OTILDE); }
  else if (leader_sequence_three_keys(KC_A, KC_A, KC_A)) { register_unicodemap(AACUTECAP); }
  else if (leader_sequence_three_keys(KC_E, KC_A, KC_A)) { register_unicodemap(EACUTECAP); }
  else if (leader_sequence_three_keys(KC_I, KC_A, KC_A)) { register_unicodemap(IACUTECAP); }
  else if (leader_sequence_three_keys(KC_O, KC_A, KC_A)) { register_unicodemap(OACUTECAP); }
  else if (leader_sequence_three_keys(KC_U, KC_A, KC_A)) { register_unicodemap(UACUTECAP); }
  else if (leader_sequence_three_keys(KC_Y, KC_A, KC_A)) { register_unicodemap(YACUTECAP); }
  else if (leader_sequence_three_keys(KC_A, KC_C, KC_C)) { register_unicodemap(ACIRCUMFLEXCAP); }
  else if (leader_sequence_three_keys(KC_E, KC_C, KC_C)) { register_unicodemap(ECIRCUMFLEXCAP); }
  else if (leader_sequence_three_keys(KC_I, KC_C, KC_C)) { register_unicodemap(ICIRCUMFLEXCAP); }
  else if (leader_sequence_three_keys(KC_O, KC_C, KC_C)) { register_unicodemap(OCIRCUMFLEXCAP); }
  else if (leader_sequence_three_keys(KC_U, KC_C, KC_C)) { register_unicodemap(UCIRCUMFLEXCAP); }
  else if (leader_sequence_three_keys(KC_A, KC_D, KC_D)) { register_unicodemap(ADOTCAP); }
  else if (leader_sequence_three_keys(KC_E, KC_D, KC_D)) { register_unicodemap(EDOTCAP); }
  else if (leader_sequence_three_keys(KC_I, KC_D, KC_D)) { register_unicodemap(IDOTCAP); }
  else if (leader_sequence_three_keys(KC_O, KC_D, KC_D)) { register_unicodemap(ODOTCAP); }
  else if (leader_sequence_three_keys(KC_U, KC_D, KC_D)) { register_unicodemap(UDOTCAP); }
  else if (leader_sequence_three_keys(KC_Y, KC_D, KC_D)) { register_unicodemap(YDOTCAP); }
  else if (leader_sequence_three_keys(KC_A, KC_E, KC_E)) { register_unicodemap(AECAP); }
  else if (leader_sequence_three_keys(KC_O, KC_E, KC_E)) { register_unicodemap(OECAP); }
  else if (leader_sequence_three_keys(KC_A, KC_G, KC_G)) { register_unicodemap(AGRAVECAP); }
  else if (leader_sequence_three_keys(KC_E, KC_G, KC_G)) { register_unicodemap(EGRAVECAP); }
  else if (leader_sequence_three_keys(KC_I, KC_G, KC_G)) { register_unicodemap(IGRAVECAP); }
  else if (leader_sequence_three_keys(KC_O, KC_G, KC_G)) { register_unicodemap(OGRAVECAP); }
  else if (leader_sequence_three_keys(KC_U, KC_G, KC_G)) { register_unicodemap(UGRAVECAP); }
  else if (leader_sequence_three_keys(KC_A, KC_R, KC_R)) { register_unicodemap(ARINGCAP); }
  else if (leader_sequence_three_keys(KC_O, KC_S, KC_S)) { register_unicodemap(OSLASHCAP); }
  else if (leader_sequence_three_keys(KC_A, KC_T, KC_T)) { register_unicodemap(ATILDECAP); }
  else if (leader_sequence_three_keys(KC_O, KC_T, KC_T)) { register_unicodemap(OTILDECAP); }
  else if (leader_sequence_three_keys(KC_M, KC_E, KC_R)) { register_unicodemap(MERCURY); }
  else if (leader_sequence_three_keys(KC_V, KC_E, KC_N)) { register_unicodemap(VENUS); }
  else if (leader_sequence_three_keys(KC_M, KC_O, KC_O)) { register_unicodemap(MOON); }
  else if (leader_sequence_three_keys(KC_M, KC_A, KC_R)) { register_unicodemap(MARS); }
  else if (leader_sequence_three_keys(KC_J, KC_U, KC_P)) { register_unicodemap(JUPITER); }
  else if (leader_sequence_three_keys(KC_S, KC_A, KC_T)) { register_unicodemap(SATURN); }
  else if (leader_sequence_three_keys(KC_U, KC_R, KC_A)) { register_unicodemap(URANUS); }
  else if (leader_sequence_three_keys(KC_N, KC_E, KC_P)) { register_unicodemap(NEPTUNE); }
  else if (leader_sequence_three_keys(KC_P, KC_L, KC_U)) { register_unicodemap(PLUTO); }
  else if (leader_sequence_three_keys(KC_S, KC_U, KC_N)) { register_unicodemap(SUN); }
  else if (leader_sequence_three_keys(KC_A, KC_R, KC_I)) { register_unicodemap(ARIES); }
  else if (leader_sequence_three_keys(KC_T, KC_A, KC_U)) { register_unicodemap(TAURUS); }
  else if (leader_sequence_three_keys(KC_G, KC_E, KC_M)) { register_unicodemap(GEMINI); }
  else if (leader_sequence_three_keys(KC_C, KC_A, KC_N)) { register_unicodemap(CANCER); }
  else if (leader_sequence_three_keys(KC_L, KC_E, KC_O)) { register_unicodemap(LEO); }
  else if (leader_sequence_three_keys(KC_V, KC_I, KC_R)) { register_unicodemap(VIRGO); }
  else if (leader_sequence_three_keys(KC_L, KC_I, KC_B)) { register_unicodemap(LIBRA); }
  else if (leader_sequence_three_keys(KC_S, KC_C, KC_O)) { register_unicodemap(SCORPIO); }
  else if (leader_sequence_three_keys(KC_S, KC_A, KC_G)) { register_unicodemap(SAGITTARIUS); }
  else if (leader_sequence_three_keys(KC_C, KC_A, KC_P)) { register_unicodemap(CAPRICORN); }
  else if (leader_sequence_three_keys(KC_A, KC_Q, KC_U)) { register_unicodemap(AQUARIUS); }
  else if (leader_sequence_three_keys(KC_P, KC_I, KC_S)) { register_unicodemap(PISCES); }
  else if (leader_sequence_three_keys(KC_C, KC_E, KC_R)) { register_unicodemap(CERES); }
  else if (leader_sequence_three_keys(KC_V, KC_E, KC_S)) { register_unicodemap(VESTA); }
  else if (leader_sequence_three_keys(KC_J, KC_U, KC_N)) { register_unicodemap(JUNO); }
  else if (leader_sequence_three_keys(KC_P, KC_A, KC_L)) { register_unicodemap(PALLAS); }
  else if (leader_sequence_three_keys(KC_F, KC_O, KC_R)) { register_unicodemap(FORTUNE); }
  else if (leader_sequence_three_keys(KC_C, KC_H, KC_I)) { register_unicodemap(CHIRON); }
  else if (leader_sequence_three_keys(KC_L, KC_I, KC_L)) { register_unicodemap(LILITH); }
  else if (leader_sequence_three_keys(KC_N, KC_O, KC_R)) { register_unicodemap(NORTH); }
  else if (leader_sequence_three_keys(KC_S, KC_O, KC_U)) { register_unicodemap(SOUTH); }
  else if (leader_sequence_three_keys(KC_S, KC_E, KC_M)) { register_unicodemap(SEMISEXTILE); }
  else if (leader_sequence_three_keys(KC_S, KC_E, KC_X)) { register_unicodemap(SEXTILE); }
  else if (leader_sequence_three_keys(KC_S, KC_Q, KC_U)) { register_unicodemap(SQUARE); }
  else if (leader_sequence_three_keys(KC_T, KC_R, KC_I)) { register_unicodemap(TRINE); }
  else if (leader_sequence_three_keys(KC_Q, KC_U, KC_I)) { register_unicodemap(QUINCUNX); }
  else if (leader_sequence_three_keys(KC_O, KC_P, KC_P)) { register_unicodemap(OPPOSITION); }
  else if (leader_sequence_three_keys(KC_C, KC_O, KC_N)) { register_unicodemap(CONJUNCTION); }
rgblight_disable_noeeprom(); }