// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// FR2MatrixVTC43dff0: CRASHLOGGER_PDB(59818@2026.10.24)
// Equals, data, unk08, rows, cols: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct FR2MatrixVTC43dff0
{
    bool Equals(const FR2MatrixVTC43dff0& a_other) const;  // compared: 0x43dff0

    float* data;
    std::uint8_t unk08[0x10];
    std::uint32_t rows;
    std::uint32_t cols;
};
static_assert(sizeof(FR2MatrixVTC43dff0) == 0x20, "FR2MatrixVTC43dff0 size");
