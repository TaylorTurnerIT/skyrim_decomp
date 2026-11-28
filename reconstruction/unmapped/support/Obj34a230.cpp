// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj34a230::LocateCommand, treated as adapted: shaped like GetFunctionByOpcode in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptcompiler.cpp:30
// SPDX-License-Identifier: CC0-1.0
// 0x34a230 Obj34a230::LocateCommand
#include "Obj34a230.h"

// Looks up a console or script command table entry by opcode, or returns nullptr if out of range.
ScriptCommand34a230* Obj34a230::LocateCommand(std::int32_t opcode)
{
    if (opcode >= 0x100 && opcode <= 0x2c0) {
        return &g_consoleCommands34a230[opcode - 0x100];
    }
    if (opcode >= 0x1000 && opcode <= 0x12e0) {
        return &g_scriptFunctions34a230[opcode - 0x1000];
    }
    return nullptr;
}
