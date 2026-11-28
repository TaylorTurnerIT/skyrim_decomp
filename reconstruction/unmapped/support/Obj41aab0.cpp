// Source exposure: mixed (pinned image listing; community source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj41aab0::DetachItem, treated as adapted: shaped like BSTSmartPointer::reset (CharmedBaryon/CommonLibSSE-NG@b93280e include/RE/B/BSTSmartPointer.h:166, MIT).
// SPDX-License-Identifier: MIT (CommonLibSSE-NG declarations, Copyright (c) 2018 Ryan-rsm-McKenzie; full text: licenses/CommonLibSSE-NG.txt)
// 0x41aab0 Obj41aab0::DetachItem
#include "Obj41aab0.h"

// Removes the held item from manager when present and releases its reference.
void Obj41aab0::DetachItem()
{
    if (manager) {
        manager->RemoveObject(item.ptr);
    }
    item.Reset();
}
