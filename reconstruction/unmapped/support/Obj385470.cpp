// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj385470::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// 0x385470 Obj385470::Clear
#include "Obj385470.h"

// Unlinks and destroys each trailing list node, invoking callback when provided, then clears item.
void Obj385470::Clear(void (*callback)(Obj385470*, void*), void* userData)
{
    while (next != nullptr) {
        Obj385470* remaining = next->next;
        next->next = nullptr;
        if (callback != nullptr) {
            callback(next, userData);
        } else {
            delete next;
        }
        next = remaining;
    }
    item = nullptr;
}
