// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj360a20::ClearOwnership, treated as adapted: shaped like Script_ClearOwnershipFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptfunctions.cpp:6677
// SPDX-License-Identifier: CC0-1.0
// 0x360a20 Obj360a20::ClearOwnership
#include "Obj360a20.h"

// Clears ownership extra data on thisObj and marks change flag 0x40.
bool Obj360a20::ClearOwnership(void*, void*, Ref360a20* thisObj)
{
    if (thisObj != nullptr) {
        thisObj->extraList.ClearOwnership();
        thisObj->MarkChanged(0x40);
    }
    return true;
}
