#pragma once
#define MSTAR_STATUS_LED A14 // SWCLK

// LED behavior is.. user defined? as these have no built-in LEDs...

#define COMBO_COUNT 1
/* key matrix size */
#define MATRIX_ROWS 8
//#define MATRIX_COLS 16

// M122 
#define MATRIX_COLS 20 

/*
 * Keyboard Matrix Assignments
 *
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 *
 */
 

// PCB versions
// BODGED v0.01  OK (offset 4 pins on 2nd row) 
//#define MATRIX_ROW_PINS { B8, B7, C14, C15, A1, A2, A0, B3 } 

// v0.02 
#define MATRIX_ROW_PINS { B6, B5, B4, A15, B3, A0, A2, A1 } 


// v0.01 OK 
//#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A9, A10, B11, B10, B1, B0, A7, A6, A5, A4, A3 }

// v0.02
#define MATRIX_COL_PINS { C15, C14, C13, A13, B12, B13, B14, B15, A8, A9, A10, B11, B10, B1, B0, A7, A6, A5, A4, A3 }
