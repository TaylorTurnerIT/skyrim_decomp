// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33e7e0::Function33e7e0, treated as adapted: shaped like the actor-gated condition functions such as Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// Obj33e7e0, Ref33e7e0, Actor33e7e0, Actor33e7e0::CheckCondition: GUESS(low)
#pragma once

#include <cstdint>

struct Ref33e7e0
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor33e7e0 : Ref33e7e0
{
    bool CheckCondition();
};

class Obj33e7e0
{
public:
    static bool Function33e7e0(Ref33e7e0* ref, void* param1, void* param2, double* result);
};
