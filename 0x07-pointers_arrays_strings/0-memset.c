#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 *
 * @s: function parameter
 *
 * @b: function parameter
 *
 * @n: function parameter
 *
 * Return: s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* p=s;
	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
