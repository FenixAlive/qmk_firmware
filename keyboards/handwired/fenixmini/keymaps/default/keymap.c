#include QMK_KEYBOARD_H

enum layers {
	_CHITA,
    _QWERTY,
    _GAME,
    _TWO,
    _THREE,
    _ADJUST
};

enum keycodes {
    CHITA = SAFE_RANGE,
	QWERTY,
    GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CHITA] = LAYOUT (
            KC_ESC        , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_TAB        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_ENT        , TT(_TWO)  , KC_RALT  , KC_LGUI , TT(_THREE) , KC_SPC,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_BSPC,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_QWERTY] = LAYOUT (
            KC_ESC        , KC_Q      , KC_W    , KC_E    , KC_R       , KC_T,
            KC_TAB        , KC_A      , KC_S    , KC_D    , KC_F       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_C    , KC_V       , KC_B,
            KC_ENT        , TT(_TWO)  , KC_RALT  , KC_LGUI , TT(_THREE) , KC_SPC,
            KC_Y          , KC_U      , KC_I    , KC_O    , KC_P       , KC_BSPC,
            KC_H          , KC_J      , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_GAME] = LAYOUT (
            KC_ESC        , KC_Q      , KC_W    , KC_E    , KC_R       , KC_T,
            KC_TAB        , KC_A      , KC_S    , KC_D    , KC_F       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_C    , KC_V       , KC_B,
            KC_ENT        , TT(_TWO)  , KC_RALT , KC_LGUI , TT(_THREE) , KC_SPC,
            KC_Y          , KC_U      , KC_I    , KC_O    , KC_P       , KC_BSPC,
            KC_H          , KC_J      , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_TWO] = LAYOUT (
            KC_ESC        , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_TAB        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_ENT        , KC_TRNS   , KC_SPC  , KC_LGUI , _______    , KC_ENT,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_BSPC,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_THREE] = LAYOUT (
            KC_ESC        , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_TAB        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_ENT        ,_______    , KC_SPC  , KC_LGUI , KC_TRNS    , KC_ENT,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_BSPC,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_ADJUST] = LAYOUT (
            KC_ESC        , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_TAB        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_ENT        , _______   , KC_SPC  , KC_LGUI , _______    , KC_ENT,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_BSPC,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            )
};

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _TWO, _THREE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case CHITA:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_CHITA);
            }
            return false;
            break;
        case GAME:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAME);
            }
            return false;
            break;
    }

    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KC_F19:
            if (record->event.pressed){
            }
            break;
    }
}