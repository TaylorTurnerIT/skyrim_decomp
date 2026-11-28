// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Obj33ede0, Sub33ede0, Entry33ede0, Player33ede0, g_player33ede0, Query33ede0: GUESS(low)
#pragma once

#include <cstdint>

struct Sub33ede0
{
    void* value;
};

struct Entry33ede0
{
    void* primary;
    Sub33ede0* secondary;
};

struct Player33ede0
{
    std::uint8_t unk00[0xba8];
    Entry33ede0* entry;
};

extern Player33ede0* g_player33ede0;
void* Query33ede0(void* primary, void* secondary);

class Obj33ede0
{
public:
    static bool Function33ede0(void* ref, void* param1, void* param2, double* result);
};
