// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// BSResourceFaceGenBinaryFile4276f0: CRASHLOGGER_PDB(59818@2026.10.24)
// Stream4276f0, Slot00, Slot01, Close, unk00, stream: GUESS(low) STANDIN
// Func9_1403C6CE0: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

class Stream4276f0
{
public:
    virtual void Slot00() = 0;
    virtual void Slot01() = 0;
    virtual void Close() = 0;
};

class BSResourceFaceGenBinaryFile4276f0
{
public:
    bool Func9_1403C6CE0();  // compared: 0x4276f0

    std::uint8_t unk00[0x50];
    Stream4276f0* stream;
};
static_assert(sizeof(BSResourceFaceGenBinaryFile4276f0) == 0x58, "BSResourceFaceGenBinaryFile4276f0 size");
