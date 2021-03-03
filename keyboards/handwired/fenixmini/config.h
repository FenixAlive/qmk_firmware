#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    fenixalive
#define PRODUCT         fenixmini
#define DESCRIPTION     Corne template with only one micro pro, no led, handwired

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS {  B5, B6, B2, B3, B1, F7  }
#define UNUSED_PINS { F6, F5, F4, D3, D2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

//****ver que hace
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

//****ver que hace
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

//****ver que hace
/* key combination for command */
/*
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/
/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
#define LEADER_TIMEOUT 200
#define LEADER_PER_KEY_TIMING
#define ONESHOT_TIMEOUT 300
#define ONESHOT_TAP_TOGGLE 2

// MOUSE
#define MOUSEKEY_INTERVAL 16 
#define MOUSEKEY_MAX_SPEED 5
