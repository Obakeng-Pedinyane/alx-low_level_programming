#include "main.h"
#include <string.h>

/**
 * _strcpy - function parameter destination pointer
 * @src: function parameter source pointer
 * @dest: funtion parameter destination pointer
 *
 * Return: On success always dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
