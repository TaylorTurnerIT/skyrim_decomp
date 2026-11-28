// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x420820 Obj420820::ComputeWeightedEffect
// Adapted bodies: none
#include "Obj420820.h"

// Scales a_base by clamped weight ratio and positive actor value 30 percentage.
float Obj420820::ComputeWeightedEffect(Owner420820* a_owner, float a_base, float a_weight)
{
    float maxW = g_maxWeight420820;
    float clamped = (maxW < a_weight) ? maxW : a_weight;
    float factor = g_one420820 - ((clamped + g_minWeight420820) / (maxW - g_minWeight420820)) * g_mult420820;
    float result = factor * a_base;
    float av = a_owner->GetActorValue(30) * g_pctScale420820;
    if (av > 0.0f) {
        result *= av;
    }
    return result;
}
