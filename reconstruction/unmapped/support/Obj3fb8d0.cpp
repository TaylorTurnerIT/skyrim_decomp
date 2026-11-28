// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x3fb8d0 Obj3fb8d0::Function3fb8d0
#include "Obj3fb8d0.h"

// PDB prototype: void (hkpWorldExtension*), which does not fit a getter with no argument.
// PDB: the CrashLogger PDB name here is a BSTDerivedCreator Func1 name that does not fit this body; the stand-in name is kept.
// Queries child->GetSub(), adjusts to Owner, and returns its value10 field.
void* Obj3fb8d0::Function3fb8d0() const
{
    if (child != nullptr) {
        Owner* owner = static_cast<Owner*>(child->GetSub());
        if (owner != nullptr) {
            return owner->value10;
        }
    }
    return nullptr;
}
