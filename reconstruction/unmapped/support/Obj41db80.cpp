// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x41db80 Obj41db80::GetRegenRate
// Adapted bodies: none
#include "Obj41db80.h"

// Returns the actor's base regeneration rate for the given attribute index.
float Obj41db80::GetRegenRate(std::int32_t a_value)
{
    Actor41db80* actor = static_cast<Actor41db80*>(this);
    switch (a_value) {
    case 27:
        if (g_flag41db80 && actor != g_player41db80 && actor->raceData->IsSpecial() && !actor->CheckState(true)) {
            return 0.0f;
        }
        return actor->raceData->rate13c;
    case 28:
        return actor->raceData->rate140;
    case 29:
        return actor->raceData->rate144;
    default:
        return 0.0f;
    }
}
