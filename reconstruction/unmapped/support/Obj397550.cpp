// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj397550::Compare, treated as adapted: shaped like a three-key comparison function in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00540000_o2.cpp:3021
// SPDX-License-Identifier: CC0-1.0
// 0x397550 Obj397550::Compare
#include "Obj397550.h"

// Orders two entries by rank ascending, priority descending, and virtual order ascending.
std::int32_t Obj397550::Compare(const Entry397550* lhs, const Entry397550* rhs)
{
    if (lhs->rank < rhs->rank) {
        return -1;
    }
    if (lhs->rank > rhs->rank) {
        return 1;
    }
    if (lhs->priority > rhs->priority) {
        return -1;
    }
    if (lhs->priority < rhs->priority) {
        return 1;
    }
    if (lhs->GetOrder() < rhs->GetOrder()) {
        return -1;
    }
    if (lhs->GetOrder() > rhs->GetOrder()) {
        return 1;
    }
    return 0;
}
