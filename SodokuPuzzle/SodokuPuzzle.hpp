#pragma once

#include <cstdint>
#include <array>
#include <optional>

class SodokuPuzzle
{
  public:
    using ValueType = unsigned int;
    using Cell = std::optional<ValueType>;

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
    Cell get(const std::size_t row, const std::size_t column) const;

    constexpr Cell * begin() { return m_cells.begin(); };
    constexpr Cell * end()  { return m_cells.end(); };

    constexpr const Cell * begin() const { return m_cells.begin(); };
    constexpr const Cell * end() const { return m_cells.end(); };

    /// @returns The 1-D size of the puzzle.
    constexpr std::size_t size() const { return 9; };

  protected:
    void check_valid_index_(const std::size_t row) const;

    void check_valid_value_(const ValueType value) const;

    std::array<std::optional<ValueType>, 81> m_cells;
};