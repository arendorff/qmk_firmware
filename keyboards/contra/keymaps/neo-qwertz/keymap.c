/* Copyright 2015-2021 Jack Humbert
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

enum planck_layers {
  _L1,
  _L2,
  _L3,
  _L4,
  _L5
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_L1] = LAYOUT_ortho_4x12(
    KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    KC_P,    DE_UDIA,
    MO(_L3), DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA,
    KC_LSFT, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT,
    KC_LCTL, KC_F11,  KC_LALT, KC_LGUI, KC_BSPC, MO(_L2), KC_ENT,  KC_SPC,  KC_ESC,  DE_SS,   TG(_L4), MO(_L5)
),

[_L2] = LAYOUT_ortho_4x12(
    _______, _______, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC, DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, DE_SS,
    KC_TRNS, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT,
    _______, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, _______,
    _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, _______, _______
),

[_L3] = LAYOUT_ortho_4x12(
    _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, _______, DE_7,    DE_8,    DE_9,    _______, _______,
    KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, DE_4,    DE_5,    DE_6,    _______, _______,
    _______, _______, _______, _______, _______, _______, _______, DE_1,    DE_2,    DE_3,    _______, _______,
    _______, _______, _______, _______, _______, KC_TRNS, _______, DE_0,    _______, _______, _______, _______
),

[_L4] = LAYOUT_ortho_4x12(
    KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA,
    KC_TRNS, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA,
    KC_LSFT, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS, KC_RSFT,
    KC_LCTL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_ENT,  KC_SPC,  KC_ESC,  KC_RCTL, KC_TRNS, KC_TRNS
),

[_L5] = LAYOUT_ortho_4x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, BL_TOGG, QK_BOOT,
    _______, _______, _______, _______, _______, KC_TRNS, _______, _______, _______, _______, KC_TRNS, KC_TRNS
)

};
