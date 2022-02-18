cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(STUB_PROJECT VERSION 0.1.0 LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(MessageColors)
include(LoggingHelper)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CommonProjectOptions)
include(CompilerWarnings)
include(CompilerSanitizers)
include(CodeCoverage)

include(ClangTidy)
include(ClangFormat)
include(CTags)

add_subdirectory(extern)
add_subdirectory(src)

if(BUILD_TESTING AND TACHYON_OPTIONS_BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

set(CPACK_GENERATOR "TGZ")
set(CPACK_PACKAGE_VENDOR "Tachyon Computer")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Template for Tachyon projects")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")

include(CPack)
