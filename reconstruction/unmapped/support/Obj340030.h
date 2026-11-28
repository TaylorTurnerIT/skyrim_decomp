// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj340030::Function340030, treated as adapted: shaped like the actor-gated condition functions such as Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// Obj340030, Ref340030, Actor340030, Actor340030::CheckState: GUESS(low)
#pragma once

#include <cstdint>

struct Ref340030
{
    std::uint8_t unk00[0x1a];
    std::uint8_t formType;
};

struct Actor340030 : Ref340030
{
    bool CheckState();
};

class Obj340030
{
public:
    static bool Function340030(Ref340030* ref, void* param1, void* param2, double* result);
};
