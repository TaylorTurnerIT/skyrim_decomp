// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj41db80, ActorBase41db80, Actor41db80, RaceData41db80, g_flag41db80, g_player41db80, GetRegenRate, IsSpecial, CheckState, unk00, unk08, raceData, rate13c, rate140, rate144: GUESS(low) STANDIN
#pragma once

#include <cstddef>
#include <cstdint>

class RaceData41db80
{
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void Slot02() = 0;
    virtual void Slot03() = 0;
    virtual void Slot04() = 0;
    virtual void Slot05() = 0;
    virtual void Slot06() = 0;
    virtual void Slot07() = 0;
    virtual void Slot08() = 0;
    virtual void Slot09() = 0;
    virtual void Slot0a() = 0;
    virtual void Slot0b() = 0;
    virtual void Slot0c() = 0;
    virtual void Slot0d() = 0;
    virtual void Slot0e() = 0;
    virtual void Slot0f() = 0;
    virtual void Slot10() = 0;
    virtual void Slot11() = 0;
    virtual void Slot12() = 0;
    virtual void Slot13() = 0;
    virtual void Slot14() = 0;
    virtual void Slot15() = 0;
    virtual void Slot16() = 0;
    virtual void Slot17() = 0;
    virtual void Slot18() = 0;
    virtual bool IsSpecial() = 0;

    std::uint8_t unk08[0x134];
    float rate13c;
    float rate140;
    float rate144;
};

struct ActorBase41db80
{
    std::uint8_t unk00[0xB8];
};

class Obj41db80
{
public:
    float GetRegenRate(std::int32_t a_value);  // compared: 0x41db80
};

class Actor41db80 : public ActorBase41db80, public Obj41db80
{
public:
    bool CheckState(bool a_flag);

    std::uint8_t unkB9[0x13F];
    RaceData41db80* raceData;
};
static_assert(offsetof(Actor41db80, raceData) == 0x1F8, "raceData offset");

extern bool g_flag41db80;
extern Actor41db80* g_player41db80;
