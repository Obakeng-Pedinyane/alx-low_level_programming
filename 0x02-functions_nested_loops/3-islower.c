#include "main.h"
#include <ctype.h>

/**
 * _islower - Function checks for lowercase
 *
 * @c: Function argument to be checked
 *
 * Return: 0 for not lowercase, 1 if otherwise
 */

int _islower(int c)
{
	int result;

	if (islower(c) == 0)
	{
		result = 0;
	}

	if (islower(c) == 1)
	{
		result = 1;
	}

	return (result);
}
