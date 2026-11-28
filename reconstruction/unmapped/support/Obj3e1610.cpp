// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e1610::Function3e1610, treated as adapted: shaped like a list search loop in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00480000_o2.cpp:40050
// SPDX-License-Identifier: CC0-1.0
// 0x3e1610 Obj3e1610::Function3e1610
#include "Obj3e1610.h"

// Finds the first entry in entries whose field15 matches target.
Obj3e1610::Item* Obj3e1610::Function3e1610(std::uint8_t target) const
{
    for (const ListNode* node = &entries; node != nullptr; node = node->next) {
        if (node->item != nullptr && node->item->field15 == target) {
            return node->item;
        }
    }
    return nullptr;
}
