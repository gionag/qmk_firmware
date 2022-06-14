// Copyright 2022 gionag (@gionag)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define CH_CFG_ST_RESOLUTION 16

#define LED_PINS { B9, B8, B7 }

#define USB_MAX_POWER_CONSUMPTION 100
#define DEBOUNCE 3
#define MATRIX_HAS_GHOST
#define TAPPING_TERM 140

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
