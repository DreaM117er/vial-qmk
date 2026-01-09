/*
 * Copyright 2025 @DreaM117er
 * Copyright 2025 QMK
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

void suspend_power_down_user(void)
{
    gpio_write_pin(USB_LED_PIN, 0);
};
void suspend_wakeup_user(void)
{
    gpio_write_pin(USB_LED_PIN, 1);
};
void keyboard_pre_init_user(void)
{
    gpio_set_pin_output(USB_LED_PIN);
    gpio_write_pin(USB_LED_PIN, 1);
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,               KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_QUOT,
                                MO(2),      KC_SPC,     KC_MS_BTN3, XXXXXXX,            KC_MS_BTN1, KC_MS_BTN2, KC_RSFT,    MO(1)
        ),
    [1] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_TILD,    XXXXXXX,    KC_EXLM,    KC_AT,      KC_HASH,    KC_EQL,             KC_F1,      KC_F2,      KC_F3,      KC_F12,     XXXXXXX,    KC_DEL,
        KC_LSFT,    KC_A,       KC_DLR,     KC_DLR,     KC_PERC,    KC_UNDS,            KC_F4,      KC_F5,      KC_F6,      KC_F11,     XXXXXXX,    KC_TRNS,
        KC_LCTL,    KC_Z,       KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,            KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_BSLS,    KC_TRNS,
                                KC_LGUI,    KC_TRNS,    KC_TRNS,    XXXXXXX,            KC_TRNS,    KC_TRNS,    KC_RSFT,    KC_TRNS
        ),
    [2] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        KC_ESC,     KC_PSLS,    KC_1,       KC_2,       KC_3,       KC_PLUS,            KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     XXXXXXX,    KC_BSPC,
        KC_TAB,     KC_PAST,    KC_4,       KC_4,       KC_6,       KC_MINS,            KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_TRNS,    KC_ENT,
        KC_LCTL,    KC_DOT,     KC_7,       KC_8,       KC_9,       KC_0,               KC_LBRC,    KC_RBRC,    KC_TRNS,    KC_TRNS,    KC_SLSH,    KC_TRNS,
                                KC_TRNS,    KC_ENT,     KC_TRNS,    XXXXXXX,            KC_TRNS,    KC_TRNS,    KC_RSFT,    TO(3)
        ),
    [3] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_INS,     KC_SCRL,    KC_SCRL,            RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,    KC_PSCR,    XXXXXXX,
        KC_CAPS,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            RGB_HUD,    RGB_SAD,    RGB_VAD,    RGB_SPD,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            NK_TOGG,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    XXXXXXX,    RGB_TOG,    TO(0)
        )
};
#ifdef POINTING_DEVICE_ENABLE
int32_t scroll_amount_h = 0;
int32_t scroll_amount_v = 0;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
     scroll_amount_h += -mouse_report.h * SCROLL_SCALE_PERCENT;
     scroll_amount_v += -mouse_report.v * SCROLL_SCALE_PERCENT;
     int8_t h = scroll_amount_h / 100;
     int8_t v = scroll_amount_v / 100;
     scroll_amount_h -= h*100;
     scroll_amount_v -= v*100;

     mouse_report.h = h;
     mouse_report.v = v;
     return mouse_report;
}
#endif
