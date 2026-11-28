// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj408f80, GetElapsedSeconds, GetPerfCounter408f80, g_invPerfFreq408f80, startCounter: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_invPerfFreq408f80;
std::int64_t GetPerfCounter408f80();

class Obj408f80
{
public:
    float GetElapsedSeconds() const;  // compared: 0x408f80

    std::int64_t startCounter;
};
