#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenates two strings
 *
 * @dest: function parameter
 *
 * @n: function parameter
 *
 * @src: function parameter
 *
 * Return: always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}
