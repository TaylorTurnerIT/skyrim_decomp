// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x341680 Obj341680::GetSecondaryBase
// Adapted bodies: none
#include "Obj341680.h"

// Returns the secondary base subobject of the held target, or nullptr if absent.
SecondaryBase341680* Obj341680::GetSecondaryBase()
{
    Target341680* target = (holder != nullptr) ? holder->target : nullptr;
    return static_cast<SecondaryBase341680*>(target);
}
