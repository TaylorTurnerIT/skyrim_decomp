// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x389010 Obj389010::dtor
// Adapted bodies: none
#include "Obj389010.h"

// Runs cleanup before chaining to the base destructor.
Obj389010::~Obj389010()
{
    Cleanup();
}
