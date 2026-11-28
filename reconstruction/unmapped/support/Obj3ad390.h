// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3ad390::~Obj3ad390, treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3ad390, Obj3ad390::RefCounted, Obj3ad390::ptr: GUESS(low)
#pragma once

#include <cstdint>

class Obj3ad390
{
public:
    class RefCounted
    {
    public:
        virtual ~RefCounted();

        long refCount;  // 0x08
    };

    ~Obj3ad390();  // compared: 0x3ad390

    RefCounted* ptr;  // 0x00
};
