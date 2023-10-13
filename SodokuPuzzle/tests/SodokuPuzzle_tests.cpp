#include <gtest/gtest.h>

#include "SodokuPuzzle.hpp"

// Verify we can construct a new puzzle.
TEST(SodokuPuzzle, constructor)
{
  const auto puzzle = SodokuPuzzle();
}

// Verify all cells initialize to unfilled.
TEST(SodokuPuzzle, default_cell_state)
{
  const auto puzzle = SodokuPuzzle();

  for (const auto cell : puzzle)
  {
    EXPECT_EQ(cell, std::nullopt);
  }
}

// Verify we can set a cell.
TEST(SodokuPuzzle, set_index_based)
{
  auto puzzle = SodokuPuzzle();

  // Verify valid set has no issues.
  puzzle.set(0, 0, 1);

  // Verify invalid cell bounds throws.
  EXPECT_THROW(puzzle.set(-1, 0, 1), std::logic_error);
  EXPECT_THROW(puzzle.set(0, -1, 1), std::logic_error);
  EXPECT_THROW(puzzle.set(9, 0, 1), std::logic_error);
  EXPECT_THROW(puzzle.set(0, 9, 1), std::logic_error);

  // Verify invalid cell value throws.
  EXPECT_THROW(puzzle.set(0, 0, -1), std::logic_error);
  EXPECT_THROW(puzzle.set(0, 0, 10), std::logic_error);
}

// Verify we can set a cell using iterators.
TEST(SodokuPuzzle, set_iterator_based)
{
  auto puzzle = SodokuPuzzle();

  EXPECT_EQ(*puzzle.begin(), std::nullopt);
  *puzzle.begin() = 7;
  EXPECT_NE(*puzzle.begin(), std::nullopt);
}

// Verify we can get a cell using array index method.
TEST(SodokuPuzzle, get_index_based)
{
  auto puzzle = SodokuPuzzle();

  // Verify valid get has no issues on range of all cells.
  for (auto row = 0; row < puzzle.size(); ++row)
  {
    for (auto column = 0; column < puzzle.size(); ++column)
    {
      puzzle.set(row, column, 1);
      EXPECT_EQ(puzzle.get(row, column), 1);
    }
  }

  // Verify invalid cell bounds throws.
  EXPECT_THROW(puzzle.get(-1, 0), std::logic_error);
  EXPECT_THROW(puzzle.get(0, -1), std::logic_error);
  EXPECT_THROW(puzzle.get(9, 0), std::logic_error);
  EXPECT_THROW(puzzle.get(0, 9), std::logic_error);
}

// Verify we can get a cell using iterators.
TEST(SodokuPuzzle, get_iterator_based)
{
  auto puzzle = SodokuPuzzle();

  const unsigned int value = 7;
  puzzle.set(0, 0, value);
  EXPECT_EQ(*puzzle.begin(), value);
}