// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj41f9e0, ComputeScaledValue, g_multA41f9e0, g_scale41f9e0, g_baseA41f9e0, g_multB41f9e0, g_baseB41f9e0: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_multA41f9e0;
extern const float g_scale41f9e0;
extern float g_baseA41f9e0;
extern float g_multB41f9e0;
extern float g_baseB41f9e0;

class Obj41f9e0
{
public:
    float ComputeScaledValue(std::int32_t a_level) const;  // compared: 0x41f9e0
};
