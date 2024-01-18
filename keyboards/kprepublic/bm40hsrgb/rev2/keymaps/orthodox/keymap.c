#include QMK_KEYBOARD_H

enum layers {
  _ALPHA,
  _PS1,
  _GAME,
  _FN,
  _SYMBOL,
  _NUMBER,
  _NAVIGATION,
  _TG,
  _MOUSE,
  _APP,
  _APP2,
  _RECTANGLE,
};

enum my_keycodes {
  CODE_ARRAY = SAFE_RANGE,
  CODE_TO,
};

#undef _______
#define _ KC_NO
#define __ KC_NO
#define ____ KC_NO
#define _______ KC_NO
#define ________________ KC_NO

#define _Q KC_Q
#define _W KC_W
#define _F KC_F
#define _P KC_P
#define _B KC_B
#define _J KC_J
#define _L KC_L
#define _Y KC_Y
#define _U KC_U
#define _A CTL_T(KC_A)
#define _R KC_R
#define _S ALT_T(KC_S)
#define _T CTL_T(KC_T)
#define _G KC_G
#define _M KC_M
#define _N KC_N
#define _E ALT_T(KC_E)
#define _I KC_I
#define _O KC_O
#define _Z KC_Z
#define _X KC_X
#define _C KC_C
#define _D CMD_T(KC_D)
#define _V KC_V
#define _K KC_K
#define _H CMD_T(KC_H)

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
#define Lang LCMD(Space)
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
#define Dot KC_PDOT
#define Comma KC_COMM
#define Quote KC_QUOT
#define DQuote KC_DQUO
#define Pipe KC_PIPE
#define Colon KC_COLN
#define Semicolon KC_SCLN
#define Caret KC_CIRC
#define Dollar KC_DLR

// #define LightDec HYPR(KC_3)
// #define LightInc HYPR(KC_4)
// #define SoundDec HYPR(KC_5)
// #define SoundInc HYPR(KC_6)
#define LightDec KC_F1
#define LightInc KC_F2
#define SoundDec KC_F11
#define SoundInc KC_F12

#define PrntSc1 HYPR(KC_1)
#define PrntSc2 HYPR(KC_2)

#define NewLine LSFT(Enter)
#define DelWord LALT(Backspace)
#define DelLine LCMD(Backspace)

#define Alfred HYPR(Space)
#define AlfredPrev HYPR(KC_F)
#define AlfredActions HYPR(KC_A)
#define Buffer HYPR(KC_V)
#define FPiP LCMD(LSFT(LALT(KC_RBRC))) // Firefox. Picture-in-Picture
#define OpenTerm HYPR(KC_S)
#define OpenBrowser HYPR(KC_B)
#define OpenMpv HYPR(KC_M)
#define OpenTg HYPR(KC_G)
#define PrevApp LCMD(KC_TAB)

#define Tmux LCTL(KC_A)
#define ViW LCTL(KC_W)
#define Smaller LCMD(Minus)
#define Bigger LCMD(Equal)
#define Settings LCMD(Comma)
#define MoveToBin LCMD(Backspace)
#define Homerow LCMD(LSFT(Space))
#define Scroll LCMD(LSFT(KC_J))
#define kindaVim HYPR(KC_N)

#define LeftHalf LCAG(Left)
#define RightHalf LCAG(Right)
#define WinSmaller LCAG(Minus)
#define WinLarger LCAG(Equal)
#define TopLeft LCAG(KC_4)
#define TopRight LCAG(KC_5)
#define BottomLeft LCAG(KC_6)
#define BottomRight LCAG(KC_7)
#define NudgeUp LCAG(KC_8)
#define NudgeDown LCAG(KC_9)
#define Maximixe LCAG(_M)
#define Last LCAG(_L)
#define Fullscreen LCMD(LCTL(_F))
#define WezTermFs LALT(Enter)

// PS1
#define L1 KC_W
#define L2 KC_F
#define R2 KC_P
#define PU KC_B
#define R1 KC_N
#define PL KC_R
#define PD KC_S
#define PR KC_T
#define LSC KC_G
#define LSU KC_Z
#define Select KC_X
#define Start KC_C
#define RSU KC_D
#define RSC KC_V
#define LSL KC_J
#define LSD KC_L
#define LSR KC_U
#define RSL KC_Y
#define RSD KC_M
#define RSR KC_A
#define Analog KC_E

