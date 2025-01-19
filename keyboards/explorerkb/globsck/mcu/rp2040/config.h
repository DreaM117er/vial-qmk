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

/* PMW3389 Setting */
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define CPI_PIN GP29
#define PMW33XX_CPI 1600

/* I2C or SPI Setting */
#define POINTING_DEVICE_CS_PIN GP1
#define POINTING_DEVICE_ROTATION_180
#define SPI_SCK_PIN GP2
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP4

/* Mousekey Setting */
#define ENCODERS_PAD_A { GP8 }
#define ENCODERS_PAD_B { GP9 }
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODER_DEFAULT_POS 0x3
#define ENCODER_MAP_KEY_DELAY 0

/* RGB Setting */
#define WS2812_SPI_USE_CIRCULAR_BUFFER
#define WS2812_DI_PIN GP0
#define RGB_MATRIX_LED_COUNT 3
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define DRIVER_LED_TOTAL RGBLED_NUM

/* RGB Effects */
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
