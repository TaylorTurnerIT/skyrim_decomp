// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e1970::Function3e1970, treated as adapted: shaped like a list search loop with a found flag in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00720000_o2.cpp:37020
// SPDX-License-Identifier: CC0-1.0
// 0x3e1970 Obj3e1970::Function3e1970
#include "Obj3e1970.h"

// Returns true if any item in entries has a non-zero flag16.
bool Obj3e1970::Function3e1970() const
{
    bool found = false;
    for (const ListNode* node = &entries; node != nullptr && !found; node = node->next) {
        if (node->item != nullptr && node->item->flag16 != 0) {
            found = true;
        }
    }
    return found;
}
