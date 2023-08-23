#!/usr/bin/python3
"""
Contains a function def island_perimeter(grid): that returns
the perimeter of the island described in grid:
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    colen = len(grid[0])
    rowlen = len(grid)
    perimeter = 0

    for r in range(rowlen):
        for c in range(colen):
            if grid[r][c] == 1:
                # check top of block
                if r-1 >= 0 and grid[r-1][c] == 0:
                    perimeter += 1
                # check the bottom
                if r+1 <= rowlen-1 and grid[r+1][c] == 0:
                    perimeter += 1
                # check left side
                if c-1 >= 0 and grid[r][c-1] == 0:
                    perimeter += 1
                # check right side
                if c+1 <= colen-1 and grid[r][c+1] == 0:
                    perimeter += 1

    return perimeter
