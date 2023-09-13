#include "main.h"

/**
 * print_sign - Funtion prints sign of number
 *
 * @n: Argument passed to function
 *
 * Return: always 1, 0 or -1 (Success)
 **/

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}

	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
