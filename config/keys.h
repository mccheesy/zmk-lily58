#pragma once

#include <dt-bindings/zmk/keys.h>

#define XXX &none
#define ___ &trans

#define UK_REDO  &kp LC(LS(Z))
#define UK_PASTE &kp LC(V)
#define UK_COPY  &kp LC(C)
#define UK_CUT   &kp LC(X)
#define UK_UNDO  &kp LC(Z)

#define SPC SPACE
#define PSCR PSCRN

#define MS_WHLL &msc SCRL_LEFT
#define MS_WHLR &msc SCRL_RIGHT
#define MS_WHLD &msc SCRL_DOWN
#define MS_WHLU &msc SCRL_UP

#define MS_MMVL &mmv MOVE_LEFT
#define MS_MMVR &mmv MOVE_RIGHT
#define MS_MMVD &mmv MOVE_DOWN
#define MS_MMVU &mmv MOVE_UP

#define S_T(keycode) &mt LSHFT keycode
#define C_T(keycode) &mt LCTL keycode
#define A_T(keycode) &mt LALT keycode
#define G_T(keycode) &mt LGUI keycode
