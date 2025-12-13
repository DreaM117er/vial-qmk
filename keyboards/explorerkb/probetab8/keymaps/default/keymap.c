/*
 * Copyright 2025 @DreaM117er
 * Copyright 2025 74th
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
 #include "quantum.h"

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
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
        ),
    [3] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
        )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   {
            ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP),
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU)
            },
    [1] =   {
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
    [2] =   {
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
    [3] =   {
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
            },
};
#endif

int32_t scroll_amount_h = 0;
int32_t scroll_amount_v = 0;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report)
{
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