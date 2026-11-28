// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33e7e0::Function33e7e0, treated as adapted: shaped like the actor-gated condition functions such as Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// 0x33e7e0 Obj33e7e0::Function33e7e0
#include "Obj33e7e0.h"

// Evaluates an actor boolean predicate and writes 1.0 or 0.0 to result.
bool Obj33e7e0::Function33e7e0(Ref33e7e0* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor33e7e0* actor = (ref->formType == 0x3e) ? static_cast<Actor33e7e0*>(ref) : nullptr;
        if (actor != nullptr) {
            *result = actor->CheckCondition() ? 1.0 : 0.0;
        }
    }
    return true;
}
