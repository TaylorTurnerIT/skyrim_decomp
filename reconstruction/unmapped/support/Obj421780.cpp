// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj421780::ComputeWeightedTerm, treated as adapted: shaped like a switch that selects one of several globals in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00400000_o2.cpp:12157
// SPDX-License-Identifier: CC0-1.0
// 0x421780 Obj421780::ComputeWeightedTerm
#include "Obj421780.h"

// Selects a per-kind float weight and scales a linear combination of two inputs.
float Obj421780::ComputeWeightedTerm(float a_a, std::int32_t a_kind, float a_b)
{
    float mult = 0.0f;
    switch (a_kind) {
    case 0:
        mult = g_mult0_421780;
        break;
    case 1:
        mult = g_mult1_421780;
        break;
    case 2:
        mult = g_mult2_421780;
        break;
    case 3:
        mult = g_mult3_421780;
        break;
    case 4:
        mult = g_mult4_421780;
        break;
    default:
        break;
    }

    return (g_scale421780 * a_a + g_base421780) * (mult * a_b);
}
