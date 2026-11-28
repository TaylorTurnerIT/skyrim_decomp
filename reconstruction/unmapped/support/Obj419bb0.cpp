// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj419bb0::UpdateSunsetEnd (inline helper), treated as adapted: shaped like Sky::GetSunsetEnd in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/medialocationcontroller.cpp:569
// SPDX-License-Identifier: CC0-1.0
// 0x419bb0 Obj419bb0::GetSunsetWindowEnd
#include "Obj419bb0.h"

// Computes and caches the sunset transition window end clamped at the maximum hour.
float Obj419bb0::GetSunsetWindowEnd()
{
    if ((flags & (1u << 14)) != 0u) {
        UpdateSunsetEnd();
        float end = g_sunsetEnd419bb0 + g_transitionHours419bb0;
        g_sunsetWindowEnd419bb0 = (end < g_maxHour419bb0) ? end : g_maxHour419bb0;
        flags &= ~(1u << 14);
    }
    return g_sunsetWindowEnd419bb0;
}
