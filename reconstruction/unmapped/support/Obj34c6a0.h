// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj34c6a0::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// Obj34c6a0, Obj34c6a0::Clear, Obj34c6a0::item, Obj34c6a0::next: GUESS(low)
#pragma once

class Obj34c6a0
{
public:
    ~Obj34c6a0();
    void Clear(void (*callback)(Obj34c6a0*, void*), void* userData);

    void* item;
    Obj34c6a0* next;
};

inline Obj34c6a0::~Obj34c6a0()
{
    Clear(nullptr, nullptr);
}
