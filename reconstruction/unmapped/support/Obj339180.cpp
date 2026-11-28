// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj339180::GetPlantedExplosive, treated as adapted: shaped like Cmd_GetPlantedExplosive_Eval in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:3636
// SPDX-License-Identifier: CC0-1.0
// 0x339180 Obj339180::GetPlantedExplosive
#include "Obj339180.h"

// Queries whether an actor's process has a planted explosive and stores the flag as a double in result.
bool Obj339180::GetPlantedExplosive(Ref339180* ref, void*, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor339180* actor = (ref->formType == 0x3e) ? static_cast<Actor339180*>(ref) : nullptr;
        if (actor != nullptr && actor->process != nullptr) {
            *result = static_cast<double>(actor->process->HasPlantedExplosive());
        }
    }
    return true;
}
