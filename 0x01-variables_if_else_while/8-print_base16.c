#include <stdio.h>

/**
 * main - Function that prints base 15
 *
 * Return: always 0 (Success)
 *
 **/

int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);

}
