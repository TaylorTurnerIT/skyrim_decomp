// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj420900, Owner420900, g_maxWeight420900, g_minWeight420900, g_mult420900, g_base420900, g_one420900, g_pctScale420900, ComputeClampedEffect, GetActorValue: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_maxWeight420900;
extern float g_minWeight420900;
extern float g_mult420900;
extern float g_base420900;
extern const float g_one420900;
extern const float g_pctScale420900;

class Owner420900
{
public:
    virtual void Slot00() = 0;
    virtual float GetActorValue(std::int32_t a_av) = 0;
};

class Obj420900
{
public:
    static float ComputeClampedEffect(Owner420900* a_owner, float a_weight);  // compared: 0x420900
};
