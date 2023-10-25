#include "main.h"

/**
 * _strlen_recursion - function recursively counts the length of a string
 *
 * @s: function parameter
 *
 * Return: Always void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
