// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x4107b0 Obj4107b0::CheckAndAdvanceDeadline
// Adapted bodies: none
#include "Obj4107b0.h"

// Advances the 31-bit deadline when the current tick count exceeds it.
bool Obj4107b0::CheckAndAdvanceDeadline(std::uint32_t a_interval)
{
    std::uint32_t now = timeGetTime();
    if (now > deadline) {
        deadline = now + a_interval;
        return true;
    }
    return false;
}
