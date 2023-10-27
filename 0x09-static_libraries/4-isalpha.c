#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Function checks for alpha character
 *
 * @c: Agrument to be passed
 *
 * Return: always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
