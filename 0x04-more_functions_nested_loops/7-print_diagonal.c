#include "main.h"
/**
 * print_diagonal - function prints straight line
 *
 * @n: function argument
 *
 * Return: always void Success.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a < n; a++)
		{
			int b;

			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
