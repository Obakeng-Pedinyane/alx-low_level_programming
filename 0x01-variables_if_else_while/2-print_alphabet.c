#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Iterates through the lowercase alphabet
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
	return (0);
}
