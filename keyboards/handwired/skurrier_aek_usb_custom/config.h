// Copyright 2022 Julian Calaby (@SkUrRiEr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER SkUrRiEr
#define PRODUCT      Apple Extended Keyboard (USB)

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 */
//          Keyboard row:  0   1   2   3   4   5   6   7
//           Board label:  2  14   7   8   6  20  21   5
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D4, D5, D6, D7 }
//          Keyboard col:   0    1   2   3   4   5   6   7   8   9  10  11  12  13  14
//           Board label:   0    1   3   4   9  10  11  12  15  16  17  18  19  22  23
#define MATRIX_COL_PINS { B16, B17, A1, A2, C3, C4, C6, C7, C0, B0, B1, B3, B2, C1, C2 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define LED_NUM_LOCK_PIN E20 // 24
#define LED_CAPS_LOCK_PIN E21 // 25
#define LED_SCROLL_LOCK_PIN E30 // 26

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 0
