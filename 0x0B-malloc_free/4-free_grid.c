#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free dynamically allocated 2d array
 *
 * @grid: pointer to pointer of int (grid array input)
 * @height: the number of rows of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
