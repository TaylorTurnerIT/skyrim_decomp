// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// 0x33ed80 Obj33ed80::Function33ed80
// Adapted bodies: none
#include "Obj33ed80.h"

// Checks whether the player's referenced form at offset 0xba0 has the given keyword.
bool Obj33ed80::Function33ed80(void*, void* keyword, void*, double* result)
{
    *result = 0.0;
    if (keyword != nullptr) {
        Form33ed80* form = g_player33ed80->activeForm;
        *result = (form != nullptr && form->keywordForm.HasKeyword(keyword)) ? 1.0 : 0.0;
    }
    return true;
}
