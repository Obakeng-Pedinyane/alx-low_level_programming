#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function check is char is uppercase
 *
 * @c: Function argument
 *
 * Return: always 0 or 1 (Success)
 */

int _isupper(int c)
{
	if (islower(c) == 0)
	{
		return (0);

	}
	else
	{
		return (1);
	}
}
