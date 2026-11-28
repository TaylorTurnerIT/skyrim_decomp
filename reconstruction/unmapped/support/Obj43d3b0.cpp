// Source exposure: binary-analysis (pinned image listing).
// Code origin: original reconstruction from the pinned image listing.
// SPDX-License-Identifier: CC0-1.0
// 0x43d3b0 Obj43d3b0::MapCode
// Adapted bodies: none
#include "Obj43d3b0.h"

// Maps enum codes 1..7 to remapped indices and returns -1 for all other values.
std::int32_t Obj43d3b0::MapCode(std::int32_t a_code)
{
    std::int32_t result = -1;
    switch (a_code) {
    case 1:
        result = 0;
        break;
    case 2:
        result = 6;
        break;
    case 3:
        result = 1;
        break;
    case 5:
        result = 2;
        break;
    case 4:
        result = 3;
        break;
    case 6:
        result = 4;
        break;
    case 7:
        result = 5;
        break;
    default:
        break;
    }
    return result;
}
