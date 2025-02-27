#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, MO(2), KC_SPC, KC_ENT, MO(1), KC_LALT),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, KC_CIRC, KC_AMPR, KC_UNDS, KC_LBRC, KC_RBRC, KC_EXLM, KC_AT, KC_LPRN, KC_RPRN, KC_HASH, KC_BSLS, KC_PERC, KC_LSFT, KC_EQL, KC_DLR, KC_LCBR, KC_RCBR, RSA(KC_SCLN), KC_PIPE, KC_PMNS, KC_PPLS, KC_PAST, KC_PSLS, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL, KC_NO, KC_NO, RALT(KC_LBRC), RALT(KC_RBRC), KC_TAB, KC_PSCR, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F11, KC_INS, KC_LSFT, KC_NO, RALT(KC_5), RALT(KC_COMM), KC_LGUI, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_F12, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





