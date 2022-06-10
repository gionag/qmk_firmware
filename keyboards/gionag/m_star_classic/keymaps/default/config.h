#pragma once

#define COMBO_COUNT 1

// M101 16+12 and M101 16+8+4
#define MSTAR_LED_PINS { B9, B8, B7 }

#define MSTAR_STATUS_LED C13


/* key matrix size */

#define MATRIX_ROWS 8
#define MATRIX_COLS 16


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 *
 */
 
// PCB Versions

// BODGED v0.01  OK (offset 4 pins on 2nd row) 
//#define MATRIX_ROW_PINS { B8, B7, C14, C15, A1, A2, A0, B3 } 

// v0.02 
#define MATRIX_ROW_PINS { B6, B5, B4, A15, B3, A0, A2, A1 } 

// v0.01 OK v0.02 OK ---- 16 Cols
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A9, A10, B11, B10, B1, B0, A7, A6, A5, A4, A3 }

// v0.02 ---- 20 Cols (m122 and the like)
//#define MATRIX_COL_PINS { C15, C14, C13, A14, B12, B13, B14, B15, A8, A9, A10, B11, B10, B1, B0, A7, A6, A5, A4, A3 }

