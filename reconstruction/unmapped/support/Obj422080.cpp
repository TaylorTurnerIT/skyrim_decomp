// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x422080 Obj422080::ComputeRemainingSkillTerm
// Adapted bodies: none
#include "Obj422080.h"

// Computes a linear float term from the difference between 100 and a_skill clamped at 100.
float Obj422080::ComputeRemainingSkillTerm(std::int32_t a_skill)
{
    std::int32_t clamped = (a_skill < 100) ? a_skill : 100;
    return static_cast<float>(100 - clamped) * g_scale422080 + g_base422080;
}
