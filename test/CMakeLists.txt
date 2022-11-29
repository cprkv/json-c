project(test C)
add_executable(test test.c)
target_link_libraries(test PRIVATE json-c)
