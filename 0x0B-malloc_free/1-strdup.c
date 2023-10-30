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
	unsigned long int i;
	unsigned long int l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	answer = malloc((l + 1) * sizeof(char));
	if (answer == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			answer[i] = str[i];
		}
		answer[l] = '\0';
		return (answer);
	}
}
