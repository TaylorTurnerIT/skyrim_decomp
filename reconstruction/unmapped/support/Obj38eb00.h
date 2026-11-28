// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: RefPtr38eb00::~RefPtr38eb00 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj38eb00, HandleRef38eb00, RefTarget38eb00, RefPtr38eb00: GUESS(low)
#pragma once

#include <cstdint>
#include <intrin.h>

struct HandleRef38eb00
{
    virtual void Slot00();
    virtual void DeleteThis();

    long refCount;
};

struct RefTarget38eb00
{
    std::uint8_t unk00[0x20];
    HandleRef38eb00 handleRef;
};

struct RefPtr38eb00
{
    ~RefPtr38eb00()
    {
        if (ptr != nullptr) {
            HandleRef38eb00* ref = &ptr->handleRef;
            // Intrusive atomic reference count release using the low 10-bit refcount field.
            if ((_InterlockedDecrement(&ref->refCount) & 0x3ff) == 0) {
                ref->DeleteThis();
            }
        }
    }

    RefTarget38eb00* ptr;
};

class Obj38eb00
{
public:
    ~Obj38eb00();

    RefPtr38eb00 first;
    RefPtr38eb00 second;
};
