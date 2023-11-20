#include QMK_KEYBOARD_H

enum layers {_LAYER0, _LAYER1, _LAYER2, _LAYER3 };

#define LAYER0 TO(_LAYER0)
#define LAYER1 TT(_LAYER1)
#define LAYER2 TT(_LAYER2)
#define LAYER3 TT(_LAYER3)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT_ortho_3x6_4(
          KC_TAB,       KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,                       KC_Y,       KC_U,               KC_I,               KC_O,               KC_P,               KC_LBRC,
          KC_ESC,       KC_A,               KC_S,               KC_D,               KC_F,               KC_G,                       KC_H,       KC_J,               KC_K,               KC_L,               KC_SCLN,            KC_QUOT,
          KC_LSFT,      LSFT_T(KC_Z),       LALT_T(KC_X),       LCTL_T(KC_C),       LGUI_T(KC_V),       KC_B,                       KC_N,       RGUI_T(KC_M),       RCTL_T(KC_COMM),    RALT_T(KC_DOT),     RSFT_T(KC_SLSH),    KC_BSLS,
                                            KC_LCTL,            KC_SPC,             KC_LCMD,            KC_ENT,                     KC_ENT,     LAYER1,             KC_BSPC,            KC_RALT
    ),
    [_LAYER1] = LAYOUT_ortho_3x6_4(
          XXXXXXX,      KC_1,               KC_2,               KC_3,               KC_4,               KC_5,                       KC_6,       KC_7,               KC_8,               KC_9,               KC_0,               XXXXXXX,
          KC_ESC,       KC_COLN,            KC_LBRC,            KC_LCBR,            KC_LPRN,            KC_MINS,                    KC_UNDS,    KC_RPRN,            KC_RCBR,            KC_RBRC,            KC_SCLN,            XXXXXXX,
          XXXXXXX,      LSFT_T(KC_LSFT),    LALT_T(KC_EQL),     LCTL_T(KC_LABK),    LGUI_T(KC_BSLS),    KC_GRAVE,                   KC_TILDE,   RGUI_T(KC_PIPE),    RCTL_T(KC_PLUS),    RALT_T(KC_RALT),    RSFT_T(KC_RSFT),    XXXXXXX,
                                            XXXXXXX,            KC_SPC,             LAYER0,             KC_ENT,                     KC_ENT,     LAYER2,             KC_BSPC,            LAYER3
    ),
    [_LAYER2] = LAYOUT_ortho_3x6_4(     
          KC_F1,        KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,                      KC_F7,      KC_F8,              KC_F9,              KC_F10,             KC_F11,             KC_F12,
          KC_ESC,       XXXXXXX,            XXXXXXX,            RGB_VAD,            RGB_VAI,            RGB_TOG,                    KC_MPLY,    KC_VOLU,            KC_VOLD,            KC_MUTE,            XXXXXXX,            XXXXXXX,
          XXXXXXX,      LSFT_T(KC_LSFT),    LALT_T(KC_PAUS),    LCTL_T(KC_SLCK),    LGUI_T(RGB_RMOD),   RGB_MOD,                    KC_LEFT,    RGUI_T(KC_DOWN),    LCTL_T(KC_UP),      RALT_T(KC_RGHT),    RSFT_T(KC_RSFT),    XXXXXXX,
                                            XXXXXXX,            KC_SPC,             LAYER0,             KC_ENT,                     KC_ENT,     XXXXXXX,            KC_BSPC,            XXXXXXX
    ),
    [_LAYER3] = LAYOUT_ortho_3x6_4(     
          KC_F1,        KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,                      KC_F7,      KC_F8,              KC_F9,              KC_F10,             KC_F11,             KC_F12,
          KC_ESC,       XXXXXXX,            XXXXXXX,            RGB_VAD,            RGB_VAI,            RGB_TOG,                    KC_MPLY,    KC_VOLU,            KC_VOLD,            XXXXXXX,            XXXXXXX,            XXXXXXX,
          XXXXXXX,      XXXXXXX,            XXXXXXX,            XXXXXXX,            RGB_RMOD,           RGB_MOD,                    KC_MUTE,    XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,            XXXXXXX,
                                            XXXXXXX,            XXXXXXX,            LAYER0,             KC_ENT,                     KC_ENT,     XXXXXXX,            KC_BSPC,            XXXXXXX
    )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGUI_T(KC_PIPE):
      if (record->tap.count && record->event.pressed) {
        tap_code16(KC_PIPE); // Send KC_PIPE on tap
        return false;        // Return false to ignore further processing of key
      }
    case RCTL_T(KC_RABK):
      if (record->tap.count && record->event.pressed) {
        tap_code16(KC_RABK); // Send KC_RABK on tap
        return false;        // Return false to ignore further processing of key
      }
    case LCTL_T(KC_LABK):
      if (record->tap.count && record->event.pressed) {
        tap_code16(KC_LABK); // Send KC_RABK on tap
        return false;        // Return false to ignore further processing of key
      }
    break;
  }
  return true;
}