#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 * @a : array passed to function as parameter
 * @n: number of array elements to be printed
 * Return: always void.
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n - 1; c++)
	{
		if (c < n - 1)
		{
			printf("%d, ", a[c]);
		}
		if (c == n - 1)
		{
			printf("%d\n", a[c]);
		}
	}
	if (n < 0)
	{
		printf("%d\n", a[n]);
	}
}
