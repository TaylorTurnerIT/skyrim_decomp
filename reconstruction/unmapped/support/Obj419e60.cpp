// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419e60::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// 0x419e60 Obj419e60::Clear
#include "Obj419e60.h"

// Unlinks and deletes or hands off each trailing list node, then clears data.
void Obj419e60::Clear(Callback a_callback, void* a_userData)
{
    while (next) {
        Obj419e60* tail = next->next;
        next->next = nullptr;
        if (a_callback) {
            a_callback(next, a_userData);
        } else {
            delete next;
        }
        next = tail;
    }
    data = nullptr;
}
