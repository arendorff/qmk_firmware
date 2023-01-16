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
#include "keymap_german.h"

enum layer_names {
    _L1,
    _L2,
    _L3,
    _L4,
    _L5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* OLD
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | CAP LK | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | FN     | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */

    /* NEW
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | ß      | DE_ACUT| DEL    | BACKSP
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | Z      | U      | I      | O      | P      | DE_UDIA| VOL-   | MUTE   | VOL+   |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | L3     | A      | S      | D      | F      | G      | H      | J      | K      | L      | DE_ODIA| DE_ADIA| KC_PGUP| KC_UP  | KC_PDN
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Y      | X      | C      | V      | B      | N      | M      | DE_COMM| DE_DOT | DE_MINS| KC_RSFT| KC_LEFT| KC_DOWN| KC_RGHT
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LCTRL  | LALT   | LGUI   | BACKSP | L2     | ENTER  | SPACE  | ESC    |        |        |        |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */

    [_L1] = LAYOUT_ortho_5x15(
        KC_ESC,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,   DE_ACUT, KC_DEL,  KC_BSPC,
        KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, KC_VOLD, KC_MUTE, KC_VOLU,
        MO(_L3), DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, KC_PGUP, KC_UP,   KC_PGDN,
        KC_LSFT, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT,
        KC_LCTL, KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, MO(_L2), KC_ENT,  KC_SPC,  KC_ESC,  KC_RCTL, KC_RGUI, KC_RALT, KC_RALT, TG(_L4), MO(_L5)
    ),

    [_L2] = LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
        _______, _______, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC, DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, DE_SS,   _______, _______, _______,
        KC_TRNS, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT,   _______, _______, _______,
        _______, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, _______, _______, _______, KC_TRNS, KC_TRNS
    ),

/* [1] = LAYOUT_planck_grid( */
/*      _______, _______, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC, DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, DE_SS   , */
/*      KC_TAB,  DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT   , */
/*      _______, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_ACUT, DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______ , */
/*      _______, _______, _______, MO(3),   _______, _______, _______, _______, MO(3),   _______, _______, _______ */
/* ), */

    [_L3] = LAYOUT_ortho_5x15(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, _______, DE_7,    DE_8,    DE_9,    _______, _______, _______, _______, _______,
        KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, DE_4,    DE_5,    DE_6,    _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, DE_1,    DE_2,    DE_3,    _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, _______, _______, _______, KC_TRNS, KC_TRNS
    ),

/* [2] = LAYOUT_planck_grid( */
/*      XXXXXXX, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, XXXXXXX, DE_7,    DE_8,  DE_9,    XXXXXXX, KC_INS  , */
/*      KC_TAB,  KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  XXXXXXX, DE_4,    DE_5,  DE_6,    DE_DOT,  KC_ENT  , */
/*      _______, XXXXXXX, KC_TAB,  XXXXXXX, KC_ENT,  XXXXXXX, DE_0,    DE_1,    DE_2,  DE_3,    DE_COMM, _______ , */
/*      _______, _______, _______, _______, MO(3), _______, _______, MO(3), _______,  _______, _______, _______ */
/* ), */

    [_L4] = LAYOUT_ortho_5x15(
        KC_ESC,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    DE_SS,   DE_ACUT, KC_DEL,  KC_BSPC,
        KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA, KC_VOLD, KC_MUTE, KC_VOLU,
        KC_TRNS, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA, KC_PGUP, KC_UP,   KC_PGDN,
        KC_LSFT, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT,
        KC_LCTL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_ENT,  KC_SPC,  KC_ESC,  KC_RCTL, KC_RGUI, KC_RALT, KC_RALT, KC_TRNS, KC_TRNS
    ),

    [_L5] = LAYOUT_ortho_5x15(
        DE_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, BL_TOGG, QK_BOOT,
        _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, _______, _______, _______, KC_TRNS, KC_TRNS
    ),

    /* FUNCTION
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * | SELECT | CALC   | MYCOMP | MAIL   | RGB HD | RGB HI | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PAUSE  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * | PREV   | PLAY   | NEXT   | STOP   | RGB SD | RGB SI | P4     | P5     | P6     | +      |        | QK_BOOT  |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * | VOL-   | MUTE   | VOL+   | APP    | RGB VD | RGB VI | P1     | P2     | P3     | PENT   |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
     * |        |        | RGB TG | FN     | RGB RMD| RGB MD | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */

    /* [_FN] = LAYOUT_ortho_5x15( /1* FUNCTION *1/ */
    /*     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NUM,  KC_SLSH, KC_ASTR, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, */
    /*     KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, RGB_HUD, RGB_HUI, KC_P7,   KC_P8,   KC_P9,   KC_MINS, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, */
    /*     KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, RGB_SAD, RGB_SAI, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, _______, QK_BOOT,   _______, _______, _______, */
    /*     KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  RGB_VAD, RGB_VAI, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, _______, _______, _______, _______, */
    /*     _______, _______, RGB_TOG, MO(_FN), RGB_RMOD,RGB_MOD, KC_P0,   _______, KC_PDOT, KC_PENT, KC_PENT, MO(_FN), _______, _______, _______ */
    /* ) */

};
