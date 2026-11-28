// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ada90 Obj3ada90::Function3ada90
// Adapted bodies: none
#include "Obj3ada90.h"

// Replaces the stored item pointer after linking any existing item onto the new one.
void Obj3ada90::Function3ada90(Item* nextItem)
{
    if (item != nullptr) {
        nextItem->Unk_04(item);
    }
    item = nextItem;
}
