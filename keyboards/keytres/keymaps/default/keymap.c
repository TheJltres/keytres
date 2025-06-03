// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *  ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐
     *  │ª ││1 ││2 ││3 ││4 ││5 ││Ç │               │NO││6 ││7 ││8 ││9 ││0 ││NO│
     *  └──┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└──┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │Tab││q ││w ││e ││r ││t ││> │               │NO││y ││u ││i ││o ││p ││NO │
     * └───┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└───┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │Esc││a ││s ││d ││f ││g ││De│               │NO││h ││j ││k ││l ││; ││NO │
     * └───┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└───┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐                       ┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │L. ││z ││x ││c ││v ││b │                       │n ││m ││, ││. ││- ││NO │
     * └───┘└──┘└──┘└──┘└──┘└──┘                       └──┘└──┘└──┘└──┘└──┘└───┘
     *  ┌──┐┌──┐┌──┐┌──┐                                       ┌──┐┌──┐┌──┐┌──┐
     *  │GU││- ││+ ││NO│                                       │NO││* ││/ ││GU│
     *  └──┘└──┘└──┘└──┘                                       └──┘└──┘└──┘└──┘
     *                       ┌────┐┌────┐     ┌────┐┌────┐
     *                       │L. C││Spc │     │unde││unde│
     *                       └────┘└────┘     └────┘└────┘
     *                       ┌──┐  ┌──┐       ┌──┐  ┌──┐
     *                       │Pg│  │Pg│       │Ho│  │En│
     *                       └──┘  └──┘       └──┘  └──┘
     */
    [_QWERTY] = LAYOUT(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_BSLS,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_NUBS,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_DEL,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,
        KC_LGUI,    KC_PMNS,    KC_PPLS,    KC_NO,
                                                                    KC_LCTL,    KC_SPC,
                                                                    KC_PGDN,    KC_PGUP,

        KC_EQL,     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_NO,      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_NO,      KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
                    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                            KC_RALT,    KC_PAST,    KC_PSLS,    KC_LGUI,
        KC_LALT,    KC_BSPC,
        KC_END,     KC_HOME
    )
};
