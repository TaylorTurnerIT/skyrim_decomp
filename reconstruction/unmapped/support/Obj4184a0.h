// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj4184a0::ClearIfTracked, treated as adapted: shaped like BSTSmartPointer::reset (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:166, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj4184a0, RefObj4184a0, RefPtr4184a0, Manager4184a0, g_manager4184a0, ClearIfTracked, DeleteThis, DecRefCount, Reset, refCount, ptr, primary, secondary, unk00: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class RefObj4184a0
{
public:
    virtual void Slot00() = 0;
    virtual void DeleteThis() = 0;

    void DecRefCount()
    {
        // atomic reference-count decrement on intrusive object
        if (_InterlockedExchangeAdd(&refCount, -1) == 1) {
            DeleteThis();
        }
    }

    long refCount;
};

struct RefPtr4184a0
{
    void Reset()
    {
        RefObj4184a0* old = ptr;
        if (old) {
            ptr = nullptr;
            old->DecRefCount();
        }
    }

    RefObj4184a0* ptr;
};

struct Manager4184a0
{
    std::uint8_t unk00[0x268];
    RefPtr4184a0 primary;
    RefPtr4184a0 secondary;
};

extern Manager4184a0* g_manager4184a0;

class Obj4184a0
{
public:
    static void ClearIfTracked(RefObj4184a0* a_target);  // compared: 0x4184a0
};
