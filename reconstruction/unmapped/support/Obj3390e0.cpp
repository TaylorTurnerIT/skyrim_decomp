// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3390e0::GetGroupMemberCount, treated as adapted: shaped like Cmd_GetGroupMemberCount_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:17345
// SPDX-License-Identifier: CC0-1.0
// 0x3390e0 Obj3390e0::GetGroupMemberCount
#include "Obj3390e0.h"

// Queries an actor's combat group count and writes it as a double to result.
bool Obj3390e0::GetGroupMemberCount(Ref3390e0* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor3390e0* actor = (ref->formType == 0x3e) ? static_cast<Actor3390e0*>(ref) : nullptr;
        if (actor != nullptr) {
            Group3390e0* group = actor->GetCombatGroup();
            if (group != nullptr) {
                *result = static_cast<double>(group->memberCount);
            }
        }
    }
    return true;
}
