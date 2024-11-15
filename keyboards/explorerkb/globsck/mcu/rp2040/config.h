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

/* Pointing Device Setting */
#define POINTING_DEVICE_CS_PIN GP1

/* PMW3389 Setting */
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define PMW33XX_CPI 800

/* I2C or SPI Setting */
#define SPI_SCK_PIN GP2
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP4

/* Mousekey Setting */
#define ENCODERS_PAD_A { GP29 }
#define ENCODERS_PAD_B { GP28 }
#define ENCODER_RESOLUTIONS { 2 }
#define TAP_CODE_DELAY 10
#define MOUSEKEY_WHEEL_INTERVAL 80

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
