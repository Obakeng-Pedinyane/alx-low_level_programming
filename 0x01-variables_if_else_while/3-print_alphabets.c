#include <stdio.h>

/**
 * main - Iterate through lowercase and uppercase
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	char letterupper = 'A';

	while (letter <= 'Z')
	{
		putchar(letterupper);
		letterupper++;
	}
	putchar('\n');
	return (0);
}
