#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Function checks if char is digit
 *
 * @c: Function argument
 *
 * Return: always 0 or 1
 */

int _isdigit(int c)
{
	int val;

	if (isdigit(c) == 0)
	{
		val = 0;
	}
	if (isdigit(c) != 0)
	{
		val = 1;
	}
	return (val);
}
