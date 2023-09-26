#include "main.h"

/**
 * _memcpy - Function copies memory area
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * @n: function parameter
 *
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;

	c = 0;

	while (n--)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
