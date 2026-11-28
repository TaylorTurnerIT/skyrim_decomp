// Source exposure: binary-analysis
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x3fdd20 Obj3fdd20::Function3fdd20
// Adapted bodies: none
#include "Obj3fdd20.h"

// Flushes stream and returns 0 when stream is non-null, or returns 1 otherwise.
std::int32_t Obj3fdd20::Function3fdd20()
{
    if (stream != nullptr) {
        stream->Flush();
        return 0;
    }
    return 1;
}
