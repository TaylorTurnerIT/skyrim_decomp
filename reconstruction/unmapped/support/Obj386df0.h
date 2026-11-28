// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj386df0, Target386df0: GUESS(low)
#pragma once

#include <cstdint>

struct Target386df0
{
    std::uint8_t unk00[0x28];
    std::uint32_t status;
};

class Obj386df0
{
public:
    void ReportError(Target386df0* target, const char* fmt, ...);

    std::uint8_t unk00[0x5c];
    bool hasError;
};
