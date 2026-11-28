// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3246a0::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// 0x3246a0 Obj3246a0::Clear
#include "Obj3246a0.h"

// Unlinks and destroys each trailing list node, invoking callback when provided, then clears item.
void Obj3246a0::Clear(void (*callback)(Obj3246a0*, void*), void* userData)
{
    while (next != nullptr) {
        Obj3246a0* remaining = next->next;
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
