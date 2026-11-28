// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x408f80 Obj408f80::GetElapsedSeconds
// Adapted bodies: none
#include "Obj408f80.h"

// Computes elapsed time in seconds since startCounter using the inverse timer frequency.
float Obj408f80::GetElapsedSeconds() const
{
    float invFreq = g_invPerfFreq408f80;
    std::int64_t delta = GetPerfCounter408f80() - startCounter;
    return static_cast<float>(delta) * invFreq;
}
