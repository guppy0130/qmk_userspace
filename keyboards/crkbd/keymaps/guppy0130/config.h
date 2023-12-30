/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

#define MASTER_LEFT

#ifdef OLED_ENABLE
#   define SPLIT_OLED_ENABLE
#endif

#ifdef WPM_ENABLE
#   define SPLIT_WPM_ENABLE
#endif

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 140

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES
#   define RGB_DISABLE_WHEN_USB_SUSPENDED
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#   define RGB_MATRIX_HUE_STEP 8
#   define RGB_MATRIX_SAT_STEP 8
#   define RGB_MATRIX_VAL_STEP 8
#   define RGB_MATRIX_SPD_STEP 10
#   define ENABLE_RGB_MATRIX_SOLID_COLOR
#endif
