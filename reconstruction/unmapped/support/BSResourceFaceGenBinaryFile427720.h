// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// BSResourceFaceGenBinaryFile427720: CRASHLOGGER_PDB(59818@2026.10.24)
// Stream427720, unk00, stream: GUESS(low) STANDIN
// Func10_1403C6D10: CRASHLOGGER_PDB(59818@2026.10.24)
#pragma once

#include <cstdint>

class Stream427720
{
public:
    virtual ~Stream427720() = default;
};

class BSResourceFaceGenBinaryFile427720
{
public:
    void Func10_1403C6D10();  // compared: 0x427720

    std::uint8_t unk00[0x50];
    Stream427720* stream;
};
static_assert(sizeof(BSResourceFaceGenBinaryFile427720) == 0x58, "BSResourceFaceGenBinaryFile427720 size");
