#include "main.h"
#include <string.h>

/**
 * _strcat - function concatenates two strings
 *
 * @src: function parameter
 *
 * @dest: function parameter
 *
 * Return: always char dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);

	return (ptr);
}
