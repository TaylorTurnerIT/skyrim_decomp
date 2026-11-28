// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3b0790 Obj3b0790::Function3b0790
// Adapted bodies: none
#include "Obj3b0790.h"

// Forwards flag18 to target->subF8 when target->field40 matches expected.
void Obj3b0790::Function3b0790(Target* target)
{
    if (target->field40 == expected && target->subF8 != nullptr) {
        target->subF8->Notify(flag18);
    }
}
