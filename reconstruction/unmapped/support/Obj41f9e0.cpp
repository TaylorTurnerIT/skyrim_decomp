// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x41f9e0 Obj41f9e0::ComputeScaledValue
// Adapted bodies: none
#include "Obj41f9e0.h"

// Computes a level-scaled float value from two linear setting expressions.
float Obj41f9e0::ComputeScaledValue(std::int32_t a_level) const
{
    float factor = g_multA41f9e0 * g_scale41f9e0 + g_baseA41f9e0;
    float levelTerm = static_cast<float>(a_level) * g_multB41f9e0 + g_baseB41f9e0;
    return factor * levelTerm;
}
