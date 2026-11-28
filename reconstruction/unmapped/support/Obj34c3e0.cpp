// Source exposure: mixed (pinned image listing; sibling source).
// Code origin: written from the pinned image listing; see Adapted bodies.
// Adapted bodies: Obj34c3e0::HasBalancedParens, treated as adapted: shaped like ScriptCompiler_CheckParentheses in the sibling source cited below (CC0-1.0).
// Sibling source: momusdigital/fnv_decomp@2b07cb3e src/fallout_shared/tesscriptcompiler.cpp:682
// SPDX-License-Identifier: CC0-1.0
// 0x34c3e0 Obj34c3e0::HasBalancedParens
#include "Obj34c3e0.h"

// Returns whether parentheses in text starting at startIndex have equal open and close counts.
bool Obj34c3e0::HasBalancedParens(const char* text, int startIndex)
{
    int depth = 0;
    for (int i = startIndex; text[i] != 0; ++i) {
        switch (text[i]) {
        case '(':
            ++depth;
            break;
        case ')':
            --depth;
            break;
        default:
            break;
        }
    }
    if (depth == 0) {
        return true;
    }
    return false;
}
