// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x4218b0 Obj4218b0::ComputePowerProduct
// Adapted bodies: none
#include "Obj4218b0.h"

// Computes the product of two power-law terms of the input parameters.
float Obj4218b0::ComputePowerProduct(float a_x, float a_y)
{
    float termY = g_one4218b0 - powf(g_multA4218b0 * a_y, g_expA4218b0);
    float termX = powf(a_x, g_expB4218b0) * g_multB4218b0;
    return termY * termX;
}
