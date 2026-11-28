// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj32e8e0, NameSlot32e8e0, g_names32e8e0: GUESS(low)
#pragma once

#include <cstddef>

extern "C" __declspec(dllimport) int _strnicmp(const char* lhs, const char* rhs, std::size_t count);

struct NameSlot32e8e0
{
    char text[8];
};

extern const NameSlot32e8e0 g_names32e8e0[16];

class Obj32e8e0
{
public:
    int FindNameIndex(const char* name);
};
