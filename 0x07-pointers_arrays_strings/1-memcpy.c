#include "main.h"
#include <string.h>

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
	return (memcpy(dest, src, n)); 
}
