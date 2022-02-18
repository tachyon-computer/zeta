add_executable(LibTests)
target_sources(LibTests
    PRIVATE     tests.cc)
target_link_libraries(LibTests
    PRIVATE     CommonProjectOptions
                Catch2::Catch2WithMain
                Stub::Lib)

add_test(NAME LibTests COMMAND LibTests)
