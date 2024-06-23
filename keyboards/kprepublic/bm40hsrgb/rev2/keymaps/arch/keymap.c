#include QMK_KEYBOARD_H

enum layers {
  _ALPHA,
  _SYMBOL,
  _NUMBER,
  _NAVIGATION,
  _TG,
  // _MOUSE,
  _APP,
  _BRACES,
  // _RECTANGLE,
};

enum my_keycodes {
  CODE_ARRAY = SAFE_RANGE,
  CODE_TO,
  DELETE_LINE,
};

#undef _______
#define _ KC_NO
#define __ KC_NO
#define ____ KC_NO
#define _______ KC_NO
#define ________________ KC_NO

#define _Q KC_Q
#define _W KC_W
#define _F SFT_T(KC_F)
#define _P SFT_T(KC_P)
#define _B KC_B
#define _J KC_J
#define _L SFT_T(KC_L)
#define _U SFT_T(KC_U)
#define _Y KC_Y
#define _N KC_N
#define _R KC_R
#define _S CTL_T(KC_S)
#define _T CMD_T(KC_T)
#define _G KC_G
#define _M KC_M
#define _A CMD_T(KC_A)
#define _E CTL_T(KC_E)
#define _I KC_I
#define _O KC_O
#define _Z KC_Z
#define _X KC_X
#define _C KC_C
#define _D ALT_T(KC_D)
#define _V KC_V
#define _K KC_K
#define _H ALT_T(KC_H)

#define _0 KC_0
#define _1 KC_1
#define _2 KC_2
#define _3 KC_3
#define _4 KC_4
#define _5 KC_5
#define _6 KC_6
#define _7 KC_7
#define _8 KC_8
#define _9 KC_9

#define Up KC_UP
#define Down KC_DOWN
#define Left KC_LEFT
#define Right KC_RIGHT

#define SCUp LSFT(LCTL(Up))
#define SCDown LSFT(LCTL(Down))
#define SCLeft LSFT(LCTL(Left))
#define SCRight LSFT(LCTL(Right))

#define LeftClick KC_BTN1
#define RightClick KC_BTN2
#define WheelUp KC_MS_WH_UP
#define WheelDown KC_MS_WH_DOWN
#define WheelLeft KC_MS_WH_LEFT
#define WheelRight KC_MS_WH_RIGHT
#define MUp KC_MS_UP
#define MDown KC_MS_DOWN
#define MLeft KC_MS_LEFT
#define MRight KC_MS_RIGHT
#define MSpeed0 KC_MS_ACCEL0
#define MSpeed1 KC_MS_ACCEL1
#define MSpeed2 KC_MS_ACCEL2

#define Space KC_SPC
#define Backspace KC_BSPC
#define Delete KC_DEL
#define Command KC_LCMD
#define NextWindow LCMD(KC_GRV)
#define Lang LSFT(KC_CAPS)
#define Control KC_LCTL
#define Alt KC_LALT
#define Shift KC_LSFT
#define Enter KC_ENT
#define Esc KC_ESC
#define Tab KC_TAB

#define PgDn KC_PGDN
#define PgUp KC_PGUP
#define Home KC_HOME
#define End KC_END

#define BackSlash KC_BSLS
#define Percent KC_PERC
#define Asterisk KC_ASTR
#define At KC_AT
#define Hash KC_HASH
#define Tilda KC_TILD
#define Grave KC_GRV
#define Equal KC_EQL
#define Underscore KC_UNDS
#define Minus KC_MINS
#define Plus KC_PLUS

#define Exlm KC_EXLM
#define Question KC_QUES
#define Slash KC_PSLS
#define Ampersand KC_AMPR
#define Dot KC_DOT
#define Comma KC_COMM
#define Quote KC_QUOT
#define DQuote KC_DQUO
#define Pipe KC_PIPE
#define Colon KC_COLN
#define Semicolon KC_SCLN
#define Caret KC_CIRC
#define Dollar KC_DLR

