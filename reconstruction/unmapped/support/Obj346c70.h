// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj346c70::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// Obj346c70, Obj346c70::Clear, Obj346c70::item, Obj346c70::next: GUESS(low)
#pragma once

class Obj346c70
{
public:
    ~Obj346c70();
    void Clear(void (*callback)(Obj346c70*, void*), void* userData);

    void* item;
    Obj346c70* next;
};

inline Obj346c70::~Obj346c70()
{
    Clear(nullptr, nullptr);
}
