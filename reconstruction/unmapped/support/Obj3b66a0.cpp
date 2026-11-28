// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3b66a0::Function3b66a0, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// 0x3b66a0 Obj3b66a0::Function3b66a0
#include "Obj3b66a0.h"

// Removes and deletes all following nodes in the singly linked list and clears item.
void Obj3b66a0::Function3b66a0(void (*deleter)(Obj3b66a0*, void*), void* userData)
{
    while (next != nullptr) {
        Obj3b66a0* rest = next->next;
        next->next = nullptr;
        if (deleter != nullptr) {
            deleter(next, userData);
        } else {
            delete next;
        }
        next = rest;
    }
    item = nullptr;
}
