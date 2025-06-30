* unicodelookup.com #Run and reboot:
reg add "HKCU\Control Panel\Input Method" -v EnableHexNumpad -t REG_SZ -d 1
* github.com/qmk/qmk_distro_msys/releases/latest Del Prog Files & C:\ root. Install, then:
qmk setup
qmk config user.keyboard=planck/rev6_drop
qmk config user.keymap=wf
qmk new-keymap
qmk compile -c
***Deprecated DeLeader (process_record_user)***
case LT(0,KC_DEL): if (!record->tap.count && record->event.pressed) { leader_start(); return false; } return true;
***Encoder (Rev7 changed the name of bottom left corner)***
Default is Left Shift, but Search is Right Shift—may not cancel. Fix, if needed:
tap_code16(S(KC_F3)); » tap_code16(RSFT(KC_F3));
***Shortwave Arrow Tap Dances***
  [LEFT] = ACTION_TAP_DANCE_DOUBLE(KC_LEFT, C(KC_LEFT)),
  [RIGHT] = ACTION_TAP_DANCE_DOUBLE(KC_RGHT, C(KC_RGHT)),
  [PGUP] = ACTION_TAP_DANCE_DOUBLE(KC_UP, KC_PGUP),
  [PGDN] = ACTION_TAP_DANCE_DOUBLE(KC_DOWN, KC_PGDN)
***Banana Song—Saging, saging, sagging ang suso mo!***
#define GUSTO_MO_BA_NG_SAGING WD_NOTE(_G3), WD_NOTE(_C4), WD_NOTE(_A3), WD_NOTE(_D4), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_A3), H__NOTE(_B3), W__NOTE(_C4), H__NOTE(_D4), W__NOTE(_E4), H__NOTE(_REST), WD_NOTE(_G3), WD_NOTE(_C4), WD_NOTE(_A3), WD_NOTE(_D4), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_B3), H__NOTE(_A3), H__NOTE(_B3), WD_NOTE(_C4)
getreuer.info/posts/keyboards/qmk-song-player/index.html?ABAS6H3agmlLwyyZtHiMRGUSK2AwYC1gMmAvIC8gLyAvIC0gLyAwQDIgNEBsICtgMGAtYDJgLyAvIC8gLyAtIC8gMGAb1A==
***Daybreak on Startup, Lock & Unlock: replaced by light for a silent build***
* rules.mk: AUDIO_ENABLE = yes
* config.h: #define AUDIO_INIT_DELAY
#define DAYBREAK Q__NOTE(_AF4), Q__NOTE(_BF4), Q__NOTE(_REST), H__NOTE(_DF5), H__NOTE(_BF4), HD_NOTE(_DF5), HD_NOTE(_BF4), HD_NOTE(_REST), Q__NOTE(_AF4), Q__NOTE(_BF4), Q__NOTE(_REST), H__NOTE(_DF5), Q__NOTE(_BF4), HD_NOTE(_DF5), Q__NOTE(_AF3), Q__NOTE(_AF3), Q__NOTE(_BF3), H__NOTE(_DF4), Q__NOTE(_BF3), H__NOTE(_DF4), H__NOTE(_REST), H__NOTE(_DF5), H__NOTE(_BF4), HD_NOTE(_DF5), HD_NOTE(_F5), H__NOTE(_REST), W__NOTE(_AF5), W__NOTE(_F5), W__NOTE(_DF5), HD_NOTE(_BF4), W__NOTE(_AF4),
#define STARTUP_SONG SONG(DAYBREAK)
#define LOCK Q__NOTE(_AF4), Q__NOTE(_BF4), Q__NOTE(_REST), H__NOTE(_DF5), H__NOTE(_BF4), HD_NOTE(_DF5), HD_NOTE(_F5),
#define UNLOCK W__NOTE(_AF5), W__NOTE(_F5), W__NOTE(_DF5), HD_NOTE(_BF4), W__NOTE(_AF4),
* keymap.c: float lock[][2] = SONG(LOCK); float unlock[][2] = SONG(UNLOCK);
layer_state_t default_layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
  case 2: autoshift_enable(); break;
  case 1: autoshift_disable(); PLAY_SONG(lock); break;
  case 0: autoshift_enable(); PLAY_SONG(unlock); break; } return state; }