// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3f0690 Obj3f0690::Function3f0690
// Adapted bodies: none
#include "Obj3f0690.h"

extern "C" __declspec(dllimport) int _stricmp(const char* a, const char* b);

// Compares two items by priority byte, breaking ties case-insensitively with GetName().
int Obj3f0690::Function3f0690(Item* lhs, Item* rhs)
{
    std::uint8_t lhsPriority = lhs->priority;
    std::uint8_t rhsPriority = rhs->priority;
    if (lhsPriority == rhsPriority) {
        const char* rhsName = rhs->GetName();
        const char* lhsName = lhs->GetName();
        return _stricmp(lhsName, rhsName);
    }
    return rhsPriority > lhsPriority ? 1 : -1;
}
