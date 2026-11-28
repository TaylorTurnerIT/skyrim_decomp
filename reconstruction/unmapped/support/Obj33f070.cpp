// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// Adapted bodies: none
// SPDX-License-Identifier: CC0-1.0
// 0x33f070 Obj33f070::IsAttackType
#include "Obj33f070.h"

// Checks whether an actor's current attack data matches the specified keyword and stores 1.0 or 0.0.
bool Obj33f070::IsAttackType(Ref33f070* ref, void* keyword, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr) {
        Actor33f070* actor = (ref->formType == 0x3e) ? static_cast<Actor33f070*>(ref) : nullptr;
        if (actor != nullptr) {
            AttackData33f070* attack = actor->GetAttackData().ptr;
            *result = (attack != nullptr && attack->attackTypeKeyword == keyword) ? 1.0 : 0.0;
        }
    }
    return true;
}
