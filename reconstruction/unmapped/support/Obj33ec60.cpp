// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x33ec60 Obj33ec60::EPMagic_SpellHasKeyword
#include "Obj33ec60.h"

// Checks whether the active effect's spell has the specified keyword and stores 1.0 or 0.0 in result.
bool Obj33ec60::EPMagic_SpellHasKeyword(ActiveEffect33ec60* effect, void* keyword, void*, double* result)
{
    *result = 0.0;
    if (effect != nullptr && keyword != nullptr) {
        *result = effect->spell->keywordForm.HasKeyword(keyword) ? 1.0 : 0.0;
    }
    return true;
}
