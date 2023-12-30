#pragma once

#define MASTER_LEFT // Left side is the master
#define SPLIT_LED_STATE_ENABLE
#define OLED_UPDATE_INTERVAL 10

#ifdef RGB_MATRIX_ENABLE
// Configure RGB Matrix
#    undef RGB_MATRIX_MAXIMUM_BRIGHTNESS // from lulu config.h
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    define RGB_MATRIX_KEYPRESSES // enable keypress effects
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_STARTUP_HUE 10
#    define RGB_MATRIX_STARTUP_SAT 255
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
// Disable RGB Matrix effects (from lulu/config.h)
#    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_BREATHING
#    undef ENABLE_RGB_MATRIX_BAND_SAT
#    undef ENABLE_RGB_MATRIX_BAND_VAL
// Enable RGB Matrix effects
#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_COLOR
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#endif
