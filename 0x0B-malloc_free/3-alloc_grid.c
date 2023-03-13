#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2d integer array on heap...
 *			    with predifined width and height, with all elements...
 *			    initialized to 0.
 *			    returns pointer to created 2d array.
 *
 * @width: width of a grid (columns)
 * @height: height of grid (rows)
 *
 * Return: return a pointer to a 2d array
 *		   NULL on failure to allocate memory
 *		   if height or width <= 0
 *
 * deduction: create double pointer int **grid that points to an array of...
 *			  pointers, that point to an array of integers.
 *			  revison of pointers and 2d arrays:
 *			  *(*(a + i) + j) -> value at a[i][j]
 *			  *(a + i) + j -> address at &a[i][j]
 *			  *(a + i) -> address at &a[i] or &a[i][0]
 *            a -> address of &a[0] or &a[0][0]
 *
 *			  declare memory for pointer to array of pointers: see line 34
 *			  then for every pointer in the array declare memory for array:
 *			  see line 39
 */

void *out_of_memory(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	return (NULL);
}

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (out_of_memory(grid, height));

	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
			return (out_of_memory(grid, height));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
