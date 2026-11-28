// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3b5710, Obj3b5710::Function3b5710, Obj3b5710::flags58: GUESS(low)
#pragma once

#include <cstdint>

class Obj3b5710
{
public:
    virtual void Unk_00();
    virtual void Unk_01();
    virtual void Unk_02();
    virtual void Unk_03();
    virtual void Unk_04();
    virtual void Unk_05();
    virtual void Unk_06();
    virtual void Unk_07();
    virtual void Unk_08();
    virtual void Unk_09();
    virtual void Unk_0A(std::uint32_t changeFlags);

    void Function3b5710(std::uint32_t mask, bool enable);  // compared: 0x3b5710

    std::uint8_t unk08[0x50];  // 0x08
    std::uint32_t flags58;     // 0x58
};
