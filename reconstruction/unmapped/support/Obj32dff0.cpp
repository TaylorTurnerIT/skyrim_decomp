// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Cookbook: 0x32dff0 32
// 0x32dff0 Obj32dff0::Ctor
// Adapted bodies: none
#include "Obj32dff0.h"

// Initializes default float parameters, adjacent option bytes, and sentinel index.
Obj32dff0::Obj32dff0()
{
    unk08 = 8.0f;
    unk0c = 32.0f;
    unk00 = 8.0f;
    unk04 = 32.0f;
    unk1c = 4;
    unk1d = 0;
    unk18 = 1.0f;
    unk10 = 32.0f;
    unk14 = 4.0f;
    unk20 = -1;
}
