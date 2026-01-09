/*
 * Copyright 2024 @DreaM117er
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

/* Main Keyboard Hand*/
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define MASTER_RIGHT

/* Encoder EC-11 */
#define ENCODER_A_PINS { GP29 }
#define ENCODER_B_PINS { GP28 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODER_A_PINS_RIGHT { GP28 }
#define ENCODER_B_PINS_RIGHT { GP29 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }
#define TAP_CODE_DELAY 10

/* Pointing Device Setting*/
#ifdef POINTING_DEVICE_DRIVER_cirque_pinnacle_i2c
    #define CIRQUE_PINNACLE_CURVED_OVERLAY
    #define CIRQUE_PINNACLE_DIAMETER_MM 40
    #define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
    #define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
    #define CIRQUE_PINNACLE_ADDR 0x2A
    #define CIRQUE_PINNACLE_TAP_ENABLE
    #define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
    #define POINTING_DEVICE_ROTATION_270
    #define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#endif
#ifdef POINTING_DEVICE_DRIVER_azoteq_iqs5xx
    #define AZOTEQ_IQS5XX_TPS43
    #define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE 1
    #define AZOTEQ_IQS5XX_HOLD_TIME 300
    #define AZOTEQ_IQS5XX_SWIPE_INITIAL_TIME 150
    #define AZOTEQ_IQS5XX_SWIPE_INITIAL_DISTANCE 300
    #define AZOTEQ_IQS5XX_ROTATION_180
#endif
#define SCROLL_SCALE_PERCENT 5
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

/* I2C or SPI Setting*/
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
