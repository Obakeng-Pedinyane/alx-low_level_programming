#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory
 * @b: function parameter
 * Return: Void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *answer;

	answer = malloc(b);
	if (answer == NULL)
	{
		exit(98);
	}
	else
	{
		return (answer);
	}
}
