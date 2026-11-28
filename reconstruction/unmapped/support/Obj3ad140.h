// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj3ad140, Obj3ad140::Function3ad140, Obj3ad140::duration, Obj3ad140::elapsed, gDeltaTime3275608: GUESS(low)
#pragma once

#include <cstdint>

extern float gDeltaTime3275608;

class Obj3ad140
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
    virtual void Unk_0A();
    virtual void Unk_0B();
    virtual void Unk_0C();
    virtual void Unk_0D();
    virtual void Unk_0E();
    virtual void Unk_0F();
    virtual void Unk_10();
    virtual void Unk_11(void* arg);

    void Function3ad140(void* arg);  // compared: 0x3ad140

    std::uint8_t unk08[0x18];  // 0x08
    float duration;            // 0x20
    float elapsed;             // 0x24
};
