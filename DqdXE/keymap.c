#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE
#if __has_include("secrets.h")
#include "secrets.h"
#endif

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MY_PASSWORD_PERSONAL_KEYCODE,
  MY_PASSWORD_WORK_KEYCODE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LSFT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_LALT, KC_G),                                MT(MOD_LALT, KC_H),MT(MOD_RSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_RSFT, KC_L),MT(MOD_LGUI, KC_SCLN),KC_TRANSPARENT, 
    LT(1, KC_ESCAPE),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       LT(3,KC_RIGHT_ALT),    
                                                    LT(2, KC_SPACE),LT(2, KC_TAB),                                  LT(5, KC_ENTER),LT(4, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,                                    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_BSPC
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_INSERT,      KC_HOME,        KC_CAPS,        KC_PAGE_UP,     KC_PSCR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_ALT,                                    KC_DELETE,      KC_END,         KC_UP,          KC_PGDN,        LALT(KC_PSCR),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(KC_DELETE), KC_LEFT,       KC_DOWN,        KC_RIGHT,       LGUI(LSFT(KC_S)), KC_RIGHT_ALT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ENTER,       KC_BSPC
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F12,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F11,                                         KC_LEFT_ALT,    KC_RIGHT_SHIFT, KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_ESCAPE,      KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F10,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_TAB,                                         KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_BSPC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,                                          KC_LEFT_ALT,    KC_RIGHT_SHIFT, KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_ESCAPE,      KC_DOT,         KC_1,           KC_2,           KC_3,           KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_TAB,                                         KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_BSPC,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(LSFT(KC_S)), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,                                          KC_TAB,         KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_RIGHT_SHIFT, KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_ESCAPE,      KC_DOT,         KC_1,           KC_2,           KC_3,           KC_0,                                           LSFT(KC_DELETE), LCTL(KC_V),    LCTL(KC_C),     LCTL(KC_X),     LCTL(KC_Z),     KC_TRANSPARENT,
                                                    KC_SPACE,       KC_TAB,                                         KC_TRANSPARENT, KC_BSPC
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  set_layer_color(0);
  if (rgb_matrix_get_flags() == LED_FLAG_NONE)
    rgb_matrix_set_color_all(0, 0, 0);
  return true;
}


const uint16_t PROGMEM combo0[] = { KC_W, KC_E, COMBO_END}; // (
const uint16_t PROGMEM combo1[] = { KC_E, KC_R, COMBO_END}; // )
const uint16_t PROGMEM combo2[] = { MT(MOD_LSFT, KC_S), MT(MOD_LCTL, KC_D), COMBO_END}; // {
const uint16_t PROGMEM combo3[] = { MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END}; // }
const uint16_t PROGMEM combo4[] = { KC_X, KC_C, COMBO_END}; // [
const uint16_t PROGMEM combo5[] = { KC_C, KC_V, COMBO_END}; // ]
const uint16_t PROGMEM combo6[] = { MT(MOD_RSFT, KC_L), MT(MOD_LGUI, KC_SCLN), COMBO_END}; // '
const uint16_t PROGMEM combo7[] = { KC_O, KC_P, COMBO_END}; // backslash
const uint16_t PROGMEM combo8[] = { MT(MOD_LCTL, KC_K), MT(MOD_RSFT, KC_L), COMBO_END}; // =
const uint16_t PROGMEM combo9[] = { MT(MOD_RSFT, KC_J), MT(MOD_LCTL, KC_K), COMBO_END}; // -
const uint16_t PROGMEM combo10[] = { KC_Q, KC_W, COMBO_END}; // `
const uint16_t PROGMEM combo11[] = { KC_M, KC_COMMA, COMBO_END}; // <
const uint16_t PROGMEM combo12[] = { KC_COMMA, KC_DOT, COMBO_END}; // >
const uint16_t PROGMEM combo13[] = { KC_R, KC_T, COMBO_END}; // backspace
const uint16_t PROGMEM combo14[] = { KC_F1, KC_F5, KC_F9, COMBO_END}; // DB_TOGG
const uint16_t PROGMEM combo15[] = { KC_F3, KC_F5, KC_F7, COMBO_END}; // RGB_TOG
const uint16_t PROGMEM combo16[] = { KC_F7, KC_F9, COMBO_END}; // RGB_MODE_FORWARD
const uint16_t PROGMEM combo17[] = { KC_F4, KC_F6, COMBO_END}; // RGB_SLD
const uint16_t PROGMEM combo18[] = { KC_V, KC_B, LT(2, KC_TAB), COMBO_END}; // arbitrary shortcut
const uint16_t PROGMEM combo19[] = { KC_N, KC_M, LT(5, KC_ENTER), COMBO_END}; // arbitrary shortcut
const uint16_t PROGMEM combo20[] = { MT(MOD_LSFT, KC_S), MT(MOD_LALT, KC_G), COMBO_END}; // keyboard language change
const uint16_t PROGMEM combo21[] = { KC_E, MT(MOD_LSFT, KC_S), LT(2, KC_TAB), COMBO_END}; // password (personal)
const uint16_t PROGMEM combo22[] = { MT(MOD_LCTL, KC_D), KC_X, LT(2, KC_TAB), COMBO_END}; // password (work)

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_LPRN),
    COMBO(combo1, KC_RPRN),
    COMBO(combo2, KC_LCBR),
    COMBO(combo3, KC_RCBR),
    COMBO(combo4, KC_LBRC),
    COMBO(combo5, KC_RBRC),
    COMBO(combo6, KC_QUOTE),
    COMBO(combo7, KC_BSLS),
    COMBO(combo8, KC_EQUAL),
    COMBO(combo9, KC_MINUS),
    COMBO(combo10, KC_GRAVE),
    COMBO(combo11, KC_LABK),
    COMBO(combo12, KC_RABK),
    COMBO(combo13, KC_BSPC),
    COMBO(combo14, DB_TOGG),
    COMBO(combo15, RGB_TOG),
    COMBO(combo16, RGB_MODE_FORWARD),
    COMBO(combo17, RGB_SLD),
    COMBO(combo18, RSFT(KC_F20)),
    COMBO(combo19, RSFT(KC_F21)),
    COMBO(combo20, LSFT(KC_LEFT_ALT)),
    COMBO(combo21, MY_PASSWORD_PERSONAL_KEYCODE),
    COMBO(combo22, MY_PASSWORD_WORK_KEYCODE),
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
    dprintf("keycode: %u\n", keycode);
    if (keycode == RGB_SLD) {
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    }
    if (keycode == MY_PASSWORD_PERSONAL_KEYCODE) {
        if (record->event.pressed) {
#ifdef MY_PASSWORD_PERSONAL
            SEND_STRING(MY_PASSWORD_PERSONAL);
#else
            SEND_STRING("nothing is defined\n");
#endif
        }
        return false;
    }
    if (keycode == MY_PASSWORD_WORK_KEYCODE) {
        if (record->event.pressed) {
#ifdef MY_PASSWORD_WORK
            SEND_STRING(MY_PASSWORD_WORK);
#else
            return false;
#endif
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
    return record->event.key.row % 6 >= 4 || keycode == MT(MOD_LCTL, KC_D) || keycode == MT(MOD_LGUI, KC_A);
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
        case MT(MOD_LGUI, KC_A):
            switch (other_keycode) {
                case KC_C:
                case LT(2, KC_SPACE):
                return true;
            default:
                return false;
            }
    }
    if (tap_hold_record->event.key.row % 6 >= 4) {
        return true;
    }
    return get_chordal_hold_default(tap_hold_record, other_record);
}



