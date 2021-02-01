cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(zetac VERSION 0.0.1 LANGUAGES CXX)

file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc)
file(GLOB_RECURSE includes ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hh)

add_executable(zetac)
target_sources(zetac
    PRIVATE     "${sources}"
    PUBLIC      "${includes}"
    )
target_include_directories(zetac
    PUBLIC      ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
target_link_libraries(zetac
    PRIVATE     common_project_options
    )

add_format_target(zetac)
add_pvs_target(zetac)
