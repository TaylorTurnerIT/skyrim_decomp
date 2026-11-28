// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x4219d0 Obj4219d0::ComputeInterpolatedSetting
// Adapted bodies: none
#include "Obj4219d0.h"

// Interpolates between two global settings using a shifted linear weight, with a lower bound of 1.0.
float Obj4219d0::ComputeInterpolatedSetting(float a_value)
{
    float minVal;
    float range;
    if (g_minSetting4219d0 && g_maxSetting4219d0) {
        minVal = g_minSetting4219d0->value;
        range = g_maxSetting4219d0->value - minVal;
    } else {
        minVal = 1.0f;
        range = 0.0f;
    }

    float result = (((a_value - g_offset4219d0) * g_mult4219d0 + 1.0f) * g_hundredth4219d0) * range + minVal;
    return (result > 1.0f) ? result : 1.0f;
}
