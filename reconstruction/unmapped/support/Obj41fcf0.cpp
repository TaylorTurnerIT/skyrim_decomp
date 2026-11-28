// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x41fcf0 Obj41fcf0::ComputeDecayFormula
// Adapted bodies: none
#include "Obj41fcf0.h"

// Computes a power-law decay factor applied to a weighted difference and ratio.
float Obj41fcf0::ComputeDecayFormula(float a_a, float a_b, float a_c, float a_d, float a_e)
{
    float diff = a_e - g_base41fcf0;
    float clamped = (diff > 0.0f) ? diff : 0.0f;
    float decay = powf(1.0f / (clamped * g_hundredth41fcf0 + 1.0f), g_exp41fcf0);
    return decay * ((a_a - a_b) * g_mult1_41fcf0 + (a_d / a_c) * g_mult2_41fcf0);
}
