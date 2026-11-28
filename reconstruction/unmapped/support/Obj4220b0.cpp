// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x4220b0 Obj4220b0::ComputeKindFactor
// Adapted bodies: none
#include "Obj4220b0.h"

// Computes a linear float factor when a_kind equals 0x3F, otherwise returns g_default4220b0.
float Obj4220b0::ComputeKindFactor(std::int32_t a_kind, float a_a, float a_b)
{
    if (a_kind == 0x3F) {
        return (g_scale4220b0 * a_b + g_base4220b0) * a_a;
    }
    return g_default4220b0;
}
