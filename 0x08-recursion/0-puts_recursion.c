#include "main.h"

/**
 * function - works exactly like the puts function but with recursion
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
