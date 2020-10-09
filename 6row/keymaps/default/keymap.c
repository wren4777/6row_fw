/* Copyright 2020 wren4777
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_6row_ansi(
      KC_LSFT,    KC_TAB,    KC_Y,    KC_F3,    KC_T,    KC_F7,    KC_LBRC,    KC_RBRC,                      KC_LGUI,                      KC_BSPC,                               KC_CAPS,        //Matrix border
                             KC_N,              KC_B,              KC_SLSH,                         KC_RALT, KC_RIGHT,   KC_LEFT, KC_DOWN, KC_SPC,     KC_PGDN,                                   //Matrix border
      KC_RSFT,    KC_Z,      KC_M,    KC_C,     KC_V,    KC_DOT,               KC_COMM,    KC_RCTL,                                        KC_ENT,     PC_PGUP,                   KC_X,           //Matrix border
                  KC_A,      KC_J,    KC_D,     KC_F,    KC_L,     KC_SCLN,    KC_K,                                     MO(1),            KC_BSLS,    KC_MENU,                   KC_S,           //Matrix border
                  KC_1,      KC_7,    KC_3,     KC_4,    KC_9,     KC_0,       KC_8,                         KC_F12,     KC_DEL,  KC_F11,  KC_F10,     KC_HOME,                   KC_2,           //Matrix border
                  KC_Q,      KC_U,    KC_E,     KC_R,    KC_O,     KC_P,       KC_I,                                                                                              KC_W,           //Matrix border
                  KC_GRAVE,  KC_6,    KC_F2,    KC_5,    KC_F8,    KC_MINS,    KC_EQL,     KC_LCTL,                               KC_INS,  KC_F9,      KC_END,                    KC_F1,          //Matrix border
                  KC_ESC,    KC_H,    KC_F4,    KC_G,                          KC_F6,               KC_LALT,             KC_UP,            KC_F5,                                                 //Matrix border
                                                                                                                                                                KC_BTN1, KC_BTN3,             KC_BTN2), //Matrix border

  [1] = LAYOUT_6row_ansi(
      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,                      KC_TRNS,                      KC_TRNS,                               KC_TRNS,        //Matrix border
                             KC_TRNS,           KC_TRNS,           KC_TRNS,                         KC_TRNS, KC_MNXT,    KC_MPRV, KC_MPLY, KC_TRNS,    KC_TRNS,                                   //Matrix border
      KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,              KC_TRNS,    KC_TRNS,                                        KC_TRNS,    KC_TRNS,                   KC_TRNS,        //Matrix border
                  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,                                  KC_TRNS,          KC_TRNS,    KC_TRNS,                   KC_TRNS,        //Matrix border
                  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,                      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_BRID,                   KC_TRNS,        //Matrix border
                  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,                                                                                           KC_TRNS,        //Matrix border 
                  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_SCLK, KC_TRNS,    KC_BRIU,                   KC_SYSREQ,      //Matrix border
                  KC_PAUS,   KC_TRNS, KC_SLEP,  KC_TRNS,                       KC_PSCR,             KC_TRNS,             KC_MSTP,          KC_TRNS,                                               //Matrix border
                                                                                                                                                                KC_TRNS, KC_TRNS,             KC_TRNS), //Matrix border
};
