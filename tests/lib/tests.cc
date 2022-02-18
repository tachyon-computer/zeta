/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <StubLib/lib.hh>

TEST_CASE("stub lib", "[lib]") {

    SECTION("capitalize string") {
        std::string testString = "test_string";

        lib::Lib::capitalize(testString);

        REQUIRE(testString == "TEST_STRING");
    }

    SECTION("empty string") {
        std::string testString;

        lib::Lib::capitalize(testString);

        REQUIRE(testString.empty());
    }
}
