#include "main.h"

/**
 * more_numbers - prints 0-14 ten times to stdout
 *
 * Return: On success void.
 * On error, void is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
