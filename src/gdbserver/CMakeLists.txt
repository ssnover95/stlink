set(STUTIL_SOURCE
    gdb-remote.cpp
    gdb-remote.h
    gdb-server.cpp
    gdb-server.h
    semihosting.cpp
    semihosting.h)

if (MSVC)
    # We need a getopt from somewhere...
    set(STUTIL_SOURCE "${STUTIL_SOURCE};../getopt/getopt.c")
endif()

add_executable(st-util ${STUTIL_SOURCE})

if (WIN32 OR APPLE)
	target_link_libraries(st-util ${STLINK_LIB_STATIC})
else()
	target_link_libraries(st-util ${STLINK_LIB_SHARED})
endif()

install(TARGETS st-util
	RUNTIME DESTINATION bin
)
