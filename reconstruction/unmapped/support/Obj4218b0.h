// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj4218b0, g_multA4218b0, g_expA4218b0, g_one4218b0, g_expB4218b0, g_multB4218b0, ComputePowerProduct: GUESS(low) STANDIN
#pragma once

extern "C" float powf(float a_base, float a_exp);

extern float g_multA4218b0;
extern float g_expA4218b0;
extern const float g_one4218b0;
extern float g_expB4218b0;
extern float g_multB4218b0;

class Obj4218b0
{
public:
    static float ComputePowerProduct(float a_x, float a_y);  // compared: 0x4218b0
};
