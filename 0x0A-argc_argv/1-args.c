#include <stdio.h>

/**
 * main - function prints the number of arguments passed into it
 *
 * @argc: parameter
 *
 * @argv: parameter
 *
 * Return: Always (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
