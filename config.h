#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef OLED_ENABLE
#define OLED_TIMEOUT 10000

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE
#endif

#ifdef RGB_MATRIX_ENABLE
//setup rgb matrix
#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define RGB_MATRIX_DEFAULT_ON true
#define RGB_MATRIX_DEFAULT_HUE 169
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS

// setup effects
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_STARLIGHT
#endif