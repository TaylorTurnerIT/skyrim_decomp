// Source exposure: mixed (pinned image listing; CrashLogger PDB names).
// Code origin: original, from the pinned image listing; names also from the CrashLogger PDB.
// SPDX-License-Identifier: CC0-1.0
// 0x43dff0 FR2MatrixVTC43dff0::Equals
#include "FR2MatrixVTC43dff0.h"

#include <cstring>

// Compares matrix dimensions and raw float storage; PDB lists FR2MatrixVTC<float>::operator==.
bool FR2MatrixVTC43dff0::Equals(const FR2MatrixVTC43dff0& a_other) const
{
    if (a_other.rows != rows || a_other.cols != cols) {
        return false;
    }
    if (rows == 0 || cols == 0) {
        return true;
    }
    std::size_t count = static_cast<std::size_t>(cols) * static_cast<std::size_t>(rows);
    return std::memcmp(data, a_other.data, count * sizeof(float)) == 0;
}
