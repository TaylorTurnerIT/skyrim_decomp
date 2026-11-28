// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj33ec60, KeywordForm33ec60, SpellBase33ec60, ActiveEffect33ec60: GUESS(low); PDB lists GameFunc::native::EPMagic_SpellHasKeyword
// Obj33ec60::EPMagic_SpellHasKeyword: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

struct KeywordForm33ec60
{
    virtual void Slot00();
    virtual void Slot01();
    virtual void Slot02();
    virtual void Slot03();
    virtual bool HasKeyword(void* keyword);
};

struct SpellBase33ec60
{
    std::uint8_t unk00[0x40];
    KeywordForm33ec60 keywordForm;
};

struct ActiveEffect33ec60
{
    std::uint8_t unk00[0x40];
    SpellBase33ec60* spell;
};

class Obj33ec60
{
public:
    static bool EPMagic_SpellHasKeyword(ActiveEffect33ec60* effect, void* keyword, void* param2, double* result);
};
