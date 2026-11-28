// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj330690::GetStartingAngle, treated as adapted: shaped like Script_GetStartingAngleConditionFunction in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesconditionfunctions.cpp:15046
// SPDX-License-Identifier: CC0-1.0
// 0x330690 Obj330690::GetStartingAngle
#include "Obj330690.h"

// Queries a reference's starting Euler angle for axis X, Y, or Z and converts it to degrees.
bool Obj330690::GetStartingAngle(Ref330690* ref, std::uintptr_t axis, void*, double* result)
{
    if (ref != nullptr) {
        Vec3_330690 angle;
        ref->GetStartingAngle(&angle);
        switch (static_cast<std::uint32_t>(axis)) {
        case 'X':
            *result = static_cast<double>(angle.x * 57.29578f);
            break;
        case 'Y':
            *result = static_cast<double>(angle.y * 57.29578f);
            break;
        case 'Z':
            *result = static_cast<double>(angle.z * 57.29578f);
            break;
        default:
            break;
        }
    }
    return true;
}
