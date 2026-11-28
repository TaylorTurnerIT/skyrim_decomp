// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x3a5f30 Obj3a5f30::SetItem
// Adapted bodies: none
#include "Obj3a5f30.h"

// Notifies next of the previous item when present, then replaces current with next.
void Obj3a5f30::SetItem(Item3a5f30* next)
{
    if (current != nullptr) {
        next->OnReplace(current);
    }
    current = next;
}
