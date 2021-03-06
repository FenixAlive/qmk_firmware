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

#define ALTG  RALT_T(KC_BSPC)
#define GUI   LGUI_T(KC_TAB)
#define LSSPA LSFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CHITA] = LAYOUT (
            KC_TAB        , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_ESC        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_SFTENT     , TT(_TWO)  , ALTG    , GUI     , TT(_THREE) , LSSPA,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_DEL,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_QWERTY] = LAYOUT (
            KC_TAB        , KC_Q      , KC_W    , KC_E    , KC_R       , KC_T,
            KC_ESC        , KC_A      , KC_S    , KC_D    , KC_F       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_C    , KC_V       , KC_B,
            KC_SFTENT     , TT(_TWO)  , ALTG    , GUI     , TT(_THREE) , LSSPA,
            KC_Y          , KC_U      , KC_I    , KC_O    , KC_P       , KC_DEL,
            KC_H          , KC_J      , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_GAME] = LAYOUT (
            KC_TAB        , KC_Q      , KC_W    , KC_E    , KC_R       , KC_T,
            KC_ESC        , KC_A      , KC_S    , KC_D    , KC_F       , KC_G,
            KC_LCTL       , KC_Z      , KC_X    , KC_C    , KC_V       , KC_B,
            KC_SFTENT     , TT(_TWO)  , ALTG    , GUI     , TT(_THREE) , LSSPA,
            KC_Y          , KC_U      , KC_I    , KC_O    , KC_P       , KC_BSPC,
            KC_H          , KC_J      , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M      , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_TWO] = LAYOUT (
            KC_TILD       , KC_EXLM      , KC_AT     , KC_HASH         , KC_DLR  , KC_PERC,
            KC_CIRC       , KC_LPRN      , KC_RPRN   , KC_LCBR         , KC_RCBR , KC_AMPR,
            CTL_T(KC_BSLS), S(KC_BSLS)   , ALGR(KC_1), KC_LBRC         , KC_RBRC , KC_UNDS,
            _______       , _______      , _______   , LGUI_T(KC_GRV)  , _______  , _______,
            KC_SLSH       , KC_7         , KC_8      , KC_9            , KC_ASTR  , KC_DEL,
            KC_DOT        , KC_4         , KC_5      , KC_6            , KC_MINS  , KC_INS,
            KC_0          , KC_1         , KC_2      , KC_3            , KC_PLUS  , ALT_T(KC_EQL)
            ),
    [_THREE] = LAYOUT (
            KC_BTN5      , KC_F1      , KC_F2    , KC_F3    , KC_F4       , KC_ACL0,
            KC_ESC       , KC_F5      , KC_F6    , KC_F7    , KC_F8       , KC_ACL1,
            KC_LCTL      , KC_F9      , KC_F10   , KC_F11   , KC_F12      , KC_ACL2,
            KC_BTN1      , _______    , KC_BTN2  , _______ , _______    , _______,
            KC_MS_L      , KC_MS_D      , KC_MS_U    , KC_MS_R    , KC_WH_U    , KC_BTN4,
            KC_LEFT      , KC_DOWN      , KC_UP    , KC_RGHT    , KC_WH_D       , KC_BTN3,
            KC_PSCR      , KC_PGUP      , KC_HOME , KC_END  , KC_PGDN    , KC_LALT
            ),
    [_ADJUST] = LAYOUT (
            _______      , KC_MUTE    , KC_VOLD    , KC_VOLU  , _______   , KC_CALC,
            KC_CAPS      , KC_BRID    , KC_BRIU    , _______  , _______   , KC_APP,
            KC_MSEL      , KC_MPLY    , KC_MSTP    , KC_MPRV  , KC_MNXT   , _______,
            _______      , _______    , _______    , _______  , _______   , _______,
            _______      , QWERTY     , GAME       , CHITA    , RESET     , LCA(KC_DEL),
            _______      , DM_REC1    , DM_PLY1    , _______  , DM_RSTP   , _______,
            _______      , DM_REC2    , DM_PLY2    , _______  , _______   , _______
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
