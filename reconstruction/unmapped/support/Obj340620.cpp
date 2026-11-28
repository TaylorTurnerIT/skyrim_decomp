// Source exposure: binary-analysis (pinned local image listing).
// Code origin: original; reconstructed from the pinned image listing only.
// SPDX-License-Identifier: CC0-1.0
// Recipe: reconstruction/recipes/o2-fpfast.json
// Cookbook: 0x340620 48
// 0x340620 Obj340620::WrapAngle
// Adapted bodies: none
#include "Obj340620.h"

// Adds periods while angle is negative and subtracts them while it exceeds g_period340620.
float Obj340620::WrapAngle(float angle)
{
    while (angle < 0.0f) {
        angle += g_period340620;
    }
    while (angle > g_period340620) {
        angle += g_negPeriod340620;
    }
    return angle;
}
