// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SmartPtr408600::~SmartPtr408600 (inline helper), treated as adapted: shaped like BSTSmartPointer::~BSTSmartPointer and BSTSmartPointerIntrusiveRefCount::Release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:107, include/RE/B/BSTSmartPointer.h:13, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj408600, LeadingBase408600, RefCountBase408600, RefObj408600, SmartPtr408600, DeleteThis, DecRef, refCount, ptr, first, second, unk08: GUESS(low) STANDIN
#pragma once

#include <cstdint>
#include <intrin.h>

class LeadingBase408600
{
public:
    virtual void Slot00();

    std::uint8_t unk08[0x18];
};
static_assert(sizeof(LeadingBase408600) == 0x20, "LeadingBase408600 size");

class RefCountBase408600
{
public:
    virtual ~RefCountBase408600() = default;
    virtual void DeleteThis() = 0;

    std::uint32_t DecRef()
    {
        // atomic decrement of 10-bit intrusive reference count
        return static_cast<std::uint32_t>(_InterlockedExchangeAdd(&refCount, -1) - 1) & 0x3FFu;
    }

    long refCount;
};

struct RefObj408600 : public LeadingBase408600, public RefCountBase408600
{
};

struct SmartPtr408600
{
    ~SmartPtr408600()
    {
        if (ptr) {
            RefCountBase408600* base = ptr;
            if (base->DecRef() == 0) {
                base->DeleteThis();
            }
        }
    }

    RefObj408600* ptr;
};

class Obj408600
{
public:
    ~Obj408600();  // compared: 0x408600

    SmartPtr408600 first;
    SmartPtr408600 second;
};
