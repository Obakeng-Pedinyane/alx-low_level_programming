#include <stdio.h>

/**
 * main - Function prints all letters except q,e
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char letter = 'a';

	for (letter; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);

	putchar('\n');
	return (0);
}
