// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3bf4b0 Obj3bf4b0::Function3bf4b0
// Adapted bodies: none
#include "Obj3bf4b0.h"

// Formats either a default label or a table entry name and integer value into buffer.
void Obj3bf4b0::Function3bf4b0(char* buffer, std::uint32_t bufferSize, std::int32_t index,
                               std::uint32_t value, bool allowDefault)
{
    if (allowDefault && value == 0) {
        FormatString3bf4b0(buffer, bufferSize, gFmt185f2a8);
    } else {
        FormatString3bf4b0(buffer, bufferSize, gFmt185f408, gTable209c860[index].name, value);
    }
}
