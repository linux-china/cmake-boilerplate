# Set static dependencies
#set(CT1_DEPS
#        ${CT1_DEPS}
#        )

## set internal libraries
add_library(ct1-welcome-static STATIC welcome.c)
add_library(sub::welcome ALIAS ct1-welcome-static)

set(SOURCE_FILES main.c)

set(SOURCE_FILES
        ${SOURCE_FILES}
        main.c
        )

## executable
add_executable(ct1 ${SOURCE_FILES})
target_link_libraries(ct1 ct1-welcome-static)