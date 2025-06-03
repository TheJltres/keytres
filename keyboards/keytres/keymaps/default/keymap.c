// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_ES_LBRC = SAFE_RANGE,
    KC_ES_RBRC,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_ES_LBRC:
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(S(KC_LBRC));
                } else {
                    tap_code(KC_LBRC);
                }
                return false;
            case KC_ES_RBRC:
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(S(KC_RBRC));
                } else {
                    tap_code(KC_RBRC);
                }
                return false;
        }
    }

    return true;
}

enum layers {
    _QWERTY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *  ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐
     *  │ª ││1 ││2 ││3 ││4 ││5 ││Ç │               │¡¿││6 ││7 ││8 ││9 ││0 ││' │
     *  └──┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└──┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │Tab││q ││w ││e ││r ││t ││<>│               │]}││y ││u ││i ││o ││p ││`  │
     * └───┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└───┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐               ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │Esc││a ││s ││d ││f ││g ││De│               │{[││h ││j ││k ││l ││; ││'  │
     * └───┘└──┘└──┘└──┘└──┘└──┘└──┘               └──┘└──┘└──┘└──┘└──┘└──┘└───┘
     * ┌───┐┌──┐┌──┐┌──┐┌──┐┌──┐                       ┌──┐┌──┐┌──┐┌──┐┌──┐┌───┐
     * │L.S││z ││x ││c ││v ││b │                       │n ││m ││, ││. ││- ││R.S│
     * └───┘└──┘└──┘└──┘└──┘└──┘                       └──┘└──┘└──┘└──┘└──┘└───┘
     *  ┌──┐┌──┐┌──┐┌──┐                                       ┌──┐┌──┐┌──┐┌──┐
     *  │GU││- ││+ ││NO│                                       │GR││* ││/ ││GU│
     *  └──┘└──┘└──┘└──┘                                       └──┘└──┘└──┘└──┘
     *                       ┌────┐┌────┐     ┌────┐┌────┐
     *                       │Spc ││LCtl│     │Bspc││LAlt│
     *                       └────┘└────┘     └────┘└────┘
     *                       ┌──┐  ┌──┐       ┌──┐  ┌──┐
     *                       │Pd│  │Pu│       │Ho│  │En│
     *                       └──┘  └──┘       └──┘  └──┘
     */
    [_QWERTY] = LAYOUT(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_BSLS,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_NUBS,
        KC_ESC,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_DEL,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,
        KC_LGUI,    KC_PMNS,    KC_PPLS,    KC_NO,
                                                                    KC_SPC,     KC_LCTL,
                                                                    KC_PGDN,    KC_PGUP,

        KC_EQL,     KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
        KC_ES_RBRC, KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_ES_LBRC, KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
                    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                                            KC_RALT,    KC_PAST,    KC_PSLS,    KC_LGUI,
        KC_BSPC,    KC_LALT,
        KC_END,     KC_HOME
    )
};
