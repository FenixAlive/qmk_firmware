#include QMK_KEYBOARD_H

enum layers {
	_CHITA,
  _QWERTY,
  _GAME,
  _GTWO,
  _TWO,
  _THREE,
  _NUMP,
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
#define CTLBS CTL_T(KC_BSLS)
#define ALTMI ALT_T(KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_CHITA] = LAYOUT (
            DM_REC1       , KC_Q      , KC_D    , KC_R    , KC_F       , KC_B,
            KC_ESC        , KC_A      , KC_S    , KC_E    , KC_T       , KC_G,
            CTLBS         , KC_Z      , KC_X    , KC_M    , KC_C       , KC_V,
            KC_SFTENT     , TT(_TWO)  , ALTG    , GUI     , TT(_THREE) , LSSPA,
            KC_K          , KC_W      , KC_Y    , KC_P    , KC_SCLN    , KC_DEL,
            KC_H          , KC_N      , KC_I    , KC_O    , KC_U       , KC_QUOT,
            KC_J          , KC_L      , KC_COMM , KC_DOT  , KC_SLSH    , ALTMI
            ),
    [_QWERTY] = LAYOUT (
            DM_REC1       , KC_Q      , KC_W    , KC_E    , KC_R       , KC_T,
            KC_ESC        , KC_A      , KC_S    , KC_D    , KC_F       , KC_G,
            CTLBS         , KC_Z      , KC_X    , KC_C    , KC_V       , KC_B,
            KC_SFTENT     , TT(_TWO)  , ALTG    , GUI     , TT(_THREE) , LSSPA,
            KC_Y          , KC_U      , KC_I    , KC_O    , KC_P       , KC_DEL,
            KC_H          , KC_J      , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M      , KC_COMM , KC_DOT  , KC_SLSH    , ALTMI
            ),
    [_GAME] = LAYOUT (
            KC_TAB        , KC_Q       , KC_W    , KC_E    , KC_R       , KC_T,
            KC_ESC        , KC_A       , KC_S    , KC_D    , KC_F       , KC_G,
            KC_LSFT       , KC_Z       , KC_X    , KC_C    , KC_V       , KC_B,
            KC_SFTENT     , MO(_THREE) , GUI     , KC_LALT , MO(_GTWO)  , KC_SPC,
            KC_Y          , KC_U       , KC_I    , KC_O    , KC_P       , KC_BSPC,
            KC_H          , KC_J       , KC_K    , KC_L    , KC_SCLN    , KC_QUOT,
            KC_N          , KC_M       , KC_COMM , KC_DOT  , KC_SLSH    , KC_LALT
            ),
    [_GTWO] = LAYOUT (
            KC_BSLS       , KC_DOT     , KC_7      , KC_8     , KC_9      , KC_ASTR,
            KC_MINS       , KC_0       , KC_4      , KC_5     , KC_6      , KC_PLUS,
            KC_LCTL       , KC_EQL     , KC_1      , KC_2     , KC_3      , KC_SLSH,
            _______       , _______    , _______   , _______  , _______   , _______,
            KC_LOCK       , KC_F1      , KC_F2     , KC_F3    , KC_F4     , KC_DEL,
            CHITA         , KC_F5      , KC_F6     , KC_F7    , KC_F8     , KC_INS,
            RESET         , KC_F9      , KC_F10    , KC_F11   , KC_F12    , ALTMI
            ),
    [_TWO] = LAYOUT (
            ALGR(KC_1)     , KC_EXLM   , KC_AT     , KC_HASH   , KC_DLR   , KC_PERC,
            KC_TILD        , KC_LPRN   , KC_RPRN   , KC_LCBR   , KC_RCBR  , KC_AMPR,
            CTLBS          , S(KC_BSLS), KC_CIRC   , KC_LBRC   , KC_RBRC  , KC_GRV,
            _______        , _______   , _______   , _______   , _______  , _______,
            KC_DOT         , KC_7      , KC_8      , KC_9      , KC_ASTR  , KC_INS,
            KC_0           , KC_4      , KC_5      , KC_6      , KC_PLUS  , KC_UNDS,
            KC_EQL         , KC_1      , KC_2      , KC_3      , KC_SLSH  , ALTMI
            ),
    [_THREE] = LAYOUT (
            _______      , KC_HOME    , KC_UP    , KC_END   , KC_PGUP     , KC_BRIU,
            TT(_NUMP)    , KC_LEFT    , KC_DOWN  , KC_RGHT  , KC_LSFT     , KC_BRID,
            _______      , KC_ACL0    , KC_ACL1  , KC_ACL2  , KC_PGDN     , KC_CALC,
            KC_BTN1      , _______    , KC_BTN2  , _______  , _______     , _______,
            KC_VOLU      , KC_WH_U    , KC_MS_U  , KC_WH_D  , KC_BTN4     , KC_BTN5,
            KC_VOLD      , KC_MS_L    , KC_MS_D  , KC_MS_R  , KC_BTN3     , KC_PSCR,
            KC_MUTE      , KC_MSEL    , KC_MPLY  , KC_MPRV  , KC_MNXT     , _______
            ),
    [_NUMP] = LAYOUT (
            _______      , _______    , KC_PAST  , KC_PMNS  , KC_PPLS     , _______,
            _______      , _______    , KC_PSLS  , KC_PDOT  , KC_PCMM     , _______,
            _______      , _______    , _______  , _______  , _______     , _______,
            _______      , _______    , _______  , _______  , _______     , _______,
            KC_PSLS      , KC_KP_7    , KC_KP_8  , KC_KP_9  , KC_PAST     , KC_NLCK,
            KC_KP_0      , KC_KP_4    , KC_KP_5  , KC_KP_6  , KC_PMNS     , KC_PENT,
            KC_PDOT      , KC_KP_1    , KC_KP_2  , KC_KP_3  , KC_PPLS     , KC_PEQL 
            ),
    [_ADJUST] = LAYOUT (
            DM_PLY1      , KC_F1      , KC_F2      , KC_F3    , KC_F4     , _______,
            KC_CAPS      , KC_F5      , KC_F6      , KC_F7    , KC_F8     , _______,
            _______      , KC_F9      , KC_F10     , KC_F11   , KC_F12    , _______,
            _______      , _______    , _______    , _______  , _______   , _______,
            KC_LOCK      , QWERTY     , GAME       , CHITA    , RESET     , LCA(KC_DEL),
            _______      , _______    , _______    , _______  , _______   , _______,
            _______      , _______    , _______    , _______  , _______   , _______
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