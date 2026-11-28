// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3db240::Function3db240, treated as adapted: shaped like BSTArray::~BSTArray and BSTArray::release (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:427, include/RE/B/BSTArray.h:641, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3db240 Obj3db240::Function3db240
#include "Obj3db240.h"

// Clears arr and deletes it when state is non-null with level < 2; always returns 1.
std::int32_t Obj3db240::Function3db240(const State* state, PtrArray* arr)
{
    if (arr != nullptr) {
        if (arr->data != nullptr) {
            arr->Deallocate();
            arr->size = 0;
        }
        if (state != nullptr && state->level < 2) {
            delete arr;
        }
    }
    return 1;
}
