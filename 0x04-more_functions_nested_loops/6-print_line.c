#include "main.h"

/**
 * print_line - function prints straight line
 *
 * @n: function argument
 *
 * Return: always void Success.
 */

void print_line(int n)
{
	int t;

	if (n > 0)
	{
		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
