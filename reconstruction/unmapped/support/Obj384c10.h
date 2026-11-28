// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr384c10::~SmartPtr384c10 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj384c10, Obj384c10::~Obj384c10, Base384c10, RefCounted384c10, SmartPtr384c10: GUESS(low); PDB lists _anonymous_namespace___PrintPapyrusObjectsOnMagicEffectToConsole__dtor
#pragma once

#include <cstdint>
#include <intrin.h>

struct RefCounted384c10
{
    virtual ~RefCounted384c10() = default;

    long refCount;
};

struct SmartPtr384c10
{
    ~SmartPtr384c10()
    {
        RefCounted384c10* object = ptr;
        if (object != nullptr) {
            // Intrusive atomic reference count release.
            if (_InterlockedExchangeAdd(&object->refCount, -1) == 1) {
                delete object;
            }
        }
    }

    RefCounted384c10* ptr;
};

struct Base384c10
{
    virtual ~Base384c10() {}
};

class Obj384c10 : public Base384c10
{
public:
    Obj384c10();
    ~Obj384c10() override = default;  // compared: 0x384c10 (scalar deleting destructor)

    SmartPtr384c10 target;
};
