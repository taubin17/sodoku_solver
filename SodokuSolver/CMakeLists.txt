add_library(sodoku_solver SodokuSolver.cpp)

# Include this directory for unit tests.
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Include unit tests.
add_subdirectory(tests)