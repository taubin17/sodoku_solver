add_executable(
  sodoku_solver_tests
  SodokuSolver_tests.cpp
)

target_link_libraries(
  sodoku_solver_tests
  PUBLIC
  sodoku_solver
  sodoku_puzzle
  GTest::gtest_main
)

gtest_discover_tests(sodoku_solver_tests)