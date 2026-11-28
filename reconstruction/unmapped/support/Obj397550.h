// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj397550::Compare, treated as adapted: shaped like a three-key comparison function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00540000_o2.cpp:3021
// SPDX-License-Identifier: CC0-1.0
// Obj397550, Entry397550: GUESS(low)
#pragma once

#include <cstdint>

struct Entry397550
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual std::int32_t GetOrder() const;

    std::uint8_t rank;
    std::uint8_t priority;
};

class Obj397550
{
public:
    static std::int32_t Compare(const Entry397550* lhs, const Entry397550* rhs);
};
