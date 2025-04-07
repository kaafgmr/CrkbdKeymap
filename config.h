#pragma once
/* Select hand configuration */
//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS


#ifdef OLED_ENABLE
#define OLED_TIMEOUT 5000

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE

#endif //OLED_ENABLE

#ifdef RGB_MATRIX_ENABLE
// setup effects
#define ENABLE_RGB_MATRIX_SOLID_COLOR

//setup rgb matrix
#define RGB_MATRIX_LED_COUNT 54
#define RGB_MATRIX_SPLIT { 27, 27 }
#define SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5
#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_LED_FLUSH_LIMIT 32
#define RGB_MATRIX_DEFAULT_ON true
#define RGB_MATRIX_DEFAULT_HUE 127
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 100

#endif //RGB_MATRIX_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
