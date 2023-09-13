#include "main.h"

/**
 * times_tables - Function prints 9 times table
 *
 * Return: always void
 */

void times_table(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int b;

		for (b = 0; b < 10; b++)
		{
			int c;

			c = b * a;
			if (c > 10)
			{
				if (b < 9)
				{
					_putchar((c  / 10) + '0');
					_putchar((c % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			else
			{
				if (b < 9)
				{
					_putchar('0' + c);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + c);
				}
			}
		}
		_putchar('\n');
	}
}