#define LightDec KC_BRID
#define LightInc KC_BRIU
#define SoundDec KC_VOLD
#define SoundInc KC_VOLU

#define PrntSc1 HYPR(KC_1)
#define PrntSc2 HYPR(KC_2)
#define PrntSc3 HYPR(KC_3)

#define NewLine LSFT(Enter)

#define Menu HYPR(Space)
#define Buffer HYPR(KC_V)
#define Pass HYPR(KC_F)
#define Commands HYPR(KC_O)
#define FPiP LCTL(LSFT(KC_RBRC)) // Firefox. Picture-in-Picture
#define MPiP LCAG(KC_X) // mpv float

#define Browser HYPR(KC_R)
#define Term HYPR(KC_S)
#define Chat HYPR(KC_T)
#define Vpn HYPR(KC_4)

#define WS_1 HYPR(KC_X)
#define WS_2 HYPR(KC_C)
#define WS_3 HYPR(KC_D)

#define PrevApp LALT(KC_TAB)

#define Tmux LCTL(KC_A)

#define MakeFloat LCAG(KC_C)
#define MoveFloat LCAG(KC_D)
#define ScratchpadMove LCAG(KC_S)
#define ScratchpadShow LCAG(KC_T)
#define Fullscreen KC_F11
#define Monitor1 LCAG(KC_1)
#define Monitor2 LCAG(KC_2)

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case _T:
        case _A:
        case _S:
        case _E:
        case _D:
        case _H:
        case _F:
        case _P:
        case _L:
        case _U:
            // Do not select the hold action when another key is pressed.
            return false;
        default:
            // Immediately select the hold action when another key is pressed.
            return true;
    }
}

uint16_t change_app_timer = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CODE_ARRAY:
      if (record->event.pressed) { SEND_STRING(" => "); } return false;
    case CODE_TO:
      if (record->event.pressed) { SEND_STRING("->"); } return false;
    case DELETE_LINE:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_HOME)) SS_TAP(X_BSPC));
      }
      return false;
    default:
      return true; // Process all other keycodes normally
  }
}

#define _RF KC_KP_1  // ф
#define _RJ KC_KP_2  // ж
#define _RZ KC_KP_3  // з
#define _RT KC_KP_4  // ъ
#define _RB KC_KP_5  // б
#define _RYU KC_KP_6 // ю

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ALPHA] = LAYOUT_ortho_4x12_1x2uC(
    _Q, _W, _F, _P, _B, _, _, _J, _L, _U, _Y, _RZ,
    _N, _R, _S, _T, _G, _, _, _M, _A, _E, _I, _O,
    _Z, _X, _C, _D, _V, _, _, _K, _H, _RB, _RYU, _RJ,
    _, _, MO(_APP),
    LT(_NUMBER, Backspace), LT(_BRACES, Space),
    _,
    LT(_SYMBOL, Enter), LT(_NAVIGATION, Esc),
    _, _, _
),
[_NUMBER] = LAYOUT_ortho_4x12_1x2uC(
    _, _,  _0, _, _, _, _, _, _, _9, _, _,
    _, _1, _2, _3, _, _, _, _, _5, _6, _8, CODE_TO,
    _, _,  Tab, _4, _, _, _, _, _7, Ampersand, Pipe, CODE_ARRAY,
    _,  _,  _, _,  _, __, Up, Down, _, _, _
),
[_SYMBOL] = LAYOUT_ortho_4x12_1x2uC(
    _, BackSlash, Slash, Asterisk, _, _, _, _, Exlm, Question, Underscore, _,
    Equal, Tilda, Caret, Dollar, _, _, _, _, Dot, Comma, Quote, DQuote,
    _, Percent, Hash, At, _, _, _, _, Colon, Semicolon, Grave, _,
    _, _, _, Minus, Plus,  __,  _, _,  _, _, _
),
[_APP] = LAYOUT_ortho_4x12_1x2uC(
    KC_KB_POWER, QK_BOOT, _, _, _, _, _, _, _, _, _, _,
    _, _, _, _, _, _, _, _, _, _, _, _,
    _, _, _, _, _, _, _, _, _, _, _, _,
    _, _, _, _, _, __, _, _, _, _, _
),
    /*
     * KC_LBRC [ ] KC_RBRC
     * KC_LPRN ( ) KC_RPRN
     * KC_LCBR { } KC_RCBR
     * KC_LT < > KC_GT
     */
