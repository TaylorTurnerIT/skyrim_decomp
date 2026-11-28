// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x421ed0 Obj421ed0::ComputeQuadraticScore
// Adapted bodies: none
#include "Obj421ed0.h"

// Computes a quadratic ratio adjustment scaled by a_a and offset by a_d.
float Obj421ed0::ComputeQuadraticScore(std::int32_t a_a, std::int32_t a_b, float a_c, std::int32_t a_d)
{
    float factor = 1.0f;
    if (a_b > 0) {
        float ratio = a_c / static_cast<float>(a_b);
        factor = 1.0f - ratio * ratio;
    }

    return (g_mult1_421ed0 * factor * static_cast<float>(a_a) + g_base421ed0) - static_cast<float>(a_d) * g_mult2_421ed0;
}
