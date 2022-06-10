/* 

 Wendell Wilson 
 wendell at level1techs doot com
 TODO: This is a workable map. The AT 122 comes with a "Big-A$$ Enter" but the matrix has sensors in it you could reconfigure for "normal" size enter and move backslash.
 I have provided maps for those if you want ot move the springs and flappers around to accomplish that. (and have replacement keycaps that are the right shapes). 


*/ 


#include "print.h"

#include QMK_KEYBOARD_H

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // PC/3270 layout: PC legends (blue)
    [0] = LAYOUTAT122(
                          KC_F13,  KC_F14,  KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22,  KC_F23,  KC_F24,
                          KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
        KC_NO,   KC_NO,   KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_ESC,  KC_PGUP, KC_PGDN,    KC_NLCK, KC_SLCK, KC_PAST, KC_PSLS,
        KC_NO,   KC_PAUS, KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,    KC_END,  KC_INS,  KC_DEL,     KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_NO,   KC_NO,   KC_CAPS, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,             KC_UP,               KC_P4,   KC_P5,   KC_P6,   KC_PMNS,
        KC_PSCR, KC_NO,   KC_LSFT, KC_BSLS, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_RSFT,   KC_LEFT, KC_HOME, KC_RIGHT,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        MO(10),  KC_LGUI, KC_LCTL, KC_LALT,                                        KC_SPC,                            KC_RALT, KC_RCTL,                     KC_DOWN,             KC_P0,            KC_PDOT, KC_NO
    ),

};

const uint16_t PROGMEM shift_shift_combo[] = {KC_RSFT, KC_LSFT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO(shift_shift_combo, KC_CLCK)};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // FOR DEBUGGING 
   uprintf("aKL: kc: 0x%04X, row: %u,  col: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}
*/

bool led_update_user(led_t led_state) {
       
    return true;
}

