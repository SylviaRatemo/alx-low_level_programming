#!/usr/bin/python3
"""
Module to compute island perimeter
"""


def island_perimeter(grid):
    """The Module"""
    count = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    count += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    count += 1
                if x == 0 or grid[y][x - 1] == 0:
                    count += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    count += 1
    return count
