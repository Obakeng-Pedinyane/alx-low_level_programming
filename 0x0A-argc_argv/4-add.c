#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - function adds positive numbers
 *
 * @argv: parameters
 *
 * @argc: parameters
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				count += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
