// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr383d90::~SmartPtr383d90 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj383d90, Base383d90, RefCounted383d90, SmartPtr383d90: GUESS(low)
#pragma once

#include <cstdint>
#include <intrin.h>

struct RefCounted383d90
{
    virtual ~RefCounted383d90() = default;

    long refCount;
};

struct SmartPtr383d90
{
    ~SmartPtr383d90()
    {
        RefCounted383d90* object = ptr;
        if (object != nullptr) {
            // Intrusive atomic reference count release.
            if (_InterlockedExchangeAdd(&object->refCount, -1) == 1) {
                delete object;
            }
        }
    }

    RefCounted383d90* ptr;
};

struct Base383d90
{
    ~Base383d90();

    void* unk00;
};

class Obj383d90 : public Base383d90
{
public:
    ~Obj383d90();

    SmartPtr383d90 target;
};
