set(TESTS
	usb
	sg
)

foreach(test ${TESTS})
	add_executable(${test} ${test}.cpp)
	add_dependencies(${test} ${STLINK_LIB_STATIC})
	target_link_libraries(${test} ${STLINK_LIB_STATIC})
	add_test(${test} ${CMAKE_CURRENT_BINARY_DIR}/${test})
endforeach()

add_executable(flash flash.cpp "${CMAKE_SOURCE_DIR}/src/tools/flash_opts.cpp")
target_link_libraries(flash ${STLINK_LIB_STATIC})
add_test(flash ${CMAKE_CURRENT_BINARY_DIR}/flash)
