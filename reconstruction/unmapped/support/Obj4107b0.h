// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj4107b0, CheckAndAdvanceDeadline, timeGetTime, unk00, deadline, flag: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern "C" __declspec(dllimport) std::uint32_t __stdcall timeGetTime();

class Obj4107b0
{
public:
    bool CheckAndAdvanceDeadline(std::uint32_t a_interval);  // compared: 0x4107b0

    std::uint8_t unk00[0x20];
    std::uint32_t deadline : 31;
    std::uint32_t flag : 1;
};
