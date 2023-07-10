#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2D array
 * @height: height dimension of grid
 * @grid: 2D grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
