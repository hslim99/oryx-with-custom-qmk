#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  DB_TOGG_1,
  DB_TOGG_2
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_LALT, KC_G),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_LALT, KC_H),MT(MOD_RSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_RSFT, KC_L),MT(MOD_LGUI, KC_SCLN),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(1,KC_ESCAPE),LT(2,KC_SPACE), DB_TOGG_1,                                                                                                      DB_TOGG_2,      LT(4,KC_BSPC),  LT(3,KC_RIGHT_ALT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LT(2,KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LT(5,KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_BSPC,        KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_INSERT,      KC_HOME,        KC_CAPS,        KC_PAGE_UP,     KC_PSCR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DELETE,      KC_END,         KC_UP,          KC_PGDN,        LALT(KC_PSCR),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(KC_DELETE),          KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(LSFT(KC_S)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_BSPC,        KC_RIGHT_ALT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT_ALT,    KC_RIGHT_SHIFT, KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_BSPC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT_ALT,    KC_RIGHT_SHIFT, KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DOT,         KC_1,           KC_2,           KC_3,           KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_BSPC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(LSFT(KC_S)), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TAB        , KC_LEFT_ALT,   KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DOT,         KC_1,           KC_2,           KC_3,           KC_0,                                           LSFT(KC_DELETE),          LCTL(KC_V),     LCTL(KC_C),     LCTL(KC_X),     LCTL(KC_Z),     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,      KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_BSPC,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_W, KC_E, COMBO_END}; // (
const uint16_t PROGMEM combo1[] = { KC_E, KC_R, COMBO_END}; // )
const uint16_t PROGMEM combo2[] = { KC_X, KC_C, COMBO_END}; // [
const uint16_t PROGMEM combo3[] = { KC_V, KC_C, COMBO_END}; // ]
const uint16_t PROGMEM combo4[] = { MT(MOD_LSFT, KC_S), MT(MOD_LCTL, KC_D), COMBO_END}; // {
const uint16_t PROGMEM combo5[] = { MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END}; // }
const uint16_t PROGMEM combo6[] = { MT(MOD_RSFT, KC_L), MT(MOD_LGUI, KC_SCLN), COMBO_END}; // '
const uint16_t PROGMEM combo7[] = { KC_O, KC_P, COMBO_END}; // backslash
const uint16_t PROGMEM combo8[] = { MT(MOD_LCTL, KC_K), MT(MOD_RSFT, KC_L), COMBO_END}; // =
const uint16_t PROGMEM combo9[] = { KC_Q, KC_W, COMBO_END}; // `
const uint16_t PROGMEM combo10[] = { MT(MOD_RSFT, KC_J), MT(MOD_LCTL, KC_K), COMBO_END}; // -
const uint16_t PROGMEM combo11[] = { KC_M, KC_COMMA, COMBO_END}; // <
const uint16_t PROGMEM combo12[] = { KC_COMMA, KC_DOT, COMBO_END}; // >
const uint16_t PROGMEM combo13[] = { KC_R, KC_T, COMBO_END}; // backspace
const uint16_t PROGMEM combo14[] = { DB_TOGG_1, DB_TOGG_2, COMBO_END}; // DB_TOGG

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_LPRN),
    COMBO(combo1, KC_RPRN),
    COMBO(combo2, KC_LBRC),
    COMBO(combo3, KC_RBRC),
    COMBO(combo4, KC_LCBR),
    COMBO(combo5, KC_RCBR),
    COMBO(combo6, KC_QUOTE),
    COMBO(combo7, KC_BSLS),
    COMBO(combo8, KC_EQUAL),
    COMBO(combo9, KC_GRAVE),
    COMBO(combo10, KC_MINUS),
    COMBO(combo11, KC_LABK),
    COMBO(combo12, KC_RABK),
    COMBO(combo13, KC_BSPC),
    COMBO(combo14, DB_TOGG),
};


uint16_t get_combo_term(uint16_t combo_index, combo_t *combo) {
    switch (combo->keycode) {
        case KC_QUOTE:
        case KC_GRAVE:
            return 75;
    }

    return COMBO_TERM;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    dprintf("KL: row: %u, column: %u, pressed: %u\n", record->event.key.row, record->event.key.col, record->event.pressed);
    if (keycode == RGB_SLD) {
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    }

    return true;
}


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_S):
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_J):
        case MT(MOD_RSFT, KC_L):
            return 130;
        case MT(MOD_LALT, KC_H):
        case MT(MOD_LGUI, KC_A):
        case MT(MOD_LGUI, KC_SCLN):
            return 350;
        default:
            return TAPPING_TERM;
    }
}


uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_RSFT, KC_J):
            return 45;
        case MT(MOD_LSFT, KC_S):
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_L):
        case LT(4,KC_BSPC):
            return 70;
        default:
            return QUICK_TAP_TERM;
    }
}


bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    return record->event.key.row % 6 >= 4 || keycode == MT(MOD_LCTL, KC_D);
}


char chordal_hold_handedness(keypos_t key) {
    return 'L';
}


bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t *tap_hold_record, uint16_t other_keycode, keyrecord_t *other_record) {
    switch (tap_hold_keycode) {
        case MT(MOD_LSFT, KC_S):
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_J):
        case MT(MOD_RSFT, KC_L):
        case MT(MOD_LCTL, KC_D):
            return true;
    }
    if (tap_hold_record->event.key.row % 6 >= 4) {
        return true;
    }
    return get_chordal_hold_default(tap_hold_record, other_record);
}



