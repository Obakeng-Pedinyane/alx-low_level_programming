#include <stdio.h>

/**
 * main - Function prints all single digit numbers
 *
 * Return: always 0 (Success)
 *
 **/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}