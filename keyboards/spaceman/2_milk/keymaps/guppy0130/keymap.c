#include QMK_KEYBOARD_H

enum custom_keycodes { GG = SAFE_RANGE, EZ };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GG:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(100) "gg" SS_TAP(X_ENTER));
            }
            break;
        case EZ:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(100) "ez" SS_TAP(X_ENTER));
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT(
        EZ,
        GG
    ),
    // clang-format on
};
