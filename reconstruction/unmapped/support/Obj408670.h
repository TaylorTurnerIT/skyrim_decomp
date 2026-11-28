// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr408670::~SmartPtr408670 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj408670, LeadingBase408670, RefCountBase408670, RefObj408670, SmartPtr408670, DeleteThis, DecRef, refCount, ptr, first, second, unk08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class LeadingBase408670
{
public:
    virtual void Slot00();

    std::uint8_t unk08[0x18];
};
static_assert(sizeof(LeadingBase408670) == 0x20, "LeadingBase408670 size");

class RefCountBase408670
{
public:
    virtual ~RefCountBase408670() = default;
    virtual void DeleteThis() = 0;

    std::uint32_t DecRef()
    {
        // atomic decrement of 10-bit intrusive reference count
        return static_cast<std::uint32_t>(_InterlockedExchangeAdd(&refCount, -1) - 1) & 0x3FFu;
    }

    long refCount;
};

struct RefObj408670 : public LeadingBase408670, public RefCountBase408670
{
};

struct SmartPtr408670
{
    ~SmartPtr408670()
    {
        if (ptr) {
            RefCountBase408670* base = ptr;
            if (base->DecRef() == 0) {
                base->DeleteThis();
            }
        }
    }

    RefObj408670* ptr;
};

class Obj408670
{
public:
    ~Obj408670();  // compared: 0x408670

    SmartPtr408670 first;
    SmartPtr408670 second;
};
