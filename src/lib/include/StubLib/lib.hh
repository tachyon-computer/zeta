/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#pragma once

namespace lib {

/**
 * @brief   Stub library class
 */
class Lib
{
  public:
    /**
     * @brief   Capitalize passed string
     *
     * @param   str     String to capitalize
     *
     * @return
     */
    static auto capitalize(std::string& str) -> void;
};

} // namespace lib
