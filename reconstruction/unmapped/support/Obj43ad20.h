// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj43ad20, g_names43ad20, FindNameIndex: GUESS(low) STANDIN
#pragma once

#include <cstdint>

extern "C" __declspec(dllimport) int __cdecl _stricmp(const char* a_lhs, const char* a_rhs);

extern const char* g_names43ad20[5];

class Obj43ad20
{
public:
    static std::int32_t FindNameIndex(const char* a_name);  // compared: 0x43ad20
};
