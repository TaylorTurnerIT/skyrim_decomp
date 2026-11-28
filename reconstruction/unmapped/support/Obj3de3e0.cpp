// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3de3e0::OuterArray::~OuterArray, treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3de3e0 Obj3de3e0::OuterArray::~OuterArray
#include "Obj3de3e0.h"

// Destroys all elements in the outer array and deallocates its storage.
Obj3de3e0::OuterArray::~OuterArray()
{
    Element* items = static_cast<Element*>(data);
    if (items != nullptr) {
        std::uint32_t count = size;
        for (std::uint32_t i = 0; i < count; ++i) {
            items[i].~Element();
        }
        Deallocate();
        size = 0;
    }
}
