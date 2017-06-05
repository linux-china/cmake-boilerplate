# Install project related headers

if(NOT WITHOUT_HEADERS)
    #install(FILES "ct1_info.h"
    #        DESTINATION include/
    #        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)

    #[[file(GLOB headers "module1/*.h")
    #install(FILES ${headers}
    #        DESTINATION include/module1
    #        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ)]]
endif()