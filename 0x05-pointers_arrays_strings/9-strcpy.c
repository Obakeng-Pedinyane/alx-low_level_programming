#include "main.h"
#include <string.h>

/*
 * *_strcpy - function copies string from one pointer to another
 * @dest: funtion parameter destination pointer
 *
 * @src: function parameter source pointer
 *
 * Return: always *dest {Success)
 *
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
