#include QMK_KEYBOARD_H

enum layers {_LAYER0, _LAYER1, _LAYER2, _LAYER3 };

#define LAYER0 TO(_LAYER0)
#define LAYER1 TO(_LAYER1)
#define LAYER2 TO(_LAYER2)
#define LAYER3 TO(_LAYER3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT_ortho_3x6_4(
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,           KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,           KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,           KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_BSLS,
                                KC_LCTL,    KC_SPC,     KC_LCMD,    KC_ENT,         KC_ENT,     LAYER1,     KC_BSPC,    KC_RALT
    ),
    [_LAYER1] = LAYOUT_ortho_3x6_4(
        XXXXXXX,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,           KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    LAYER0,     XXXXXXX,        XXXXXXX,    LAYER2,     XXXXXXX,    LAYER3
    ),
    [_LAYER2] = LAYOUT_ortho_3x6_4(
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,          KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    RGB_VAD,    RGB_VAI,    RGB_TOG,        KC_MPLY,    KC_VOLU,    KC_VOLD,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    RGB_RMOD,   RGB_MOD,        KC_MUTE,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                XXXXXXX,    XXXXXXX,    LAYER0,     XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
    )

        
};
