/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "app.hh"

#include <iostream>
#include <StubLib/lib.hh>

namespace app {

App::App(std::string name)
    : m_name(std::move(name))
{
    std::cout << "Hello, World!\n";

    lib::Lib::capitalize(m_name);
}

int
App::run() const
{
    if(m_name.empty())
    {
        return EXIT_FAILURE;
    }

    std::cout << m_name << " application is running!\n";

    return EXIT_SUCCESS;
}

} // namespace app
