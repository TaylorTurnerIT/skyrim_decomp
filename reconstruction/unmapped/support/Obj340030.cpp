// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj340030::Function340030, treated as adapted: shaped like the actor-gated condition functions such as Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// 0x340030 Obj340030::Function340030
#include "Obj340030.h"

// Evaluates an actor boolean condition and writes 1.0 to result when true, otherwise 0.0.
bool Obj340030::Function340030(Ref340030* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor340030* actor = (ref->formType == 0x3e) ? static_cast<Actor340030*>(ref) : nullptr;
        if (actor != nullptr && actor->CheckState()) {
            *result = 1.0;
        }
    }
    return true;
}
