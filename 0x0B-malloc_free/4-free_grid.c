#include "main.h"
#include <stdlib.h>
/**
 * free-grid - free a two-dimensional array
 * @grid: 2D array
 * @height: height of array
 * Return: Always void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
