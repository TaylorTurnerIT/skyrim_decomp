// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419db0::Clear, treated as adapted: shaped like BSSimpleList<T>::RemoveAll and the same loop in BSSimpleList in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/bscore/bssimplelist.inl:62
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/bssystem/archive.cpp:5561
// SPDX-License-Identifier: CC0-1.0
// Obj419db0, Clear: GUESS(low) STANDIN
#pragma once

struct Obj419db0
{
    using Callback = void (*)(Obj419db0*, void*);

    ~Obj419db0() { Clear(nullptr, nullptr); }

    void Clear(Callback a_callback, void* a_userData);  // compared: 0x419db0

    void* data;
    Obj419db0* next;
};

static_assert(sizeof(Obj419db0) == 0x10, "Obj419db0 size");
