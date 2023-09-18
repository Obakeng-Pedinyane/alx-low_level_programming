#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 *
 * @a: function parameter
 *
 * @b: function parameter
 *
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
