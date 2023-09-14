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
	int val;

	if (isupper(c) == 0)
	{
		val = 0;

	}
	if (isupper(c) != 0)
	{
		val = 1;
	}
	return (val);
}
