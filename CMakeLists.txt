cmake_minimum_required(VERSION 3.10)

project(sodoku_solver)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  sodoku_puzzle_tests
  SodokuPuzzle.cpp
  SodokuPuzzle_tests.cpp
)

target_link_libraries(
  sodoku_puzzle_tests
  PUBLIC
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sodoku_puzzle_tests)