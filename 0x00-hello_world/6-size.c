#include <stdio.h>

/**
 * main - Program that prints the size of various types.
 *
 * Return: always 0 (Success)
 *
 *
 */

int main(void)
{
	char string;
	int num;
	long int num1;
	long long int num2;
	float deci;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(string));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num1));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(deci));

	return (0);

}
