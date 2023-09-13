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
		_putchar('0');
	}

	if (islower(c) == 1)
	{
		_putchar('1');
	}

	return (0);
}
