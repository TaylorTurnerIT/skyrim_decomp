// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj41aab0::DetachItem, treated as adapted: shaped like BSTSmartPointer::reset (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:166, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj41aab0, RefObj41aab0, RefPtr41aab0, Manager41aab0, DetachItem, RemoveObject, DeleteThis, DecRefCount, Reset, refCount, ptr, unk00, manager, item: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class RefObj41aab0
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

struct RefPtr41aab0
{
    void Reset()
    {
        RefObj41aab0* old = ptr;
        if (old) {
            ptr = nullptr;
            old->DecRefCount();
        }
    }

    RefObj41aab0* ptr;
};

class Manager41aab0
{
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void Slot02() = 0;
    virtual void Slot03() = 0;
    virtual void Slot04() = 0;
    virtual void Slot05() = 0;
    virtual void Slot06() = 0;
    virtual void Slot07() = 0;
    virtual void Slot08() = 0;
    virtual void Slot09() = 0;
    virtual void Slot0a() = 0;
    virtual void Slot0b() = 0;
    virtual void Slot0c() = 0;
    virtual void Slot0d() = 0;
    virtual void Slot0e() = 0;
    virtual void Slot0f() = 0;
    virtual void Slot10() = 0;
    virtual void Slot11() = 0;
    virtual void Slot12() = 0;
    virtual void Slot13() = 0;
    virtual void Slot14() = 0;
    virtual void Slot15() = 0;
    virtual void Slot16() = 0;
    virtual void Slot17() = 0;
    virtual void Slot18() = 0;
    virtual void Slot19() = 0;
    virtual void Slot1a() = 0;
    virtual void Slot1b() = 0;
    virtual void Slot1c() = 0;
    virtual void Slot1d() = 0;
    virtual void Slot1e() = 0;
    virtual void Slot1f() = 0;
    virtual void Slot20() = 0;
    virtual void Slot21() = 0;
    virtual void Slot22() = 0;
    virtual void Slot23() = 0;
    virtual void Slot24() = 0;
    virtual void Slot25() = 0;
    virtual void Slot26() = 0;
    virtual void Slot27() = 0;
    virtual void Slot28() = 0;
    virtual void Slot29() = 0;
    virtual void Slot2a() = 0;
    virtual void Slot2b() = 0;
    virtual void Slot2c() = 0;
    virtual void Slot2d() = 0;
    virtual void Slot2e() = 0;
    virtual void Slot2f() = 0;
    virtual void Slot30() = 0;
    virtual void Slot31() = 0;
    virtual void Slot32() = 0;
    virtual void Slot33() = 0;
    virtual void Slot34() = 0;
    virtual void Slot35() = 0;
    virtual void Slot36() = 0;
    virtual void Slot37() = 0;
    virtual void RemoveObject(RefObj41aab0* a_item) = 0;
};

class Obj41aab0
{
public:
    void DetachItem();  // compared: 0x41aab0

    std::uint64_t unk00;
    Manager41aab0* manager;
    RefPtr41aab0 item;
};
