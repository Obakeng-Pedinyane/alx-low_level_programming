#include <stdio.h>

/**
 * main - Iterate through lowercase and uppercase 
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
