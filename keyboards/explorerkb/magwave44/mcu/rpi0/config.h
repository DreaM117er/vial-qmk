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

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { GP27, GP26, GP15, GP14 }
#define MATRIX_COL_PINS \
    { GP3, GP4, GP5, GP6, GP7, GP8 }

/* Main Keyboard Hand*/
#define SPLIT_HAND_PIN GP1
#define SPLIT_HAND_PIN_LOW_IS_RIGHT

/* Encoder EC-11 */
#define ENCODERS_PAD_A { GP29 }
#define ENCODERS_PAD_B { GP28 }
#define ENCODERS_PAD_A_RIGHT { GP29 }
#define ENCODERS_PAD_B_RIGHT { GP28 }
#define ENCODER_RESOLUTION 2
#define TAP_CODE_DELAY 10
//#define ENCODER_DIRECTION_FLIP




