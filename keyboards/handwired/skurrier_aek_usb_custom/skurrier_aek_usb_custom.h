// Copyright 2022 Julian Calaby (@SkUrRiEr)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define NONE KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define KEYMAP( \
    KESC,       K0F1, K0F2, K0F3, K0F4,    K0F5, K0F6, K0F7, K0F8,    K0F9, KF10, KF11, KF12,    KPRT, KSCL, KPAU,                      KPWR, \
    KTLD, K001, K002, K003, K004, K005, K006, K007, K008, K009, K000, KMIN, KEQL,    KBKS,       KINS, KHOM, KPUP,    KNUM, KKSL, KKST, KKEQ, \
      KTAB,  K00Q, K00W, K00E, K00R, K00T, K00Y, K00U, K00I, K00O, K00P, KLSB, KRSB,   KBSL,     KDEL, KEND, KPDN,    KK07, KK08, KK09, KKMN, \
        KCAP,  K00A, K00S, K00D, K00F, K00G, K00H, K00J, K00K, K00L, KCLN, KAPS,     KENT,                            KK04, KK05, KK06, KKPL, \
          KLSH,   K00Z, K00X, K00C, K00V, K00B, K00N, K00M, KCOM, KPER, KSLS,     KRSH,                K0UP,          KK01, KK02, KK03,       \
      KLCT,  KLAT,    KLAP,                  KSPC,                    KRAP,   KRAT,    KRCT,     KLFT, KDWN, KRHT,       KK00,    KKPR, KKEN  \
) { /*   0     1     2     3     4     5     6     7     8     9    10    11    12    13    14 */ \
    { KPAU, K00Q, K00W, K00E, K00R, K00U, K00I, K00O, K00P, KSCL, NONE, KK07, KK08, KK09, KKPL }, /* 0 */ \
    { KPWR, KTAB, KCAP, K0F3, K00T, K00Y, KRSB, K0F7, KLSB, KLSH, KBKS, KK04, KK05, KK06, KLAT }, /* 1 */ \
    { KRAT, K00A, K00S, K00D, K00F, K00J, K00K, K00L, KCLN, KRSH, KBSL, KK01, KK02, KK03, KKEN }, /* 2 */ \
    { NONE, KESC, NONE, K0F4, K00G, K00H, K0F6, NONE, KAPS, KLAP, KF11, KSPC, KK00, KKPR, K0UP }, /* 3 */ \
    { KRCT, K00Z, K00X, K00C, K00V, K00M, KCOM, KPER, NONE, NONE, KENT, KNUM, KKSL, KKST, KKEQ }, /* 4 */ \
    { NONE, NONE, NONE, NONE, K00B, K00N, NONE, NONE, KSLS, KRAP, KF12, KDWN, KRHT, KKMN, KLFT }, /* 5 */ \
    { KLCT, KTLD, K0F1, K0F2, K005, K006, KEQL, K0F8, KMIN, NONE, K0F9, KDEL, KINS, KPUP, KHOM }, /* 6 */ \
    { K0F5, K001, K002, K003, K004, K007, K008, K009, K000, KPRT, KF10, NONE, NONE, KPDN, KEND }  /* 7 */ \
}
