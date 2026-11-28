// Source exposure: mixed (pinned image listing; CrashLogger PDB names; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: SCRIPT_WORD34c570::Ctor, treated as adapted: shaped like a zero-initialising constructor in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/f3_decomp@f5bac1b5 src/f3staging/f3blk_00500000_o2.cpp:43962
// SPDX-License-Identifier: CC0-1.0
// 0x34c570 SCRIPT_WORD34c570::Ctor
#include "SCRIPT_WORD34c570.h"
#include <cstring>

// Zero-initializes the word text buffer and trailing metadata fields.
// PDB: the CrashLogger PDB name is SCRIPT_WORD::SCRIPT_WORD.
SCRIPT_WORD34c570::SCRIPT_WORD34c570()
{
    unk200 = 0;
    unk208 = 0;
    unk204 = 0;
    unk210 = 0;
    std::memset(text, 0, sizeof(text));
}
