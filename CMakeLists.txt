cmake_minimum_required(VERSION 3.10)

project(sodoku_solver)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include GTEST.
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
option(INSTALL_GTEST OFF) # This prevents Jenkins from needing root privelages.
FetchContent_MakeAvailable(googletest)
enable_testing()
include(GoogleTest)

# Add top level directory to include path.
include_directories(${CMAKE_CURRENT_SOURCE_DIR})


# Add component directories.
add_subdirectory(SodokuPuzzle)