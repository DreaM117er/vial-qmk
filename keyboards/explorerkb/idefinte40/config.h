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

/* USB & Communidcate Setting*/
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define MASTER_RIGHT

/* Pointing Device Setting*/
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16
#define POINTING_DEVICE_CS_PIN GP17
#define I2C_DRIVER I2CD0
#define I2C0_SCL_PIN GP13
#define I2C0_SDA_PIN GP12
//#define I2C_DRIVER I2CD1
//#define I2C1_SCL_PIN GP15
//#define I2C1_SDA_PIN GP14
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

/* Azoteq TPS43 Setting*/
#define AZOTEQ_IQS5XX_TPS65
#define AZOTEQ_IQS5XX_PRESS_AND_HOLD_ENABLE 1
#define AZOTEQ_IQS5XX_HOLD_TIME 300
#define AZOTEQ_IQS5XX_SWIPE_INITIAL_TIME 150
#define AZOTEQ_IQS5XX_SWIPE_INITIAL_DISTANCE 300
#define SCROLL_SCALE_PERCENT 5

/* Cirque TM040040 Setting*/
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_1X
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_RELATIVE_MODE
//#define CIRQUE_PINNACLE_ADDR 0x2A
#define CIRQUE_PINNACLE_X_LOWER 127
#define CIRQUE_PINNACLE_X_UPPER 1919
#define CIRQUE_PINNACLE_Y_LOWER 63
#define CIRQUE_PINNACLE_Y_UPPER 1417
#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE

/* LED Setting*/
#define STATE_LED_PIN GP25
#define SLAVE_LED_PIN GP26
#define NUM_LED_PIN GP22
#define CAPS_LED_PIN GP21
#define SCROLL_LED_PIN GP20 