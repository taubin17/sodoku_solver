add_executable(
  sodoku_puzzle_tests
  SodokuPuzzle_tests.cpp
)

target_link_libraries(
  sodoku_puzzle_tests
  PUBLIC
  sodoku_puzzle
  GTest::gtest_main
)

gtest_discover_tests(sodoku_puzzle_tests)