#include "main.h"
#include <string.h>

/**
 * _strncpy - function copies a string
 *
 * @n: function parameter
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
