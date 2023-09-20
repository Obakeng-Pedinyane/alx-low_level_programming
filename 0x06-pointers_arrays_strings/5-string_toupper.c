#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - function changes all lowercase letters to uppercase
 *
 * @: function parameter
 *
 * Return: uppercase version of function argument
 */
char *string_toupper(char *s)
{
	int l;
	int i;

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
