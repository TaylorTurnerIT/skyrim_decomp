// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj4220b0, g_scale4220b0, g_base4220b0, g_default4220b0, ComputeKindFactor: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_scale4220b0;
extern float g_base4220b0;
extern float g_default4220b0;

class Obj4220b0
{
public:
    static float ComputeKindFactor(std::int32_t a_kind, float a_a, float a_b);  // compared: 0x4220b0
};
