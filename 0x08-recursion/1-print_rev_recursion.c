#include "main.h"
/**
 * _print_rev_recursion - function recursively prints a string
 *
 * @s: function parameter
 *
 * Return: Always void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
