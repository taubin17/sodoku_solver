#include <gtest/gtest.h>

#include "SodokuSolver.hpp"

// Verify we can default construct the solver.
TEST(SodokuSolver, default_constructor)
{
  const auto solver = SodokuSolver();
}

// Verify we can construct the solver with a Sodoku board.
TEST(SodokuSolver, board_constructor)
{
  auto puzzle = SodokuPuzzle();
  auto solver = SodokuSolver(puzzle);
}

// Verify a solved board returns as solved.
TEST(SodokuSolver, valid_solution)
{

}

// Verify an invalid board returns as unsolved.
TEST(SodokuSolver, invalid_solution)
{

}

// Verify an incomplete board returns as unsolved.
TEST(SodokuSolver, incomplete_solution)
{
  auto puzzle = SodokuPuzzle();
  auto solver = SodokuSolver(puzzle);
  
}

// Solve a solvable puzzle. Verify said puzzle against known solution.
TEST(SodokuSolver, solve_puzzle)
{

}

// Try to solve an impossible puzzle. Verify solver reports that puzzle is invalid.
TEST(SodokuSolver, solve_invalid_puzzle)