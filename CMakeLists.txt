cmake_minimum_required(VERSION 3.8)
# project name, please change it
project(CT1)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fPIC ")

# Output paths
set(CT1_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/library")

# project Version
set(CT1_VERSION_MAJOR  0)
set(CT1_VERSION_MINOR  0)
set(CT1_VERSION_PATCH  1)
set(CT1_VERSION_STR "${CT1_VERSION_MAJOR}.${CT1_VERSION_MINOR}.${CT1_VERSION_PATCH}")

# Build Options
option(CT1_ALL                "Enable all features"          No)
option(CT1_DEBUG              "Build with debug symbols"     No)


# Enable Debug symbols if specified
if(CT1_DEBUG)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

configure_file(
        "${PROJECT_SOURCE_DIR}/include/ct1_info.h.in"
        "${PROJECT_SOURCE_DIR}/include/ct1_info.h"
)

# General Headers
include_directories(
        include/
        lib/
        lib/sha1/
)

# Instruct CMake to build project
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/sha1)


