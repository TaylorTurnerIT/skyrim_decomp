// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj34a230::LocateCommand, treated as adapted: shaped like GetFunctionByOpcode in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptcompiler.cpp:30
// SPDX-License-Identifier: CC0-1.0
// Obj34a230, ScriptCommand34a230, g_consoleCommands34a230, g_scriptFunctions34a230: GUESS(low)
#pragma once

#include <cstdint>

struct ScriptCommand34a230
{
    std::uint8_t unk00[0x50];
};

extern ScriptCommand34a230 g_consoleCommands34a230[0x1c1];
extern ScriptCommand34a230 g_scriptFunctions34a230[0x2e1];

class Obj34a230
{
public:
    static ScriptCommand34a230* LocateCommand(std::int32_t opcode);
};
