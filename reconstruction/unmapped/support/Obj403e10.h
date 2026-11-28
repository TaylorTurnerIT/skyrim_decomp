// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// Obj403e10, BaseA403e10, BaseB403e10, g_singleton403e10: GUESS(low) STANDIN
#pragma once

#include <cstdint>

class BaseA403e10
{
public:
    virtual ~BaseA403e10()
    {
    }
};

class BaseB403e10
{
public:
    virtual ~BaseB403e10()
    {
    }
};

class Obj403e10;
extern Obj403e10* g_singleton403e10;

class Obj403e10 : public BaseA403e10, public BaseB403e10
{
public:
    Obj403e10();
    ~Obj403e10() override;  // compared: 0x403e10
};
static_assert(sizeof(Obj403e10) == 0x10, "Obj403e10 size");
