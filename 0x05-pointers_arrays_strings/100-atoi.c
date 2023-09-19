#include "main.h"
#include <stdlib.h>

/**
 * _atoi - function converts a string into an integer
 * @s: function parameter
 *
 * Return: integer value of s (Success)
 */

int _atoi(char *s)
{
	int res;

	if (atoi(s) >= 0 || atoi(s) <= 0)
	{
		res = atoi(s);
	}
	else
	{
		res = atof(s);
	}
	return (res);
}
