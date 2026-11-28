// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x377d80 Obj377d80::DebugCombatBehavior
#include "Obj377d80.h"

// Triggers combat behavior debugging on thisObj's combat controller when thisObj is an actor.
bool Obj377d80::DebugCombatBehavior(void*, void*, Ref377d80* thisObj)
{
    if (thisObj != nullptr) {
        Actor377d80* actor = (thisObj->formType == 0x3e) ? static_cast<Actor377d80*>(thisObj) : nullptr;
        if (actor != nullptr && actor->combatController != nullptr) {
            actor->combatController->DebugBehavior();
        }
    }
    return true;
}
