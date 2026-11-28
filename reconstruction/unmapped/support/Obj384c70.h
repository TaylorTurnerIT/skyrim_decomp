// Source exposure: mixed (pinned image listing; CrashLogger PDB names; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr384c70::~SmartPtr384c70 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj384c70, Obj384c70::~Obj384c70, Base384c70, RefCounted384c70, SmartPtr384c70: GUESS(low); PDB lists _anonymous_namespace___PrintPapyrusObjectsToConsole__dtor
#pragma once

#include <cstdint>
#include <intrin.h>

struct RefCounted384c70
{
    virtual ~RefCounted384c70() = default;

    long refCount;
};

struct SmartPtr384c70
{
    ~SmartPtr384c70()
    {
        RefCounted384c70* object = ptr;
        if (object != nullptr) {
            // Intrusive atomic reference count release.
            if (_InterlockedExchangeAdd(&object->refCount, -1) == 1) {
                delete object;
            }
        }
    }

    RefCounted384c70* ptr;
};

struct Base384c70
{
    virtual ~Base384c70();
};

class Obj384c70 : public Base384c70
{
public:
    Obj384c70();
    ~Obj384c70() override = default;  // compared: 0x384c70 (scalar deleting destructor)

    SmartPtr384c70 target;
    std::uint64_t unk10;
};