[_BRACES] = LAYOUT_ortho_4x12_1x2uC(
    _, _, KC_LBRC, KC_RBRC, PrntSc1, _, _, _, KC_LCBR, KC_RCBR, _, KC_CAPS,
    _, RGB_TOG, KC_LPRN, KC_RPRN, PrntSc2, _, _, _, Menu, Buffer, Pass, Commands,
    _, _, _RT, _RF, PrntSc3, _, _, _,             LightDec, LightInc, SoundDec, SoundInc,
    _, _, _, _, _, __, KC_LT, KC_GT, _, _, _
),
[_NAVIGATION] = LAYOUT_ortho_4x12_1x2uC(
    Fullscreen, PgUp, _,        PgDn,    _, _, _, _, _, _, _, _,
    Home, Left, _,      Right,   End,  _, _, _, PrevApp, NextWindow, Tmux, MO(_TG),
    _, WheelUp, WheelDown, Lang, Vpn, _, _, _,   Browser, Chat, Term,  WS_3,
    _,    _,    _,    Delete,    DELETE_LINE, __, _, _, _, _, _
),
[_TG] = LAYOUT_ortho_4x12_1x2uC(
    _, Monitor1, SCUp, Monitor2,         _, _, _, _,   _, _, _, _,
    _, SCLeft, SCDown, SCRight,   _, _, _, _,   _, _, _, _,
    _, _, _, _, _,         _, _,   _, _, _, _, _,
    _, _, _,      _,      _,          __,    _, _, _, _, _
),
// [_RECTANGLE] = LAYOUT_ortho_4x12_1x2uC(
//     _, Monitor1,  Fullscreen, Monitor2, _,  _, _, _,  _, _, _, _,
//     _, FPiP, ScratchpadMove, ScratchpadShow, _,  _, _, _,  _, _, _, _,
//     _, MPiP, MakeFloat, MoveFloat, _, _, _, _, _, _, _, _,
//     _,  _, _, _, _, __, _, _, _,  _,  _
// ),
// [_MOUSE] = LAYOUT_ortho_4x12_1x2uC(
//     _,       _,     MUp,   _,         _, _, _, _, _, _, _, _,
//     RightClick, MLeft, MDown, MRight, _, _, _, _, MSpeed1, MSpeed2, _, TG(_MOUSE),
//     _, WheelUp, WheelDown, LeftClick,  _, _, _, _, _, _, _, _,
//     _, _, _,WheelLeft, WheelRight, __, _, _, _, _, _
// ),
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // uint8_t layer = get_highest_layer(layer_state);

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED) {

                // uint8_t status = g_led_config.matrix_co[0][5];
                // switch (layer) {
                // case _MOUSE:
                //     rgb_matrix_set_color(status, 20, 20, 0);
                //     break;
                // }

                if (col == 5 || col == 6) {
                    rgb_matrix_set_color(index, 0, 0, 0);
                } else if (row == 3) {
                    if (col == 0 || col == 1 || col == 5 || col == 10 || col == 11) {
                        rgb_matrix_set_color(index, 0, 0, 0);
                    } else {
                        rgb_matrix_set_color(index, 40, 20, 0);
                    }
                } else {
                    rgb_matrix_set_color(index, 40, 0, 40);
                }

            }
        }
    }
    return true;
}
