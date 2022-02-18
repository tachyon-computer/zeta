# === Catch2 === 
include(CTest)

if(BUILD_TESTING AND TACHYON_OPTIONS_BUILD_TESTING)
    option(CATCH_BUILD_TESTING "Build SelfTest project" OFF)
    option(CATCH_BUILD_STATIC_LIBRARY "Builds static library from the main implementation. EXPERIMENTAL" ON)
    option(CATCH_ENABLE_WERROR "Enable all warnings as errors" OFF)
    option(CATCH_INSTALL_DOCS "Install documentation alongside library" OFF)
    option(CATCH_INSTALL_HELPERS "Install contrib alongside library" OFF)

    add_subdirectory(Catch2)

    list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Catch2/contrib)

    include(Catch)
endif()
