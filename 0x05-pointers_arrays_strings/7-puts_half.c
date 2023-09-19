#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of string
 *
 * @str: function parameter
 *
 * Return: always void.
 */

void puts_half(char *str)
{
	int c;
	int l;
	int l_half;

	l = strlen(str) - 1;
	l_half = (l / 2) + 1;
	for (c = l_half; c <= l; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
