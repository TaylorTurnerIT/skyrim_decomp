// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// Obj3fde80, Obj3fde80::Stream, Obj3fde80::Base, Obj3fde80::Derived, Obj3fde80::stream, Obj3fde80::ownsStream: GUESS(low)
#pragma once

#include <cstdint>

class Obj3fde80
{
public:
    class Stream
    {
    public:
        virtual ~Stream();
    };

    class Base
    {
    public:
        virtual ~Base()
        {
        }

        std::uint64_t unk08;  // 0x08
    };

    class Derived : public Base
    {
    public:
        ~Derived() override;  // compared: 0x3fde80

        Stream* stream;   // 0x10
        bool ownsStream;  // 0x18
    };
};
