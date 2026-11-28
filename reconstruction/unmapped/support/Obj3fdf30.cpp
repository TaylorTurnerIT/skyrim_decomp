// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3fdf30 Obj3fdf30::Function3fdf30
// Adapted bodies: none
#include "Obj3fdf30.h"

// Flushes stream and returns 0 when stream is non-null, or returns 1 otherwise.
std::int32_t Obj3fdf30::Function3fdf30()
{
    if (stream != nullptr) {
        stream->Flush();
        return 0;
    }
    return 1;
}
