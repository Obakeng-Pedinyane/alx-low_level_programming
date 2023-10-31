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
	int i, j, k, l;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	answer = malloc(height * sizeof(int *));
	if (answer == NULL)
	{
		free(answer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		answer[i] = malloc(width * sizeof(int));
		if (answer[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(answer[j]);
			}
			free(answer);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			answer[k][l] = 0;
		}
	}
	return (answer);
}
