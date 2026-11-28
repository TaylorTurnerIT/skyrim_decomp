// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj41fcf0, g_base41fcf0, g_exp41fcf0, g_one41fcf0, g_hundredth41fcf0, g_mult1_41fcf0, g_mult2_41fcf0, ComputeDecayFormula: GUESS(low) STANDIN
#pragma once

extern "C" float powf(float a_base, float a_exp);

extern float g_base41fcf0;
extern float g_exp41fcf0;
extern const float g_one41fcf0;
extern const float g_hundredth41fcf0;
extern float g_mult1_41fcf0;
extern float g_mult2_41fcf0;

class Obj41fcf0
{
public:
    static float ComputeDecayFormula(float a_a, float a_b, float a_c, float a_d, float a_e);  // compared: 0x41fcf0
};
