// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj41f850, GetBlockCost, g_multA41f850, g_multB41f850, g_base41f850, unk00, unk58, unk60, val54, val5c, val68: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_multA41f850;
extern float g_multB41f850;
extern float g_base41f850;

class Obj41f850
{
public:
    float GetBlockCost() const;  // compared: 0x41f850

    std::uint8_t unk00[0x54];
    float val54;
    std::uint32_t unk58;
    float val5c;
    std::uint64_t unk60;
    float val68;
};
