// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj33b6f0::GetReplacedItemType, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// 0x33b6f0 Obj33b6f0::GetReplacedItemType
#include "Obj33b6f0.h"

// Queries an actor process's replaced item type and stores it as a double in result.
bool Obj33b6f0::GetReplacedItemType(Ref33b6f0* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor33b6f0* actor = (ref->formType == 0x3e) ? static_cast<Actor33b6f0*>(ref) : nullptr;
        if (actor != nullptr && actor->process != nullptr) {
            *result = static_cast<double>(actor->process->GetReplacedItemType());
        }
    }
    return true;
}
