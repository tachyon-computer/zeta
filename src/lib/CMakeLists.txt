cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(StubLib VERSION 0.0.1 LANGUAGES CXX)

add_library(StubLib STATIC)
target_sources(StubLib
    PRIVATE     src/lib.cc
    PUBLIC      include/StubLib/lib.hh)
target_include_directories(StubLib
    PUBLIC      ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(StubLib
    PRIVATE     CommonProjectOptions
                CodeCoverage)

add_format_target(StubLib)

add_library(Stub::Lib ALIAS StubLib)
