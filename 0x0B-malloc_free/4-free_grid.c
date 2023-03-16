#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free allocated grid
 *
 * @grid: allocated grid
 * @height: height of grid
 *
 * Return: vood
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
