// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: the FirstPtr and SecondPtr destructors of Obj3f44a0 (inline helpers), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3f44a0, Obj3f44a0::FirstObj, Obj3f44a0::SecondBase, Obj3f44a0::SecondObj, Obj3f44a0::FirstPtr, Obj3f44a0::SecondPtr, Obj3f44a0::first, Obj3f44a0::second: GUESS(low)
#pragma once

#include <cstdint>
#include <intrin.h>

class Obj3f44a0
{
public:
    class FirstObj
    {
    public:
        virtual ~FirstObj();

        long refCount;  // 0x08
    };

    class SecondBase
    {
    public:
        virtual void Unk_00();
        virtual void DeleteThis();

        long refCount;  // 0x08
    };

    class SecondObj
    {
    public:
        std::uint8_t unk00[0x20];  // 0x00
        SecondBase refBase;        // 0x20
    };

    class FirstPtr
    {
    public:
        ~FirstPtr()
        {
            FirstObj* obj = ptr;
            if (obj != nullptr) {
                // atomic reference-count decrement required for thread-safe release
                if (_InterlockedExchangeAdd(&obj->refCount, -1) == 1) {
                    delete obj;
                }
            }
        }

        FirstObj* ptr;  // 0x00
    };

    class SecondPtr
    {
    public:
        ~SecondPtr()
        {
            if (ptr != nullptr) {
                SecondBase* base = &ptr->refBase;
                // atomic reference-count decrement required for thread-safe release
                if (((_InterlockedExchangeAdd(&base->refCount, -1) - 1) & 0x3FF) == 0) {
                    base->DeleteThis();
                }
            }
        }

        SecondObj* ptr;  // 0x00
    };

    ~Obj3f44a0();  // compared: 0x3f44a0

    FirstPtr first;    // 0x00
    SecondPtr second;  // 0x08
};
