#pragma once
#include "config_common.h"

/* LED Pins for pre v0.02 */
//#define MSTAR_LED_PINS { C13, B8, B7 }

// M122 '7000, G52xxx Lexmark Variants
#define MSTAR_LED_PINS { B9, B8, B7 }



/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0xB155
#define DEVICE_VER   0x0100
#define MANUFACTURER L1 Wendell
#define PRODUCT      M-Star Classic
#define DESCRIPTION  USB controller for Model M keyboards


#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */

//#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

//#define BACKLIGHT_PIN B7
//#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_BREATHING

// M-Star Classic should use absolute maximum 52mA when all LEDs are on and it is in
// Some devices limit HID devices to <= 100 ma
#define USB_MAX_POWER_CONSUMPTION 100

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE


/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


/* TODO? Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0
