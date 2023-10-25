#include "main.h"

/**
 * _puts_recursion - function recursively prints a string
 *
 * @s: function parameter
 *
 * Return: Always void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
