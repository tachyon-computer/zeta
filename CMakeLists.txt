cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(zeta VERSION 0.0.1 LANGUAGES C)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(MessageColors)
include(LoggingHelper)
include(TargetLinkSystemLibraries)

add_library(common_project_options INTERFACE)
include(CommonProjectOptions)
include(CompilerWarnings)

include(CppCheck)
include(ClangTidy)
include(PVSStudio)
include(ClangFormat)
include(CTags)

add_subdirectory(zeta)
