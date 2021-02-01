option(TOOLS_ENABLE_TAGS
       "Enable automatic tags generation with ctags"
       TRUE)

if(TOOLS_ENABLE_TAGS)
    find_program(CTAGS ctags)
    if(CTAGS)
        log_option_enabled("tags")
        add_custom_target(tags_generation ALL
                          COMMAND ${CTAGS} -R --fields=+iaS --extras=+q --language-force=C++ .
                          COMMENT "Generating tags file..."
                         )
    else()
        log_program_missing("ctags")
    endif()
else()
    log_option_disabled("tags")
endif()
