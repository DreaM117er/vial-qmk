/*
 * Copyright 2025 @DreaM117er
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

#define DEBOUNCE 5

/* Pointing Device Setting*/
#define AZOTEQ_IQS5XX_TPS65
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE 1
#define AZOTEQ_IQS5XX_HOLD_TIME 300
#define AZOTEQ_IQS5XX_SWIPE_INITIAL_TIME 150
#define AZOTEQ_IQS5XX_SWIPE_INITIAL_DISTANCE 300

/* I2C or SPI Setting*/
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP15
#define I2C1_SDA_PIN GP14

/* Status LED Setting*/
#define USB_LED_PIN GP2

/* Encoders*/
#define ENCODER_A_PINS { GP28, GP3 }
#define ENCODER_B_PINS { GP27, GP1 }
#define ENCODER_RESOLUTION 4