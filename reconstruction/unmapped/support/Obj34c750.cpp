// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x34c750 Obj34c750::VisitFactory
#include "Obj34c750.h"

// Compares a factory name case-insensitively and records its type id on match.
std::uint32_t Obj34c750::VisitFactory(Factory34c750* factory)
{
    if (_stricmp(targetName, factory->GetName()) == 0) {
        foundType = factory->GetType();
        return 0;
    }
    return 1;
}
