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

	if (n < 98)
	{
		for (s = n; s <= 98; s++)
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
	if (n == 98)
	{
		printf("%d\n", s);
	}

	if (n > 98)
	{
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
}
