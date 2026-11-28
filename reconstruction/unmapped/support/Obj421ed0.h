// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj421ed0, g_mult1_421ed0, g_base421ed0, g_mult2_421ed0, ComputeQuadraticScore: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_mult1_421ed0;
extern float g_base421ed0;
extern float g_mult2_421ed0;

class Obj421ed0
{
public:
    static float ComputeQuadraticScore(std::int32_t a_a, std::int32_t a_b, float a_c, std::int32_t a_d);  // compared: 0x421ed0
};
