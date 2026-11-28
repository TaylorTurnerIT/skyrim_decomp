// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b8780, Obj3b8780::EntryList, Obj3b8780::Function3b8780: GUESS(low)
#pragma once

#include <cstdint>

class Obj3b8780
{
public:
    class EntryList
    {
    public:
        void* GetAt(std::uint32_t index) const;

        std::uint8_t unk00[0x14];  // 0x00
        std::uint32_t count;       // 0x14
    };

    bool Function3b8780(void* target, const EntryList* list);  // compared: 0x3b8780
};
