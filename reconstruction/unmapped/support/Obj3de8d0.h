// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de8d0::SmartPtr::~SmartPtr (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3de8d0, Obj3de8d0::RefCountBase, Obj3de8d0::Target, Obj3de8d0::SmartPtr, Obj3de8d0::target: GUESS(low)
#pragma once

#include <cstdint>
#include <intrin.h>

class Obj3de8d0
{
public:
    class RefCountBase
    {
    public:
        virtual void Unk_00();
        virtual void DeleteThis();

        long refCount;  // 0x08
    };

    class Target
    {
    public:
        std::uint8_t unk00[0x20];  // 0x00
        RefCountBase refBase;      // 0x20
    };

    class SmartPtr
    {
    public:
        ~SmartPtr()
        {
            if (ptr != nullptr) {
                RefCountBase* base = &ptr->refBase;
                // atomic reference-count decrement required for thread-safe release
                long after = _InterlockedDecrement(&base->refCount);
                if ((after & 0x3FF) == 0) {
                    base->DeleteThis();
                }
            }
        }

        Target* ptr;  // 0x00
    };

    ~Obj3de8d0();  // compared: 0x3de8d0

    std::uint8_t unk00[0x20];  // 0x00
    SmartPtr target;           // 0x20
};
