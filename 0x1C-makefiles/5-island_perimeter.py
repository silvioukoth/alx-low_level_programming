#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    island = 0
    neighbor = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                island += 1
                if x < len(grid[y])-1 and grid[y][x+1] == 1:
                    neighbor = neighbor + 1
                if y < len(grid ) -1 and grid[y+1][x] == 1:
                    neighbor = neighbor + 1
    return island*4 - 2*neighbor
