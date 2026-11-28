// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x420900 Obj420900::ComputeClampedEffect
// Adapted bodies: none
#include "Obj420900.h"

// Scales g_base420900 by clamped weight ratio and actor value 30, clamped at zero.
float Obj420900::ComputeClampedEffect(Owner420900* a_owner, float a_weight)
{
    float maxW = g_maxWeight420900;
    float clamped = (maxW < a_weight) ? maxW : a_weight;
    float factor = g_one420900 - ((clamped + g_minWeight420900) / (maxW - g_minWeight420900)) * g_mult420900;
    float result = factor * g_base420900;
    float av = a_owner->GetActorValue(30) * g_pctScale420900;
    if (av > 0.0f) {
        result *= av;
    }
    return (result > 0.0f) ? result : 0.0f;
}
