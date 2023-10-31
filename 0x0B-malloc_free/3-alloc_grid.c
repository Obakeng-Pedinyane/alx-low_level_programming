#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns pointer t0 2D array
 * @width: array width
 * @height: array height
 * Return: Always pointer to pointer to integer
 */

int **alloc_grid(int width, int height)
{
	int **answer;
	int i, j;

	answer = malloc(width * sizeof(int *));
	if (answer == NULL || width < 1 || height < 1)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			answer[i] = malloc(height * sizeof(int));
			if (answer[i] == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; j < height; j++)
				{
					answer[i][j] = 0;
				}
			}
		}
		return (answer);
	}
}
