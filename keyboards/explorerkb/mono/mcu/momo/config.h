/*
 * Copyright 2026 @DreaM117er
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

#pragma once

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Serial Communication */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_PIN_SWAP   // Physical TX/RX no swapped, must enable this option
#define SERIAL_USE_MULTI_TRANSACTION
#define MASTER_RIGHT

/* Pointing Device Setting*/
#define SCROLL_SCALE_PERCENT 5
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
// #ifdef POINTING_DEVICE_DRIVER_cirque_pinnacle_i2c //Main setup for Keyboard Mo
    #define CIRQUE_PINNACLE_CURVED_OVERLAY
    #define CIRQUE_PINNACLE_DIAMETER_MM 40
    #define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
    #define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
    #define CIRQUE_PINNACLE_X_LOWER 127
    #define CIRQUE_PINNACLE_X_UPPER 1919
    #define CIRQUE_PINNACLE_Y_LOWER 63
    #define CIRQUE_PINNACLE_Y_UPPER 1471
    #define CIRQUE_PINNACLE_TAP_ENABLE
    #define POINTING_DEVICE_ROTATION_90
    #define POINTING_DEVICE_ROTATION_90_RIGHT
    #define CIRQUE_PINNACLE_TOUCH_DEBOUNCE 200
    #define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
// #endif
/* #ifdef POINTING_DEVICE_DRIVER_azoteq_iqs5xx //Main setup for Keyboard No
    #define AZOTEQ_IQS5XX_TPS43
    #define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE 1
    #define AZOTEQ_IQS5XX_HOLD_TIME 300
    #define AZOTEQ_IQS5XX_SWIPE_INITIAL_TIME 150
    #define AZOTEQ_IQS5XX_SWIPE_INITIAL_DISTANCE 300
    #define AZOTEQ_IQS5XX_ROTATION_180
#endif
*/
/* I2C or SPI Setting*/
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* Status LED Setting*/
#define USB_LED_PIN GP5
