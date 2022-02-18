cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(StubApp VERSION 0.0.1 LANGUAGES CXX)

add_executable(StubApp)
target_sources(StubApp
    PRIVATE     app.cc
                main.cc
                app.hh)
target_include_directories(StubApp
    PRIVATE     ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(StubApp
    PRIVATE     CommonProjectOptions
                Stub::Lib)

add_format_target(StubApp)

install(TARGETS StubApp)
