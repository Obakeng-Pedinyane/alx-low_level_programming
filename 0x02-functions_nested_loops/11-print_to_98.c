#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function prints to 98
 *
 * @n: Funtion argument
 *
 * Return: always void (Success)
 */

void print_to_98(int n)
{
	int s;

	for (s = n; s < 99; s++)
	{
		if (s == 98)
		{
			printf("%d\n", s);
		}
		else
		{
			printf("%d, ", s);
		}
	}

	for (s = n; s >= 98; s--)
	{
		if (s == 98)
		{
			printf("%d\n", s);
		}
		else
		{
			printf("%d, ", s);
		}
	}
}
