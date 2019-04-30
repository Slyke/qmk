/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Layer shorthand


#define _PW_WAIT 0
#define _BL 1
#define _MS 2
#define _DK 3
#define _LD 4
#define _PW 6
#define _DC 5 // Unused
#define _FN 7
#define _PW_RST 8
#define _PWE1 9
#define _PWE2 10
#define _PW1 11
#define _PW2 12
#define _PW3 13
#define _PW4 14
#define _PW5 15
#define _PW6 16
#define _PW7 17

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* QWERTY (_BL)
	 * .--------------------------------------------------------------------------------------------------------------------------------------.
	 * | ESC    | `      | 1      | 2      | 3      | 4      | %     |  6     | 7      | 8      | 9      | 0      | -       | =    | BACKSP   |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
	 * | TAB    | Q      | W      | E      | R      | T      | Y     | U      | I      | O      | P      | {      | }      | \     | Del      |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
	 * | CAP LK | A      | S      | D      | F      | G      | H     | J      | K      | L      | ;      | '      | ENTER  | ENTER | NEXTFN   |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
	 * | LSHIFT | Z      | X      | C      | V      | B      | N     | M      | ,      | .      | /      | \      | RSHIFT| UP     | _BL      |
	 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
	 * |  LCTRL | _FN    | LCODE  | LALT   | SPACE  | SPACE  | SPACE | SPACE  | RALT   | _PW    | RCODE  | RCTRL  | LEFT  | DOWN   | RIGHT    |
	 * '--------------------------------------------------------------------------------------------------------------------------------------'
	 */


	/* DVORAK (_DK)
	 * .--------------------------------------------------------------------------------------------------------------------------------------.
	 * | ESC    | `      | 1      | 2      | 3      | 4      | %      | 6      | 7      | 8      | 9      | 0      | -      | =     | BACKSP  |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
	 * | TAB    | '      | ,      | .      | P      | Y      | F      | G      | C      | R      | L      | /      | =      | \     | Del     |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
	 * | CAP LK | A      | O      | E      | U      | I      | D      | H      | T      | N      | S      | -      | ENTER  | ENTER | NEXTFN  |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
	 * | LSHIFT | LSHIFT | ;      | Q      | J      | K      | X      | B      | M      | W      | V      | Z      | RSHIFT | UP    | _BL     |
	 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
	 * |  LCTRL | _FN    | LCODE  | LALT   | SPACE  | SPACE  | SPACE  | SPACE  | RALT   | _PW    | RCODE  | RCTRL  | LEFT   | DOWN  | RIGHT   |
	 * '--------------------------------------------------------------------------------------------------------------------------------------'
	 */


	/* FUNCTION (_FN)
	 * .--------------------------------------------------------------------------------------------------------------------------------------.
	 * | ESC    | `      | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12   | BACKSP  |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
	 * | TAB    | Mute   | BRTNS  | .      | F13    | F14    | F15    | F16    | F17    | F18    | F19    | F20    | F21    | F22   | Del     |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
	 * | CAP LK | Vol-   | BRTNS- | Vol+   | Find   | <null> | <null> | <null> | PSCR   | SCRLCK | PAUSEB | INT3   | ENTER  | ENTER | NEXTFN  |
	 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
	 * | LSHIFT | LSHIFT | ;      | UNDO   | CUT    | COPY   | PASTE  | <null> | <null> | <null> | <null> | <null> | Insert | PGUP  | _BL     |
	 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
	 * |  LCTRL | _FN    | LCODE  | LALT   | SPACE  | SPACE  | SPACE  | SPACE  | RALT   | _PW    | RCODE  | RCTRL  | Home   | PGDW  | End     |
	 * '--------------------------------------------------------------------------------------------------------------------------------------'
	 */



    [_BL] = LAYOUT_ortho_5x15( /* MOUSE */
	KC_GESC,	KC_GRAVE,	KC_1,		KC_2,		KC_3,	KC_4,	KC_5,	KC_6,	KC_7,		KC_8,		KC_9,		KC_0,		KC_MINS,	KC_EQL,		KC_BSPC, \
	KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,		KC_O,		KC_P,		KC_LBRACKET,	KC_RBRACKET,	KC_BSLASH,	KC_DELETE, \
	KC_CAPS,	KC_A,		KC_S,		KC_D,		KC_F,	KC_G, 	KC_H,   KC_J,	KC_K,		KC_L,		KC_SCLN,	KC_QUOT,	KC_ENTER,	KC_ENTER,       DF(_MS), \
	KC_LSFT,	KC_LSFT,	KC_Z,		KC_X,		KC_C,	KC_V,	KC_B, 	KC_N,   KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,	KC_RSFT,	KC_UP,		DF(_BL), \
	KC_LCTL,	MO(_FN),	KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	MO(_PW),	KC_RGUI,	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT \
    ),

    [_MS] = LAYOUT_ortho_5x15( // QWERTY */ /*
	KC_GESC,	KC_NO,		KC_MS_ACCEL0,	KC_MS_ACCEL1,	KC_MS_ACCEL2,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_BSPC, \
	KC_TAB,		KC_MS_BTN1,	KC_MS_UP,	KC_MS_BTN2,	KC_MS_BTN3,KC_MS_BTN4,KC_MS_BTN5,KC_U,	KC_MS_WH_UP,KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_DELETE, \
	KC_CAPS,	KC_MS_LEFT,	KC_MS_DOWN,	KC_MS_RIGHT,	KC_NO,	KC_NO, 	KC_NO,   KC_MS_WH_LEFT,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,KC_SCLN,	KC_NO,		KC_ENTER,	KC_ENTER,       DF(_DK), \
	KC_LSFT,	KC_LSFT,	KC_NO,		KC_NO,		KC_NO,	KC_NO,	KC_NO, 	KC_NO,  KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_UP,		DF(_BL), \
	KC_LCTL,	MO(_FN),	KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	MO(_PW),	KC_RGUI,	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT \
    ),

    [_DK] = LAYOUT_ortho_5x15( /* DVORAK */
	KC_GESC,	KC_GRAVE,	KC_1,		KC_2,		KC_3,	KC_4,	KC_5,	KC_6,	KC_7,		KC_8,		KC_9,		KC_0,		KC_LCBR,	KC_RCBR,	KC_BSPC, \
	KC_TAB,		KC_QUOT,	KC_COMM,	KC_DOT,		KC_P,	KC_Y,	KC_F,	KC_G,	KC_C,		KC_R,		KC_L,		KC_SLSH,	KC_EQL,		KC_BSLASH,	KC_DELETE, \
	KC_CAPS,	KC_A,		KC_O,		KC_E,		KC_U,	KC_I, 	KC_D,   KC_H,	KC_T,		KC_N,		KC_S,		KC_MINS,	KC_ENTER,	KC_ENTER,       DF(_LD), \
	KC_LSFT,	KC_LSFT,	KC_SCLN,	KC_Q,		KC_J,	KC_K,	KC_X, 	KC_B,   KC_M,		KC_W,		KC_V,		KC_Z,		KC_RSFT,	KC_UP,		DF(_BL), \
	KC_LCTL,	MO(_FN),	KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	DF(_BL),	KC_RGUI,	KC_RCTL,	KC_LEFT,	KC_DOWN,	KC_RGHT \
    ),

    [_LD] = LAYOUT_ortho_5x15( /* RGB */
	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, \
	KC_NO,		RGB_HUI,	RGB_SAI,	RGB_VAI,	KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, \
	RGB_TOG,	RGB_HUD,	RGB_SAD,	RGB_VAD,	KC_NO,	KC_NO, 	KC_NO,  KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_ENTER,	KC_ENTER,       DF(_BL), \
	KC_LSFT,	KC_LSFT,RGB_MODE_PLAIN,	RGB_MODE_BREATHE,RGB_MODE_RAINBOW,RGB_MODE_SWIRL,RGB_MODE_SNAKE,RGB_MODE_KNIGHT,RGB_MODE_XMAS,RGB_MODE_GRADIENT,RGB_MODE_RGBTEST,KC_NO,KC_NO,RGB_MODE_FORWARD, DF(_BL), \
	KC_LCTL,	MO(_FN),	KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	DF(_BL),	KC_RGUI,	KC_RCTL,	KC_NO,	RGB_MODE_REVERSE,	KC_NO \
    ),


    [_FN] = LAYOUT_ortho_5x15( /* FUNCTIONAL */
	KC_GESC,	KC_GRAVE,	KC_F1,		KC_F2,		KC_F3,	KC_F4,	KC_F5,	KC_F6,	KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_BSPC, \
	KC_TAB,		KC_AUDIO_MUTE,	KC_BRIGHTNESS_UP,KC_E,		KC_F13,	KC_F14,	KC_F15,	KC_F16,	KC_F17,		KC_F18,		KC_F19,		KC_F20,		KC_F21,		KC_F22,		KC_DELETE, \
	KC_CAPS,	KC_AUDIO_VOL_DOWN,KC_BRIGHTNESS_DOWN,KC_AUDIO_VOL_UP,KC_FIND,KC_NO,KC_NO,KC_NO,	KC_PSCREEN,	KC_SCROLLLOCK,	KC_PAUSE,	KC_INT3,	KC_ENTER,	KC_ENTER,       KC_NO, \
	KC_LSFT,	KC_LSFT,	KC_UNDO,	KC_CUT,		KC_COPY,KC_PASTE,KC_NO,	KC_NO,  KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_INSERT,	KC_PGUP,	KC_NO, \
	KC_LCTL,	KC_TRNS,	KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	KC_TRNS,	KC_RGUI,	KC_RCTL,	KC_HOME,	KC_PGDOWN,	KC_END \
    ),

    [_PW] = LAYOUT_ortho_5x15( /* POWER */
	RESET,		KC_NO,		KC_NO,		KC_NO,		KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_BSPC, \
	DF(_PW_WAIT),	KC_NO,		KC_NO,		KC_NO,		KC_NO,	KC_NO,	KC_NO,	KC_NO,	KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO,		UNICODE(0x2630),KC_DELETE, \
	KC_CAPS,	KC_NO,		KC_SYSTEM_POWER,KC_NO,		KC_SYSTEM_SLEEP,KC_NO,KC_NO,KC_NO,KC_NO,	KC_NO,		UNICODE(0x037E),UNICODE(0x2622),KC_NO,		KC_NO,		DF(_PW_WAIT), \
	KC_LSFT,	KC_LSFT,	KC_NO,		KC_NO,		KC_SYSTEM_WAKE,KC_NO,KC_NO,KC_NO,KC_NO,		KC_NO,		KC_NO,		UNICODE(0x037E),KC_RSFT,	UNICODE(0x1403),DF(_PW_WAIT), \
	KC_LCTL,	KC_NO,		KC_LGUI,	KC_LALT,	KC_SPC,	KC_SPC,	KC_SPC,	KC_SPC,	KC_RALT,	KC_TRNS,	KC_NO,	KC_RCTL,	UNICODE(0x140A),UNICODE(0x1401),UNICODE(0x1405) \
    ),



    [_PW_RST] = LAYOUT_ortho_5x15( 
	RESET,	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_TRNS,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO \
    ),

    [_PW_WAIT] = LAYOUT_ortho_5x15( 
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
	KC_NO,  KC_NO,  DF(_PW1),  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  MO(_PW_RST),DF(_PW1),  KC_NO,  KC_NO,  KC_NO,  KC_NO \
    ),


    [_PW1] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW2),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW2] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW3),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW3] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW4),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW4] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW5),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW5] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW6),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW6] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW7),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PW7] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PWE1), DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_NO,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),



    [_PWE1] = LAYOUT_ortho_5x15(
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PWE2), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PWE2), \
	DF(_PW1),  DF(_PW1),  MO(_PWE2), DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  MO(_PWE2),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    ),

    [_PWE2] = LAYOUT_ortho_5x15( 
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1), \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_BL),  DF(_BL),  KC_TRNS, \
	DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  KC_TRNS, \
	DF(_PW1),  DF(_PW1),  KC_TRNS,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1),  MO(_PW_RST),  KC_TRNS,  DF(_PW1),  DF(_PW1),  DF(_PW1),  DF(_PW1) \
    )

};
