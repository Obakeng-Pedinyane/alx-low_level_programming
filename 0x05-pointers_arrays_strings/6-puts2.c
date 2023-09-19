#include "main.h"
#include <string.h>

/**
 * puts2 - function prints every other character in string
 *
 * @str: function parameter
 *
 * Return: Always void.
 */

void puts2(char *str)
{
	int l;
	int c;

	l = strlen(str) - 1;
	for (c = 0; c <= l; c++)
	{
		if (c % 2 != 0)
		{
			continue;
		}
		_putchar(str[c]);
	}
	_putchar('\n');
}
