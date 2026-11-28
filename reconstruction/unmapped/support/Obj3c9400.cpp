// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3c9400 Obj3c9400::Function3c9400
// Adapted bodies: none
#include "Obj3c9400.h"

// Compares two entry pointers lexicographically by their name component, returning 0 if either is null.
int Obj3c9400::Function3c9400(Entry** lhs, Entry** rhs)
{
    if (*lhs == nullptr || *rhs == nullptr) {
        return 0;
    }
    const char* rhsName = (*rhs)->nameComp.GetName();
    const char* lhsName = (*lhs)->nameComp.GetName();
    return strcmp(lhsName, rhsName);
}
