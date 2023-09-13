#include "main.h"

/**
 * print_alphabet - Function prints alphabet
 *
 * Return: always void (Success)
 *
 **/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);

	}
	_putchar('\n');
}
