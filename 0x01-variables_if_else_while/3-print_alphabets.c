#include <stdio.h>

/**
 * main - Iterate through lowercase and uppercase
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char letter, letterupper = 'a', 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	while (letterupper <= 'Z')
	{
		putchar(letterupper);
		letterupper++;
	}
	putchar('\n');
	return (0);
}
