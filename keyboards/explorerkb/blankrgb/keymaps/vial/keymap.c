/*
 * Copyright 2024 @DreaM117er
 * Copyright 2024 QMK
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

    [0] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, MO(2),   KC_SPC, XXXXXXX, XXXXXXX, KC_RSFT,  MO(1),   XXXXXXX, XXXXXXX, XXXXXXX, TO(2)
        ),

    [1] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_TILD, XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_EQL,                    KC_F1, KC_F2, KC_F3, KC_F12, XXXXXXX, KC_DEL,
        LALT(KC_TAB), XXXXXXX, KC_DLR, KC_PERC, KC_CIRC, KC_UNDS,               KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX, KC_TRNS,
        KC_TRNS, XXXXXXX, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,                   KC_F7, KC_F8, KC_F9, KC_F10, KC_BSLS, KC_TRNS,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, XXXXXXX,   KC_SPC, XXXXXXX, XXXXXXX,  KC_RSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(3)
        ),

    [2] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ESC,  KC_PSLS, KC_1,    KC_2,    KC_3,    KC_PLUS,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_PAST, KC_4,    KC_5,    KC_6,    KC_MINS,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_ENT,
        KC_LCTL, KC_DOT,  KC_7,    KC_8,    KC_9,    KC_0,                      KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_SLSH, KC_TRNS,
        XXXXXXX, XXXXXXX, XXXXXXX, OSM(MOD_LALT), KC_LGUI, KC_ENT, XXXXXXX, XXXXXXX, KC_RSFT, KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, TO(0)
        ),

    [3] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_SCRL, KC_PAUS,                   RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_PSCR, XXXXXXX,
        KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, TO(0)
        )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   {
            //Encoder 1
            ENCODER_CCW_CW(XXXXXXX, XXXXXXX),
            //Encoder 2
            ENCODER_CCW_CW(XXXXXXX, XXXXXXX),
            },
    [1] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            },
    [2] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            },
    [3] =   {
            //Encoder 1
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            //Encoder 2
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            },
};
#endif
