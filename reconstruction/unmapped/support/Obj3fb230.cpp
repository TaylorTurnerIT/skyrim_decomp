// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3fb230 Obj3fb230::Function3fb230
// Adapted bodies: none
#include "Obj3fb230.h"

// Returns value430 from the first item's target if present.
void* Obj3fb230::Function3fb230() const
{
    if (count != 0) {
        Item* first = items[0];
        if (first != nullptr) {
            Target* target = first->GetTarget();
            if (target != nullptr) {
                return target->value430;
            }
        }
    }
    return nullptr;
}
