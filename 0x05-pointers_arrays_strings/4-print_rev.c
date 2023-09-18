#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 *@s: function parameter
 *
 * Return: Always void.
 */
void print_rev(char *s)
{
	int length;
	int counter;

	length = strlen(s) - 1;

	for (counter = length; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
