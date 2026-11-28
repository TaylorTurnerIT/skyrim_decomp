// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj422080, g_scale422080, g_base422080, ComputeRemainingSkillTerm: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern float g_scale422080;
extern float g_base422080;

class Obj422080
{
public:
    static float ComputeRemainingSkillTerm(std::int32_t a_skill);  // compared: 0x422080
};
