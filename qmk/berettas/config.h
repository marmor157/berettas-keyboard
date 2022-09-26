// Copyright 2022 Mariusz Morawski (@marmor157)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

#define DIRECT_PINS \
    { \
        {F5, F4, B0, D3, D2, B6 }, \
        {F0, C7, B7, B4, D7, D4 }, \
        {B2, F1, D5, B5, E6, C6 }, \
        { NO_PIN, NO_PIN, B3, B1, F7, F6 }\
    }

#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
// #define EE_HANDS
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define SPLIT_USB_DETECT

#define DIODE_DIRECTION ROW2COL
#define RGB_DI_PIN D0
#ifdef RGBLIGHT_ENABLE
    #define RGBLED_NUM 22 // Number of LEDs

    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_DEFAULT_VAL 100
#endif
#define TAPPING_TERM 300
#define TAPPING_TOGGLE 1
#define IGNORE_MOD_TAP_INTERRUPT