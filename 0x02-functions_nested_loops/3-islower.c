#include "main.h"
#include <ctype.h>

/**
 * _islower - Function checks for lowercase
 *
 * @c: Function argument to be checked
 *
 * Return: always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
