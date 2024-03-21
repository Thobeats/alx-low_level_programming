#!/usr/bin/python3
"""
Create a function that
gets the perimeter of a
grid
"""


def island_perimeter(grid):
    """
    collects a grid
    each cell is a square of size 1
    if water is above add 1
    if water is below add 1
    if water is at the sides add 1
    """
    perimeter = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1

    return perimeter
