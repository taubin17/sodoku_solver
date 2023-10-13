#include "SodokuPuzzle.hpp"

#include <stdexcept>

void SodokuPuzzle::set(const std::size_t row, const std::size_t column, const ValueType value)
{
  check_valid_index_(row);
  check_valid_index_(column);
  check_valid_value_(value);

  m_cells[(row * 9) + column] = value;
}

SodokuPuzzle::Cell SodokuPuzzle::get(const std::size_t row, const std::size_t column) const
{
  check_valid_index_(row);
  check_valid_index_(column);

  return m_cells[(row * 9) + column];
}

void SodokuPuzzle::check_valid_index_(const std::size_t index) const
{
  if ((index > 8) || (index < 0))
    throw std::logic_error("Invalid index for setting Sodoku puzzle.");
}

void SodokuPuzzle::check_valid_value_(const ValueType value) const
{
  if ((value > 9) || (value < 1))
    throw std::logic_error("Invalid index for setting cell of Sodoku puzzle.");
}