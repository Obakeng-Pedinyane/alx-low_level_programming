#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Function prints last digit of n
 *
 * @n: Function argument
 *
 * Return: always the last digit of the argument
 **/

int print_last_digit(int n)
{
	int r;
	int a;

	a = abs(n);
	r = a % 10;
	_putchar(r + '0');
	return (r);
}
