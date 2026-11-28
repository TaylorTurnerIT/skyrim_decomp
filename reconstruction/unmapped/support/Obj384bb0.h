// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr384bb0::~SmartPtr384bb0 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj384bb0, Obj384bb0::~Obj384bb0, Base384bb0, RefCounted384bb0, SmartPtr384bb0: GUESS(low); PDB lists _anonymous_namespace___PrintPapyrusObjectsOnAliasToConsole__dtor
#pragma once

#include <cstdint>
#include <intrin.h>

struct RefCounted384bb0
{
    virtual ~RefCounted384bb0() = default;

    long refCount;
};

struct SmartPtr384bb0
{
    ~SmartPtr384bb0()
    {
        RefCounted384bb0* object = ptr;
        if (object != nullptr) {
            // Intrusive atomic reference count release.
            if (_InterlockedExchangeAdd(&object->refCount, -1) == 1) {
                delete object;
            }
        }
    }

    RefCounted384bb0* ptr;
};

struct Base384bb0
{
    virtual ~Base384bb0() {}
};

class Obj384bb0 : public Base384bb0
{
public:
    Obj384bb0();
    ~Obj384bb0() override = default;  // compared: 0x384bb0 (scalar deleting destructor)

    SmartPtr384bb0 target;
};
