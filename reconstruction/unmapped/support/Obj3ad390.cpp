// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3ad390::~Obj3ad390, treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3ad390 Obj3ad390::~Obj3ad390
#include "Obj3ad390.h"
#include <intrin.h>

// Releases the intrusive reference-counted object held by this smart pointer.
Obj3ad390::~Obj3ad390()
{
    RefCounted* target = ptr;
    if (target != nullptr) {
        // atomic reference-count decrement required for thread-safe release
        if (_InterlockedExchangeAdd(&target->refCount, -1) == 1) {
            delete target;
        }
    }
}
