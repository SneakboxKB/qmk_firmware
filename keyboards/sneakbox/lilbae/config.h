/* Copyright 2022 Bryan Ong (@SneakboxKB)
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

#define VENDOR_ID       0x5342
#define PRODUCT_ID      0x0012
#define DEVICE_VER      0x0001

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B4}
#define MATRIX_COL_PINS { B7, D6, D5, D4}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

