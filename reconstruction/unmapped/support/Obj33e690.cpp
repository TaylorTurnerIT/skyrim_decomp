// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33e690::IsSmallBump, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// 0x33e690 Obj33e690::IsSmallBump
#include "Obj33e690.h"

// Writes 1.0 to result if an actor's process reports a small-bump state of 0, otherwise 0.0.
bool Obj33e690::IsSmallBump(Ref33e690* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor33e690* actor = (ref->formType == 0x3e) ? static_cast<Actor33e690*>(ref) : nullptr;
        if (actor != nullptr && actor->process != nullptr && actor->process->GetBumpState() == 0) {
            *result = 1.0;
        }
    }
    return true;
}
