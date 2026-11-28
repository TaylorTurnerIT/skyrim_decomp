// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj420820, Owner420820, g_maxWeight420820, g_minWeight420820, g_mult420820, g_one420820, g_pctScale420820, ComputeWeightedEffect, GetActorValue: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_maxWeight420820;
extern float g_minWeight420820;
extern float g_mult420820;
extern const float g_one420820;
extern const float g_pctScale420820;

class Owner420820
{
public:
    virtual void Slot00() = 0;
    virtual float GetActorValue(std::int32_t a_av) = 0;
};

class Obj420820
{
public:
    static float ComputeWeightedEffect(Owner420820* a_owner, float a_base, float a_weight);  // compared: 0x420820
};
