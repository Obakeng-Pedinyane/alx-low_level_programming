#include <stdio.h>

/**
 * main - function prints all arguments
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1;i < argc;i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
