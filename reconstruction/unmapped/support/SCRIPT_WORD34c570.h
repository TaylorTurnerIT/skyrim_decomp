// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SCRIPT_WORD34c570::Ctor, treated as adapted: shaped like a zero-initialising constructor in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00500000_o2.cpp:43962
// SPDX-License-Identifier: CC0-1.0
// SCRIPT_WORD34c570, SCRIPT_WORD34c570::Ctor: CRASHLOGGER_PDB(59818@2026.10.24)
// text, unk200, unk204, unk205, unk208, unk210: GUESS(low)
#pragma once

#include <cstdint>

class SCRIPT_WORD34c570
{
public:
    SCRIPT_WORD34c570();

    char text[0x200];
    std::uint32_t unk200;
    std::uint8_t unk204;
    std::uint8_t unk205[3];
    std::uint64_t unk208;
    std::uint64_t unk210;
};
