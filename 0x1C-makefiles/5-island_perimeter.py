#!/usr/bin/python3
"""module 5-island_perimeter"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): List of lists representing the grid.

    Returns:
        int: Perimeter of the island.

    """

    size = 0
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                size += 1

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter += 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter += 1

    return size * 4 - perimeter * 2
