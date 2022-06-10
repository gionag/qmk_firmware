/* 

 TODO: Lots...


*/ 



#include QMK_KEYBOARD_H
/*
#define LAYOUT2021SSK( \
    K5A,      K5B, K5C, K5D, K5E,  K5F, K5G, K5H, K5I,  K5J, K5K, K5L, K5M,      K5N, K5O, K5P, \
    \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O,   K4P, K4Q, K4R, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,        K3O, K3P, K3Q, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,                  \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1O, K0P, K1P,             K1M,      \
    K0A, K0B, K0C,                K0D,                K0E, K0F, K0G, K0H,        K0I, K0J, K1N  \
) \
*/

// For the SSK's "numeric keypad" layer
enum custom_keycodes {
    SSKCROLL = SAFE_RANGE
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUTMINIM( 
    /* 0: qwerty */
    KC_ESC,     KC_F1,  KC_F2,   KC_F3,   KC_F4,        KC_F5,   KC_F6,   KC_F7,   KC_F8,           KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, TG(1), KC_PAUS,
    KC_GRV,         KC_1,    KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO, KC_BSPC,         KC_INS,  KC_HOME, KC_PGUP, 
    KC_TAB,         KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,                KC_DEL,  KC_END,  KC_PGDN, 
    KC_CAPS,        KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,                                
    KC_LSFT, KC_SLSH, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO, KC_RSFT,                                   KC_UP,              
    KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                          KC_RALT, KC_RGUI, KC_APPLICATION, LT(1, KC_RCTL),                         KC_LEFT, KC_DOWN, KC_RGHT 
          ),
  [1] = LAYOUTMINIM( 
    /* 1: numlock */
    KC_ESC,     KC_F1,  KC_F2,   KC_F3,   KC_F4,        KC_F5,   KC_F6,   KC_F7,   KC_F8,           KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_TRNS, KC_TRNS, KC_TRNS,
    KC_GRV,         KC_1,    KC_2,   KC_3,    KC_4,    KC_5,    KC_6,    KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_0,    KC_KP_MINUS, KC_KP_PLUS,  KC_NO, KC_BSPC,         KC_INS,  KC_HOME, KC_PGUP, 
    KC_TAB,         KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,    KC_Y,    KC_KP_4,    KC_KP_5,    KC_KP_6,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,                KC_DEL,  KC_END,  KC_PGDN, 
    KC_CAPS,        KC_A,    KC_S,   KC_D,    KC_F,    KC_G,    KC_H,    KC_KP_1,    KC_KP_2,    KC_KP_3,    KC_KP_ASTERISK, KC_QUOT, KC_NUHS, KC_ENT,                                
    KC_TRNS, KC_SLSH, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_KP_0,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO, KC_TRNS,                                   KC_UP,              
    KC_LCTL, KC_LGUI, KC_LALT,                KC_SPC,                          KC_RALT, KC_RGUI, KC_APPLICATION, LT(1, KC_RCTL),                         KC_LEFT, KC_DOWN, KC_RGHT 
          ),
    /* 2: media keys */

 };

void keyboard_post_init_user(void) {
  
}


uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

// This is probably incomplete -- shift layer ith numlock on shoul ddo home/pageup/end/etc
    mod_state = get_mods();
      switch(keycode) {
          case TG(1): 
          case KC_SLCK:
            { 
                
                if (mod_state & MOD_MASK_SHIFT ) {
                

                    // Key Down
                    if(record->event.pressed) {
                      
                      del_mods(MOD_MASK_SHIFT);
                      register_code(KC_NUMLOCK);
                      //unregister_code(KC_SLCK);
                      // toggle numlock layer 
                      // TG(1); // < Results in error in macro expansion
                      // Can use TG(1) in the layout in place of KC_SLCK and it works though 
                      set_mods(mod_state);

                    // Key Up 
                    } else {
                
                      unregister_code(KC_NUMLOCK);
                    }

                    
                    return true;

                } else {
                  register_code(KC_NUMLOCK);
                  
                  return true;
                }
            }
    }

  // Use hid_listen to debug: 
  // uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
      

    return true;

}



void matrix_init_user(void) {
  // This is very important to let the user know that the QMK keymap is loaded and "home" -- could help troubleshoot matrix connection issues. 
  // Each LED comes on 250ms after the other. 
    writePin(B9, false);
    wait_ms(250);
    writePin(B8, false);
    wait_ms(250);
    writePin(B7, false);
    wait_ms(250);

}



/*
void matrix_scan_user(void) {

}


bool led_update_user(led_t led_state) {
    return true;
}
*/
