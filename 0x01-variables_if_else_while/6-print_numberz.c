#include <stdio.h>

/**
 * main - Function prints sigle digit numbers
 *
 * Return: always 0 (Success)
 *
 **/

int main(void)
{
	int x;

	while (x <= 9)
	{
		putchar(x + '0');
			x++;

	}
	putchar('\n');
	return (0);
}
