// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x33e9e0 Obj33e9e0::GetGraphVariableFloat
#include "Obj33e9e0.h"

// Queries a floating-point animation graph variable on ref and writes it as a double to result.
bool Obj33e9e0::GetGraphVariableFloat(Ref33e9e0* ref, const void* variableName, void*, double* result)
{
    *result = 0.0;
    if (ref != nullptr && variableName != nullptr) {
        float value = 0.0f;
        if (ref->animGraph.GetGraphVariableFloat(variableName, value)) {
            *result = static_cast<double>(value);
        }
    }
    return true;
}
