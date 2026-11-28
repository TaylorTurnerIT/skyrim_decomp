// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj441ea0, Target441ea0, HandleEntry441ea0, g_handleTable441ea0, IsValid, unk00, unk08, flags, unk04, target, handle: GUESS(low) STANDIN
#pragma once

#include <cstdint>

struct Target441ea0
{
    std::uint64_t unk00;
    std::uint32_t unk08;
};

struct HandleEntry441ea0
{
    std::uint32_t flags;
    std::uint32_t unk04;
    Target441ea0* target;
};
static_assert(sizeof(HandleEntry441ea0) == 0x10, "HandleEntry441ea0 size");

extern HandleEntry441ea0 g_handleTable441ea0[];

struct Obj441ea0
{
    bool IsValid() const;  // compared: 0x441ea0

    std::uint32_t handle;
};
