// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj338700::IsEssential, treated as adapted: shaped like Script_IsEssentialConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:435
// SPDX-License-Identifier: CC0-1.0
// 0x338700 Obj338700::IsEssential
#include "Obj338700.h"

// Checks whether an actor reference is essential and stores 1.0 or 0.0 in result.
bool Obj338700::IsEssential(Ref338700* ref, void*, void*, double* result)
{
    *result = 0.0;
    Actor338700* actor = (ref->formType == 0x3e) ? static_cast<Actor338700*>(ref) : nullptr;
    if (actor != nullptr && actor->IsEssential(false)) {
        *result = 1.0;
    }
    return true;
}
