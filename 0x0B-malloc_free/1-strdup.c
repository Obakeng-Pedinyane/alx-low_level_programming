#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns pointer to duplicate of str
 *
 * @str: string passed to function
 *
 * Return: A pointer to duplicate of str
 */

char *_strdup(char *str)
{
	char *answer;
	unsigned int i;

	answer = malloc(sizeof(str));
	for (i = 0; i < sizeof(str); i++)
	{
		answer[i] = str[i];
	}
	return (answer);
}
