// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419ab0::GetSunriseBegin (inline helper), treated as adapted: shaped like Sky::GetSunsetEnd in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/medialocationcontroller.cpp:569
// SPDX-License-Identifier: CC0-1.0
// 0x419ab0 Obj419ab0::GetSunriseWindowStart
#include "Obj419ab0.h"

// Computes and caches the sunrise transition window start clamped at zero.
float Obj419ab0::GetSunriseWindowStart()
{
    if ((flags & (1u << 13)) != 0u) {
        float start = GetSunriseBegin() - g_transitionHours419ab0;
        g_sunriseStart419ab0 = (start > 0.0f) ? start : 0.0f;
        flags &= ~(1u << 13);
    }
    return g_sunriseStart419ab0;
}
