// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj4219d0, Setting4219d0, g_minSetting4219d0, g_maxSetting4219d0, g_offset4219d0, g_mult4219d0, g_hundredth4219d0, ComputeInterpolatedSetting, unk00, value: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct Setting4219d0
{
    std::uint64_t unk00;
    float value;
};

extern Setting4219d0* g_minSetting4219d0;
extern Setting4219d0* g_maxSetting4219d0;
extern const float g_offset4219d0;
extern float g_mult4219d0;
extern const float g_hundredth4219d0;

class Obj4219d0
{
public:
    static float ComputeInterpolatedSetting(float a_value);  // compared: 0x4219d0
};
