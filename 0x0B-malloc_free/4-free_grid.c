#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid  - frees up a grid
 *@grid: grid to check
 *@height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
