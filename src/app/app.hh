/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#pragma once

namespace app {

/**
 * @brief   Stub application class
 */
class App
{
  public:
    /**
     * @brief   Constructor with the app name
     *
     * @note    Application name can't be empty
     *
     * @param   name    Application name
     */
    explicit App(std::string name);
    /**
     * @brief   Deleted copy constructor
     */
    App(const App&) = delete;
    /**
     * @brief   Deleted move constructor
     */
    App(App&&) = delete;
    /**
     * @brief   Deleted copy assignment operator
     */
    App& operator=(const App&) = delete;
    /**
     * @brief   Deleted move assignment operator
     */
    App& operator=(App&&) = delete;

  public:
    /**
     * @brief   Runs an application
     *
     * @return  Exit code
     */
    auto run() const -> int;

  private:
    /// @brief  Application name
    std::string m_name;
};

} // namespace app
