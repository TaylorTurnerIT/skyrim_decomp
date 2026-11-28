// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419ab0::GetSunriseBegin (inline helper), treated as adapted: shaped like Sky::GetSunsetEnd in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/medialocationcontroller.cpp:569
// SPDX-License-Identifier: CC0-1.0
// Obj419ab0, Weather419ab0, g_timeScale419ab0, g_sunriseBegin419ab0, g_transitionHours419ab0, g_sunriseStart419ab0, GetSunriseWindowStart, GetSunriseBegin, sunriseBegin, currentWeather, flags, unk00, unk48: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern const float g_timeScale419ab0;
extern float g_sunriseBegin419ab0;
extern float g_transitionHours419ab0;
extern float g_sunriseStart419ab0;

struct Weather419ab0
{
    std::uint8_t unk00[0x78];
    std::uint8_t sunriseBegin;
};

class Obj419ab0
{
public:
    float GetSunriseWindowStart();  // compared: 0x419ab0

    float GetSunriseBegin()
    {
        if ((flags & (1u << 9)) != 0u && currentWeather) {
            g_sunriseBegin419ab0 = static_cast<float>(currentWeather->sunriseBegin) * g_timeScale419ab0;
            flags &= ~(1u << 9);
        }
        return g_sunriseBegin419ab0;
    }

    std::uint8_t unk00[0x40];
    Weather419ab0* currentWeather;
    std::uint8_t unk48[0x194];
    std::uint32_t flags;
};
