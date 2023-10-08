#pragma once

#include <cstdint>

class SodokuPuzzle
{
  public:
    using ValueType = unsigned int;

    /// @brief Sets the cell at the row-col index to cell_value
    /// @param row The row to set the cell. 0-based.
    /// @param column The column to set the cell. 0-based.
    /// @param cell_value The value to set the cell.
    /// @throws Logic error on invalid cell bounds.
    /// @throws Logic error on invalid cell value.
    void set(const std::size_t row, const std::size_t column, const ValueType cell_value);

    /// @brief Gets the value at the row-col index.
    /// @param row The row to get the cell value. 0-based.
    /// @param column The column to get the cell value. 0-based.
    /// @return The cell value of the cell index.
    /// @throws Logic error on invalid cell bounds.
    /// @throws Logic error on invalid cell value.
    ValueType get(const std::size_t row, const std::size_t column) const;

    /// @returns The 1-D size of the puzzle.
    const std::size_t size() const { return 9; };
};