// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f0ad0::Function3f0ad0, treated as adapted: shaped like a list item count in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:9666
// SPDX-License-Identifier: CC0-1.0
// 0x3f0ad0 Obj3f0ad0::Function3f0ad0
#include "Obj3f0ad0.h"

// Counts nodes with a non-null item pointer in the singly linked list.
std::uint32_t Obj3f0ad0::Function3f0ad0(const Obj3f0ad0* head)
{
    std::uint32_t count = 0;
    for (const Obj3f0ad0* node = head; node != nullptr; node = node->next) {
        if (node->item != nullptr) {
            ++count;
        }
    }
    return count;
}
