#include QMK_KEYBOARD_H

#include "keymap_italian.h"

/*
* CUSTOM KEYCODES
*/
enum custom_keycodes {
    MY_MAIL = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MY_MAIL:
        if (record->event.pressed) {
            SEND_STRING("michele.branchini" SS_ALGR(SS_TAP(X_SCLN)) "gmail.com");
        } else {
        }
        break;
    }
    return true;
};


/*
* COMBO STUFF
*/
enum combos {
  STMP_BLKSC_PAU,
  ONE_TWO_THREE,
  CTRL_ALT_SHIFT,
  COMBO_LENGTH
};

const uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM reset_keyb[] = {KC_PSCR, KC_SLCK, KC_PAUS, COMBO_END};
const uint16_t PROGMEM my_email[] = {IT_1, IT_2, IT_3, COMBO_END};
const uint16_t PROGMEM activate_layer1[] = {KC_LCTL, KC_LALT, KC_LSFT, COMBO_END};

combo_t key_combos[] = {
    [STMP_BLKSC_PAU] = COMBO(reset_keyb, QK_BOOTLOADER),
    [ONE_TWO_THREE] = COMBO(my_email, MY_MAIL),
    [CTRL_ALT_SHIFT] = COMBO(activate_layer1, TG(1)),
};

/*
* TAP DANCE
*/
enum {
    TD_LGUI_CAPS,
    TD_7_LCBR,
    TD_8_LBRC,
    TD_9_RBRC,
    TD_0_RCBR
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LGUI_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, KC_CAPS),    // Tap once for Lgui, twice for Caps Lock

    [TD_7_LCBR] = ACTION_TAP_DANCE_DOUBLE(IT_7, IT_LCBR),
    [TD_8_LBRC] = ACTION_TAP_DANCE_DOUBLE(IT_8, IT_LBRC),
    [TD_9_RBRC] = ACTION_TAP_DANCE_DOUBLE(IT_9, IT_RBRC),
    [TD_0_RCBR] = ACTION_TAP_DANCE_DOUBLE(IT_0, IT_RCBR)
};

/*
* LAYOUTS
*/
//const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// [0] = LAYOUT( /* Base layer */
//    KC_ESC,           KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS,
//    IT_BSLS, IT_1,    IT_2,   IT_3,    IT_4,    IT_5,    IT_6,    IT_7,    IT_8,    IT_9,    IT_0,    IT_QUOT, IT_IGRV, KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
//    KC_TAB,  IT_Q,    IT_W,   IT_E,    IT_R,    IT_T,    IT_Y,    IT_U,    IT_I,    IT_O,    IT_P,    IT_EGRV, IT_PLUS,            KC_DEL,  KC_END,  KC_PGDN,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
//    KC_LGUI, IT_A,    IT_S,   IT_D,    IT_F,    IT_G,    IT_H,    IT_J,    IT_K,    IT_L,    IT_OGRV, IT_AGRV, IT_UGRV, KC_ENT,                                 KC_P4,   KC_P5,   KC_P6,
//    KC_LSFT, IT_LABK, IT_Z,   IT_X,    IT_C,    IT_V,    IT_B,    IT_N,    IT_M,    IT_COMM, IT_DOT,  IT_MINS,          KC_RSFT,            KC_UP,              KC_P1,   KC_P2,   KC_P3,   KC_PENT,
//    KC_LCTL,          KC_LALT,                           KC_SPC,                                      KC_RALT,          KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT,   KC_P0,            KC_PDOT
//  ),
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base layer */
    KC_ESC,             KC_F1,      KC_F2,      KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                KC_PSCR, KC_SLCK, KC_PAUS,
    IT_BSLS,            IT_1,       IT_2,       IT_3,    IT_4,    IT_5,    IT_6,    IT_7,    IT_8,    IT_9,    IT_0,    IT_QUOT, IT_IGRV,   KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,             IT_Q,       IT_W,       IT_E,    IT_R,    IT_T,    IT_Y,    IT_U,    IT_I,    IT_O,    IT_P,    IT_EGRV, IT_PLUS,               KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    TD(TD_LGUI_CAPS),   IT_A,       IT_S,       IT_D,    IT_F,    IT_G,    IT_H,    IT_J,    IT_K,    IT_L,    IT_OGRV, IT_AGRV, IT_UGRV,   KC_ENT,                                   KC_P4,   KC_P5,   KC_P6,
    KC_LSFT,            IT_LABK,    IT_Z,       IT_X,    IT_C,    IT_V,    IT_B,    IT_N,    IT_M,    IT_COMM, IT_DOT,  IT_MINS,            KC_RSFT,              KC_UP,              KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL,            KC_LALT,                           KC_SPC,                                      KC_RALT,          KC_RCTL,                      KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT
  ),

  [1] = LAYOUT( /* Base layer */
    _______,             _______,      _______,      _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,  _______,  _______,                _______, _______, _______,
    _______,            _______,       _______,       _______,    _______,    _______,    _______,    TD(TD_7_LCBR),    TD(TD_8_LBRC),    TD(TD_9_RBRC),    TD(TD_0_RCBR),    _______, _______,   _______,    _______,  _______, _______,    _______, _______, _______, KC_PMNS,
    _______,             _______,       _______,       _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, _______,               _______,  _______,  _______,    _______,   _______,   _______,   _______,
    _______,   _______,       _______,       _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______, _______, _______,   _______,                                   _______,   _______,   _______,
    _______,            _______,    _______,       _______,    _______,    _______,    _______,    _______,    _______,    _______, _______,  _______,            _______,              _______,              _______,   _______,   _______,   _______,
    _______,            _______,                           _______,                                      _______,          _______,                      _______, _______, _______,    _______,            _______
  )
};

