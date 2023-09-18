#include "main.h"
#include <string.h>

/**
 * rev_string - function reverses a string
 *
 * @s: function parameter
 *
 * Return: always void.
 */
void rev_string(char *s)
{
	int le;
	int count;

	le = strlen(s) - 1;
	for (count = 0; count <= le; count++)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
	for (count = le; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
