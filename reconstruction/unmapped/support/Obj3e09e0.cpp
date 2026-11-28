// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3e09e0::Array::Clear (inline helper), treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3e09e0 Obj3e09e0::Function3e09e0
#include "Obj3e09e0.h"

// Resets four byte flags and releases both internal arrays.
void Obj3e09e0::Function3e09e0()
{
    flagA1 = false;
    flagA2 = false;
    flagA0 = false;
    flagA3 = false;
    first.Clear();
    second.Clear();
}
