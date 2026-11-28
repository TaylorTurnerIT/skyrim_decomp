// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b1bf0, Obj3b1bf0::TableEntry, Obj3b1bf0::Function3b1bf0, gTable209a6c0: GUESS(low)
#pragma once

#include <cstdint>

extern "C" __declspec(dllimport) int __cdecl _stricmp(const char* lhs, const char* rhs);

class Obj3b1bf0
{
public:
    struct TableEntry
    {
        const char* name;          // 0x00
        std::uint8_t unk08[0x20];  // 0x08
    };

    static std::uint32_t Function3b1bf0(const char* name);  // compared: 0x3b1bf0
};

extern Obj3b1bf0::TableEntry gTable209a6c0[183];
