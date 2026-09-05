[**Knobs**](#knobs) ![Knobs](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/40Knobs.png)
*40 keys, 2 knobs, 18 combos, monolayer, matrix*

**Split** ![Split](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/40Split.png)
*40 keys, 29 combos, monolayer, direct wire*

**Treasure** ![Treasure](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/36Treasure.png)
*36 keys, 20 combos, 2 layers, 15 pin matrix*

[**Split Gherkin**](#split-gherkin) ![Split Gherkin](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Knobs.png)
*30 keys, 2 knobs, 18 combos, 2 layers, direct wire*

[**Cheaperino**](#cheaperino) ![Cheaperino](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Cheaperino.png)
*30 keys, 1 knob, 16 combos (+ 6 oz), 2 layers*
***
*master 8 pin 5x3 matrix = RJ45 = slave 8 pin Japanese columnar duplex, rotary tap + 2 spins*

[**Shortwave Knobs**](#shortwave-knobs) ![Shortwave Knobs](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30ShortwaveKnobs.png)
*31 keys (6 1.75U, 4 1.5U, 4 1.25U, 16 1U, 1 artisan)2 knobs, 12 combos (+ 4 oz: - — bs^ del^ ' ") 2 layers*
***
*master 11 pin 6x3 matrix, rotary tap + 2 spins = RJ45 = slave 8 pin Japanese columnar duplex, rotary tap + 2 spins*

**Gherkin** ![Gherkin](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Gherkin.png)
*30 keys, 29 combos, 2 layers, 13 pin matrix*

**Shortwave** ![Shortwave](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Shortwave.png)
*30 keys, 6 1.75U, 4 1.5U, 4 1.25U, 16 1U*

**Ruler** ![Ruler](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/24Ruler.png)
*24 keys, 32 combos, 3 layers, 14 pin matrix*

**Butterstick** ![Butterstick](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/20Butterstick.png)
*20 keys, 29 combos, 3 layers, direct wire*

---

### Knobs

Tap|Left|Rotary|Right|Tap
---:|---:|:---:|:---|:---
Mute|←→|Base|↑↓|^0
Mute|Volume|Game|Zoom|^0
^F|Scroll ↔|Fn|↕ Scroll|^S
‚|Search|Oz|Undo|„

![Knobs](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/40Knobs.png)

---

### Split Gherkin

Tap|Left|Rotary|Right|Tap
---:|---:|:---:|:---|:---
Mute|←→|Base|↑↓|^0
‚|←→|Oz|+←→|„
Mute|Volume|Game|Zoom|^0
^F|Search|Number|Undo|^S
||Scroll ↔|Mouse|↕ Scroll

![Split Gherkin](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Knobs.png)

---

### Cheaperino

Mod|Layer|Rotary|Tap
---:|:---:|:---:|:---
||Oz|←→|*native Shift on hold*
||Base|←→|LT(GAME,KC_MUTE)
||Game|Volume|KC_MUTE
||Number|↑↓|MEH_T( C(KC_S) )
Hold|Number|Undo|***override Meh***
Gui|Number|Search|***override Gui***
||Mouse|Scroll ↕|SFT_T( C(KC_0) )
Hold|Mouse|Scroll ↔|*native Shift on hold*
Ctrl|Mouse|Zoom|*native Ctrl*

![Cheaperino](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30Cheaperino.png)

---

### Shortwave Knobs

Tap|Left|Rotary|Right|Tap
---:|---:|:---:|:---|:---
SFT_T(KC_HOME)|KC_LEFT KC_RGHT|Oz|KC_BSPC KC_DEL|CTL_T(KC_END)
LT(GAME,KC_MUTE)|KC_LEFT KC_RGHT|Base|KC_UP KC_DOWN|LT( GAME, C(KC_0) )
KC_MUTE|KC_VOLD KC_VOLU|Game|C(KC_MINS) C(KC_EQL)|C(KC_0)
C(KC_F)|S(KC_F3) KC_F3|Number|C(KC_Z) C(KC_Y)|C(KC_S)
||Scroll ↔|Mouse|Scroll ↕

![Shortwave Knobs](https://github.com/WandersFar/Planck/blob/main/Sub40/KLE/30ShortwaveKnobs.png)

RP2040-Zero has an integrated RGB LED on GP16. 

Hue|Duration|Meaning
---:|:---:|:---
Red|Blip|Game
Red|∞|Caps
Green|Blip|Base
Green|∞|Leader
Blue|∞|Oz
