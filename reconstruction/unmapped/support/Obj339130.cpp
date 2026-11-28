// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj339130::GetGroupTargetCount, treated as adapted: shaped like Cmd_GetGroupTargetCount_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:14525
// SPDX-License-Identifier: CC0-1.0
// 0x339130 Obj339130::GetGroupTargetCount
#include "Obj339130.h"

// Queries an actor's combat group target count and writes it as a double to result.
bool Obj339130::GetGroupTargetCount(Ref339130* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor339130* actor = (ref->formType == 0x3e) ? static_cast<Actor339130*>(ref) : nullptr;
        if (actor != nullptr) {
            Group339130* group = actor->GetCombatGroup();
            if (group != nullptr) {
                *result = static_cast<double>(group->targetCount);
            }
        }
    }
    return true;
}
