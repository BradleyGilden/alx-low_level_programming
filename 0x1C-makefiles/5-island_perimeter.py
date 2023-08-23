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
                if r-1 == -1 or grid[r-1][c] == 0:
                    perimeter += 1
                # check the bottom
                if r+1 == rowlen or grid[r+1][c] == 0:
                    perimeter += 1
                # check left side
                if c-1 == -1 or grid[r][c-1] == 0:
                    perimeter += 1
                # check right side
                if c+1 == colen or grid[r][c+1] == 0:
                    perimeter += 1

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [0, 1, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))  # should print 10
