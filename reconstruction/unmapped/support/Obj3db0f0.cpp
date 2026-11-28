// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj3db0f0::Function3db0f0, treated as adapted: shaped like BSTArray::erase (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTArray.h:525, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x3db0f0 Obj3db0f0::Function3db0f0
#include "Obj3db0f0.h"

// Removes and deletes each entry from the front of entries until empty.
void Obj3db0f0::Function3db0f0()
{
    while (entries.size != 0) {
        Entry* first = entries.data[0];
        std::uint32_t moveCount = 1;
        std::uint32_t remaining = entries.size - 1;
        if (remaining < moveCount) {
            moveCount = remaining;
        }
        entries.MoveElements(entries.data, 0, entries.size - moveCount, moveCount, sizeof(Entry*));
        --entries.size;
        delete first;
    }
}
