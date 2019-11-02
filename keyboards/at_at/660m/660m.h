#pragma once

#include "quantum.h"

#define KNO KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D,      k0F, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D,      k1F, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2D, \
    k30,      k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C,      k3E, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D, k4E, k4F \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, KNO, k0F }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, KNO, k1F }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, KNO, k2D, KNO, KNO }, \
    { k30, KNO, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, KNO, k3E, KNO }, \
    { k40, k41, k42, KNO, KNO, KNO, k46, KNO, KNO, KNO, k4A, k4B, k4C, k4D, k4E, k4F }  \
}
