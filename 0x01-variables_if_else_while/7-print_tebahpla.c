#include <stdio.h>


/**
 * main - Function prints alphabet in reverse
 *
 * Return: always 0 (Success)
 *
 **/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
