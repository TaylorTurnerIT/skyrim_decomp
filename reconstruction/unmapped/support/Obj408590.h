// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr408590::~SmartPtr408590 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj408590, LeadingBase408590, RefCountBase408590, RefObj408590, SmartPtr408590, DeleteThis, DecRef, refCount, ptr, first, second, unk08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class LeadingBase408590
{
public:
    virtual void Slot00();

    std::uint8_t unk08[0x18];
};
static_assert(sizeof(LeadingBase408590) == 0x20, "LeadingBase408590 size");

class RefCountBase408590
{
public:
    virtual ~RefCountBase408590() = default;
    virtual void DeleteThis() = 0;

    std::uint32_t DecRef()
    {
        // atomic decrement of 10-bit intrusive reference count
        return static_cast<std::uint32_t>(_InterlockedExchangeAdd(&refCount, -1) - 1) & 0x3FFu;
    }

    long refCount;
};

struct RefObj408590 : public LeadingBase408590, public RefCountBase408590
{
};

struct SmartPtr408590
{
    ~SmartPtr408590()
    {
        if (ptr) {
            RefCountBase408590* base = ptr;
            if (base->DecRef() == 0) {
                base->DeleteThis();
            }
        }
    }

    RefObj408590* ptr;
};

class Obj408590
{
public:
    ~Obj408590();  // compared: 0x408590

    SmartPtr408590 first;
    SmartPtr408590 second;
};
