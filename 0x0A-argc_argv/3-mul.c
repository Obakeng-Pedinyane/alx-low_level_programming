#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: ALways (0)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
