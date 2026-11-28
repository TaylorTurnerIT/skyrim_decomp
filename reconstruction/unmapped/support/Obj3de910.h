// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de910::SmartPtr::~SmartPtr (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj3de910, Obj3de910::RefCountBase, Obj3de910::Target, Obj3de910::SmartPtr, Obj3de910::target: GUESS(low)
#pragma once

#include <cstdint>
#include <intrin.h>

class Obj3de910
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

    ~Obj3de910();  // compared: 0x3de910

    std::uint8_t unk00[0x08];  // 0x00
    SmartPtr target;           // 0x08
};
