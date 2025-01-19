/*
Copyright 2025 @DreaM117er

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "quantum.h"

#ifdef RGBLIGHT_ENABLE

  // Logical Layout
  // Columns
  // Left
  //  0  1  2  3  4  5
  //                    ROWS
  // 24 17 16 09 08 01  0
  // 23 18 15 10 07 02  1
  // 22 19 14 11 06 03  2
  // 21 20 13 12 05 04  3
  //
// Columns
  // Right
  //  0  1  2  3  4  5
  //                    ROWS
  // 48 41 40 33 32 25  0
  // 47 42 39 34 31 26  1
  // 46 43 38 35 30 27  2
  // 45 44 37 36 29 28  3
  //
  // Physical Layout
  // Columns
  //  0  1  2  3  4  5  6  7  8  9 10 11 12 13
  //                                            ROWS
  // 24 17 16 09 08 01       25 32 33 40 41 48  0
  // 23 18 15 10 07 02       26 31 34 39 42 47  1
  // 22 19 14 11 06 03       27 30 35 38 43 46  2
  // 21 20 13 12 05 04       28 29 36 37 44 45  3

led_config_t g_led_config = {
{
    { 23, 16, 15,  8,  7,  0 },
    { 22, 17, 14,  9,  6,  1 },
    { 21, 18, 13, 10,  5,  2 },
    { 20, 19, 12, 11,  4,  3 },
    { 47, 40, 39, 32, 31, 24 },
    { 46, 41, 38, 33, 30, 25 },
    { 45, 42, 37, 34, 29, 26 },
    { 44, 43, 36, 35, 28, 27 }
},
{
    { 68,  0 }, { 68, 21 }, { 68, 43 }, { 68, 64 },
    { 54, 64 }, { 54, 43 }, { 54, 21 }, { 54,  0 },
    { 41,  0 }, { 41, 21 }, { 41, 43 }, { 41, 64 },
    { 27, 64 }, { 27, 43 }, { 27, 21 }, { 27,  0 },
    { 14,  0 }, { 14, 21 }, { 14, 43 }, { 14, 64 },
    {  0, 64 }, {  0, 43 }, {  0, 21 }, {  0,  0 },
    { 156,  0 }, { 156, 21 }, { 156, 43 }, { 156, 64 },
    { 170, 64 }, { 170, 43 }, { 170, 21 }, { 170,  0 },
    { 183,  0 }, { 183, 21 }, { 183, 43 }, { 183, 64 },
    { 197, 64 }, { 197, 43 }, { 197, 21 }, { 197,  0 },
    { 210,  0 }, { 210, 21 }, { 210, 43 }, { 210, 64 },
    { 224, 64 }, { 224, 43 }, { 224, 21 }, { 224,  0 }
},
{
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1
}
};
#endif
