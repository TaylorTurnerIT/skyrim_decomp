// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x33e980 Obj33e980::GetGraphVariableInt
#include "Obj33e980.h"

// Queries an integer animation graph variable on ref and writes it as a double to result.
bool Obj33e980::GetGraphVariableInt(Ref33e980* ref, const void* variableName, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr && variableName != nullptr) {
        std::int32_t value = 0;
        if (ref->animGraph.GetGraphVariableInt(variableName, value)) {
            *result = static_cast<double>(value);
        }
    }
    return true;
}
