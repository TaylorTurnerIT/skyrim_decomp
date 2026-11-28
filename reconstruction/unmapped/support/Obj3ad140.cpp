// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3ad140 Obj3ad140::Function3ad140
// Adapted bodies: none
#include "Obj3ad140.h"

// Advances the timer by the frame delta and invokes slot 0x11 once duration is reached.
void Obj3ad140::Function3ad140(void* arg)
{
    elapsed += gDeltaTime3275608;
    if (elapsed >= duration) {
        Unk_11(arg);
    }
}
