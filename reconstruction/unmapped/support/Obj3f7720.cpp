// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f7720::Function3f7720, treated as adapted: shaped like a singly linked list removal in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:3255
// SPDX-License-Identifier: CC0-1.0
// 0x3f7720 Obj3f7720::Function3f7720
#include "Obj3f7720.h"

// Removes the sub-node matching idRef from zone, and removes zone if its sub-list becomes empty.
void Obj3f7720::Function3f7720(ZoneEntry* zone, const std::uint32_t& idRef)
{
    std::uint32_t targetId = idRef;
    if (targetId == 0) {
        return;
    }

    SubNode* subHead = zone->subHead;
    if (subHead != nullptr) {
        SubNode* found = subHead;
        while (found != nullptr && found->id != targetId) {
            found = found->next;
        }
        if (found != nullptr) {
            if (found == subHead) {
                subHead = found->next;
            } else {
                SubNode* prev = subHead;
                while (prev != nullptr) {
                    SubNode* next = prev->next;
                    if (found == next) {
                        prev->next = next->next;
                        break;
                    }
                    prev = next;
                }
            }
            zone->subHead = subHead;
            delete found;
        }
    }

    if (zone->subHead == nullptr) {
        ZoneEntry* curHead = head;
        if (zone == curHead) {
            curHead = zone->next;
        } else {
            ZoneEntry* prev = curHead;
            while (prev != nullptr) {
                ZoneEntry* next = prev->next;
                if (zone == next) {
                    prev->next = next->next;
                    break;
                }
                prev = next;
            }
        }
        head = curHead;
        delete zone;
    }
}
