/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "StubLib/lib.hh"

#include <algorithm>

namespace lib {

void
Lib::capitalize(std::string& str)
{
    if(str.empty())
    {
        return;
    }

    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

} // namespace lib
