#include <stdio.h>

/**
 * main - Iterate through lowercase and uppercase
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}