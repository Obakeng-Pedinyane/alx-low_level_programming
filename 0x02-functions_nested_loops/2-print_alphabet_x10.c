#include "main.h"

/**
 * print_alphabet_x10 - Function prints alphabet 10x
 *
 * Return: always void (Success)
 */

void print_alphabet_x10(void)
{
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
