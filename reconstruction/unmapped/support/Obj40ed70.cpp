// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x40ed70 Obj40ed70::ToggleFlags
// Adapted bodies: none
#include "Obj40ed70.h"

// Toggles the primary flag and sets the secondary flag when the primary flag becomes false.
void Obj40ed70::ToggleFlags()
{
    g_flagA40ed70 = !g_flagA40ed70;
    if (!g_flagA40ed70) {
        g_flagB40ed70 = true;
    }
}