#define FN1 KC_F1
#define FN2 KC_F2
#define FN3 KC_F3
#define FN4 KC_F4
#define FN5 KC_F5
#define FN6 KC_F6
#define FN7 KC_F7
#define FN8 KC_F8
#define FN9 KC_F9
#define FN10 KC_F10
#define FN11 KC_F11
#define FN12 KC_F12

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case _T:
        case _D:
        case _A:
        case _H:
        case _S:
        case _E:
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
    default:
      return true; // Process all other keycodes normally
  }
}

#define _RF LALT(KC_1)  // ф
// #define _RYA LALT(KC_2) // я
#define _RJ LALT(KC_3)  // ж
#define _RZ LALT(KC_4)  // з
#define _RT LALT(KC_5)  // ъ
// #define _RE LALT(KC_6)  // э
#define _RB LALT(KC_7)  // б
#define _RYU LALT(KC_8)  // ю

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ALPHA] = LAYOUT_ortho_4x12_1x2uC(
    _Q, _W, _F, _P, _B, _, _, _J, _L, _U, _Y, _RZ,
    _N, _R, _S, _T, _G, _, _, _M, _A, _E, _I, _O,
    _Z, _X, _C, _D, _V, _, _, _K, _H, _RB, _RYU, _RJ,
    _, _,
    MO(_APP), LT(_NUMBER, Backspace), MT(MOD_LSFT, Space),
    __,
    LT(_SYMBOL, Enter), LT(_NAVIGATION, Esc), MO(_APP2), _, _
),
[_GAME] = LAYOUT_ortho_4x12_1x2uC(
    Esc, LeftClick, _W, RightClick, _, _, _, _1, _2, _3, _4, TG(_GAME),
    Tab, KC_A, _S, KC_D, _, _, _, _, Space, _, _I, _O,
    _, _, _, _, Backspace, _, _, _, _, _, _, _,
    _, _,
    MO(_APP), LT(_NUMBER, Backspace), MT(MOD_LSFT, Space),
    __,
    LT(_SYMBOL, Enter), LT(_NAVIGATION, Esc), MO(_APP2), _, _
),
[_PS1] = LAYOUT_ortho_4x12_1x2uC(
    Analog, L1, Up, L2, _, _, _, _,    R2, PU, R1, _,
    _, Left, Down, Right, _, _, _, PU, PL, PD, PR, TG(_PS1),
    _, _, LSC, LSU, Select, _, _, Start, RSU, RSC, _, _,
    _, _, LSL, LSD, LSR, __,        RSL, RSD, RSR, _, _
),
[_NUMBER] = LAYOUT_ortho_4x12_1x2uC(
    /*
     * KC_LBRC [ ] KC_RBRC
     * KC_LPRN ( ) KC_RPRN
     * KC_LCBR { } KC_RCBR
     * KC_LT < > KC_GT
     */
    _, KC_LPRN,  _0, KC_RPRN, _, _, _, _, KC_LCBR, _9, KC_RCBR, _,
    KC_LBRC, _1, _2, _3, _, _, _, _, _5, _6, _8, KC_RBRC,
    _, KC_LT,  KC_GT, _4, _, _, _, _, _7, CODE_TO, CODE_ARRAY, _,
    _,  _,  _, _,  _, __, Command, Control, Tab, _, _
),
[_SYMBOL] = LAYOUT_ortho_4x12_1x2uC(
    _, Minus, Slash, Asterisk,   _, _, _, _,   Exlm, Question, Underscore, _,
    Equal, BackSlash, Caret, Dollar, Ampersand, _, _, Tilda,   Dot, Comma, Quote, DQuote,
    _, Percent, Hash, At, Pipe, _, _, Grave,   Colon, Semicolon, Plus, _,
    _, _, _, _, _,  _,  _, _,  _, _, _
),
[_APP] = LAYOUT_ortho_4x12_1x2uC(
    _, QK_BOOT, AlfredActions, AlfredPrev, _, _, _, _, PrntSc1, PrntSc2, FPiP, _,
    _, _, Buffer, Alfred, _, _, _, _, LightDec, LightInc, SoundDec, SoundInc,
    _, _, _, _, _, _, _, MoveToBin, Smaller, Bigger, Settings, _,
    _, _, _, TG(_APP),    _,   __, _, _, _, _, _
),
[_APP2] = LAYOUT_ortho_4x12_1x2uC(
    _, ViW, _, OpenMpv, _, _, _, _, _, RGB_TOG, _, _,
    kindaVim, _RT, OpenTerm, OpenTg, Homerow, _, _, _, Tmux, _, _, _,
    _, _, Scroll, _RF, _, _, _, _, _, _, _, _,
    _, _, _, _, KC_LSFT,  __, _,  _, _, _, _
),
[_NAVIGATION] = LAYOUT_ortho_4x12_1x2uC(
    _, PgUp, Up,        PgDn,    _, _, _, _, TG(_MOUSE),       MO(_TG), MO(_RECTANGLE),   _,
    NewLine, Left, Down,      Right,   Home,  _, _, TG(_GAME), PrevApp, NextWindow, Alt,  Command,
    _, WheelDown, WheelUp, Lang, End, _, _, TG(_PS1),           Shift, TG(_FN),  _,  _,
             _,    _,         Delete, DelWord,    DelLine, __, _, _, _, _, _
),
[_TG] = LAYOUT_ortho_4x12_1x2uC(
    _, _,      SCUp,   _,         _, _, _, _,   _, _, _, _,
    _, SCLeft, SCDown, SCRight,   _, _, _, _,   _, _, _, _,
    _, _, _,      _,      _,         _, _,   _, _, _, _, _,
    _, _, _,      _,      _,          __,    _, _, _, _, _
),
[_RECTANGLE] = LAYOUT_ortho_4x12_1x2uC(
    _, TopLeft,  Fullscreen, TopRight, _,  _, _, _,  _, _, _, _,
    Last, LeftHalf, Maximixe, RightHalf, NudgeUp,  _, _, _,  _, _, _, _,
    _, BottomLeft, WezTermFs, BottomRight, NudgeDown, _, _, _, _, _, _, _,
    _,  _, _, WinSmaller, WinLarger, __, _, _, _,  _,  _
),
[_MOUSE] = LAYOUT_ortho_4x12_1x2uC(
    _,       _,     MUp,   _,         _, _, _, _, _, _, _, _,
    RightClick, MLeft, MDown, MRight, _, _, _, _, MSpeed0, MSpeed1, MSpeed2, TG(_MOUSE),
    _, WheelUp, WheelDown, LeftClick,  _, _, _, _, _, _, _, _,
    _,       _,     _,     _, _, __, _, _, _, _, _
),
[_FN] = LAYOUT_ortho_4x12_1x2uC(
    KC_LALT, _, FN10, _, _, _, _, _, _, FN9, _, _,
    KC_LCTL, FN1, FN2, FN3, _, _, _, _, FN5, FN6, FN8, TG(_FN),
    KC_LSFT, FN11, FN12, FN4, _, _, _, _, FN7, _, _, _,
    _, _,
    MO(_APP), LT(_NUMBER, Backspace), MT(MOD_LSFT, Space),
    __,
    LT(_SYMBOL, Enter), LT(_NAVIGATION, Esc), MO(_APP2), _, _
),
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);

    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
        for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index < led_max && index != NO_LED) {

                uint8_t status = g_led_config.matrix_co[0][5];
                switch (layer) {
                case _GAME:
                    rgb_matrix_set_color(status, 0, 20, 20);
                    break;
                case _MOUSE:
                    rgb_matrix_set_color(status, 20, 20, 0);
                    break;
                }

                if (col == 5 || col == 6) {
                    rgb_matrix_set_color(index, 0, 0, 0);
                } else if (row == 3) {
                    if (col == 0 || col == 1 || col == 5 || col == 10 || col == 11) {
                        rgb_matrix_set_color(index, 0, 0, 0);
                    } else {
                        rgb_matrix_set_color(index, 40, 20, 0);
                    }
                } else {
                    switch (layer) {
                    case _PS1:
                        // Silent Hill mode
                        rgb_matrix_set_color(index, 40, 0, 0);
                    case _FN:
                        rgb_matrix_set_color(index, 20, 20, 0);
                    break;
                    default:
                        rgb_matrix_set_color(index, 40, 0, 40);
                    }
                }

            }
        }
    }
    return true;
}
