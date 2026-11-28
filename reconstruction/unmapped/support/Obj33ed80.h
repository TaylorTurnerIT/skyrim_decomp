// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj33ed80, KeywordForm33ed80, Form33ed80, Player33ed80, g_player33ed80: GUESS(low)
#pragma once

#include <cstdint>

struct KeywordForm33ed80
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual bool HasKeyword(void* keyword);
};

struct Form33ed80
{
    std::uint8_t unk00[0x40];
    KeywordForm33ed80 keywordForm;
};

struct Player33ed80
{
    std::uint8_t unk00[0xba0];
    Form33ed80* activeForm;
};

extern Player33ed80* g_player33ed80;

class Obj33ed80
{
public:
    static bool Function33ed80(void* ref, void* keyword, void* param2, double* result);
};
