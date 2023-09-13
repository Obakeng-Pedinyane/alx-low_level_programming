
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Function prints last digit of n
 *
 * @n: Function argument
 *
 * Return: always the last digit
 **/

int print_last_digit(int n)
{
	int r;
	int b;

	b = abs(n);
	r = b % 10;
	_putchar('0' + r);
	return (r);
}
