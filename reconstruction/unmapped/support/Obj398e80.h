// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Array398e80::~Array398e80 (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// Obj398e80, ArrayBase398e80, ArrayAlloc398e80, Array398e80: GUESS(low)
#pragma once

#include <cstdint>

struct ArrayBase398e80
{
    ~ArrayBase398e80();

    std::uint32_t size;
};

struct ArrayAlloc398e80
{
    ~ArrayAlloc398e80();
    void Deallocate();

    void* data;
    std::uint32_t capacity;
    std::uint32_t unk0c;
};

struct Array398e80 : ArrayAlloc398e80, ArrayBase398e80
{
    ~Array398e80()
    {
        if (data != nullptr) {
            Deallocate();
            size = 0;
        }
    }
};

class Obj398e80
{
public:
    ~Obj398e80();

    std::uint64_t unk00;
    Array398e80 first;
    Array398e80 second;
};
