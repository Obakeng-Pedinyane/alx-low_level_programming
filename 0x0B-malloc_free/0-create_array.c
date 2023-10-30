#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars, and inits it to c
 *
 * @size: size of array
 *
 * @c: character initialized
 *
 * Return: Alwayss an array
 */
char *create_array(unsigned int size, char c)
{
	char *answer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if ((malloc(sizeof(char) * size)))
		{
			answer = malloc(sizeof(char) * size);
			for (i = 0; i < size; i++)
			{
				answer[i] = c;
			}
			return (answer);
		}
		else
		{
			return (NULL);
		}
	}
	free(answer);
}
