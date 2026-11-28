// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3e14a0 Obj3e14a0::Function3e14a0
// Adapted bodies: none
#include "Obj3e14a0.h"

// Replaces the stored item pointer after linking any existing item onto the new one.
void Obj3e14a0::Function3e14a0(Item* nextItem)
{
    if (item != nullptr) {
        nextItem->Unk_04(item);
    }
    item = nextItem;
}
