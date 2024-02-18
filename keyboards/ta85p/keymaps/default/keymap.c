// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _ZUSI
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────────────────────────┬─────────────────────────┬─────────────────────────┬────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     * │                         │                         │                         │            │            │            │  PZB BEFE  │  PZB FREI  │  PZB WACH  │
     * │   SIFA                  ├─────────────────────────┼─────────────────────────┼────────────┴────────────┼────────────┴────────────┼────────────┴────────────┤
     * │                         │                         │                         │                         │                         │                         │
     * ├─────────────────────────┼─────────────────────────┼─────────────────────────┤         AFB UP          │    THROTTLE INCREASE    ├─────────────────────────┤
     * │                         │                         │                         │                         │                         │                         │
     * ├─────────────────────────┼────────────┬────────────┼────────────┬────────────┼─────────────────────────┼─────────────────────────┼─────────────────────────┤
     * │                         │     7      │     8      │     9      │     C      │                         │                         │                         │
     * ├─────────────────────────┼────────────┼────────────┼────────────┼────────────┤        AFB RESET        │      THROTTLE RESET     │     BRAKE INCREASE      │
     * │                         │     4      │     5      │     6      │     E      │                         │                         │                         │
     * ├─────────────────────────┼────────────┼────────────┼────────────┼────────────┼─────────────────────────┼─────────────────────────┼─────────────────────────┤
     * │                         │     1      │     2      │     3      │            │                         │                         │                         │
     * ├────────────┬────────────┼────────────┴────────────┴────────────┼────────────┤        AFB DOWN         │    THROTTLE DECREASE    │     BRAKE DECREASE      │
     * │ REV        │ FWD        │                 ZERO                 │            │                         │                         │                         │     
     * └────────────┴────────────┴──────────────────────────────────────┴────────────┴─────────────────────────┴─────────────────────────┴─────────────────────────┘
     */
    [_ZUSI] = LAYOUT(
        KC_SPC,      XXXXXXX,     KC_NO,       XXXXXXX,     KC_NO,       XXXXXXX,     KC_NO,       KC_NO,       KC_NO,       KC_KP_0,     KC_KP_DOT,   KC_KP_ENTER,
        XXXXXXX,     XXXXXXX,     KC_NO,       XXXXXXX,     KC_NO,       XXXXXXX,     KC_KP_7,     XXXXXXX,     KC_KP_8,     XXXXXXX,     KC_NO,       XXXXXXX,
        KC_NO,       XXXXXXX,     KC_NO,       XXXXXXX,     KC_NO,       XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     KC_NO,       XXXXXXX,
        KC_NO,       XXXXXXX,     KC_7,        KC_8,        KC_9,        KC_C,        KC_KP_4,     XXXXXXX,     KC_KP_5,     XXXXXXX,     KC_KP_PLUS,  XXXXXXX,
        KC_NO,       XXXXXXX,     KC_4,        KC_5,        KC_6,        KC_E,        XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,
        KC_NO,       XXXXXXX,     KC_1,        KC_2,        KC_3,        KC_NO,       KC_KP_1,     XXXXXXX,     KC_KP_2,     XXXXXXX,     KC_KP_MINUS, XXXXXXX,
        KC_PGDN,     KC_PGUP,     KC_0,        XXXXXXX,     XXXXXXX,     KC_NO,       XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX
    )
};
