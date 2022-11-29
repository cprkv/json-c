cmake_minimum_required(VERSION 3.21)
project(json-c C)

add_library(${PROJECT_NAME})
file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS include/*.h src/*.c src/*.h)
target_sources(${PROJECT_NAME} PRIVATE ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
set_target_properties(${PROJECT_NAME} PROPERTIES C_STANDARD 17 C_STANDARD_REQUIRED ON)

if(PROJECT_IS_TOP_LEVEL)
  add_subdirectory(test)
endif()