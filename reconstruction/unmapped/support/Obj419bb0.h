// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419bb0::UpdateSunsetEnd (inline helper), treated as adapted: shaped like Sky::GetSunsetEnd in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/medialocationcontroller.cpp:569
// SPDX-License-Identifier: CC0-1.0
// Obj419bb0, Weather419bb0, g_timeScale419bb0, g_sunsetEnd419bb0, g_transitionHours419bb0, g_maxHour419bb0, g_sunsetWindowEnd419bb0, GetSunsetWindowEnd, UpdateSunsetEnd, sunsetEnd, currentWeather, flags, unk00, unk48: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern const float g_timeScale419bb0;
extern float g_sunsetEnd419bb0;
extern float g_transitionHours419bb0;
extern const float g_maxHour419bb0;
extern float g_sunsetWindowEnd419bb0;

struct Weather419bb0
{
    std::uint8_t unk00[0x7B];
    std::uint8_t sunsetEnd;
};

class Obj419bb0
{
public:
    float GetSunsetWindowEnd();  // compared: 0x419bb0

    void UpdateSunsetEnd()
    {
        if ((flags & (1u << 12)) != 0u && currentWeather) {
            g_sunsetEnd419bb0 = static_cast<float>(currentWeather->sunsetEnd) * g_timeScale419bb0;
            flags &= ~(1u << 12);
        }
    }

    std::uint8_t unk00[0x40];
    Weather419bb0* currentWeather;
    std::uint8_t unk48[0x194];
    std::uint32_t flags;
};
