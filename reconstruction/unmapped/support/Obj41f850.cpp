// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x41f850 Obj41f850::GetBlockCost
#include "Obj41f850.h"

// Computes stamina block cost; PDB lists Get_block_cost_1403BED80.
float Obj41f850::GetBlockCost() const
{
    return (val5c * val54 * g_multA41f850) + (g_multB41f850 * val68 + g_base41f850);
}
