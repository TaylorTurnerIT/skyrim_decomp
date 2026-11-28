// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3f76c0::Function3f76c0, treated as adapted: shaped like a singly linked list removal in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00560000_o2.cpp:3255
// SPDX-License-Identifier: CC0-1.0
// 0x3f76c0 Obj3f76c0::Function3f76c0
#include "Obj3f76c0.h"

// PDB: the CrashLogger PDB name here is TESTrapListener::sub_140398350; the stand-in name is kept.
// Unlinks target from the singly linked zone list and deletes it.
void Obj3f76c0::Function3f76c0(ZoneEntry* target)
{
    if (target != nullptr) {
        ZoneEntry* curHead = head;
        if (target == curHead) {
            curHead = target->next;
        } else {
            ZoneEntry* prev = curHead;
            while (prev != nullptr) {
                ZoneEntry* next = prev->next;
                if (target == next) {
                    prev->next = next->next;
                    break;
                }
                prev = next;
            }
        }
        head = curHead;
        delete target;
    }
}
