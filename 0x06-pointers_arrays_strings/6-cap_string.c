#include "main.h"
#include <ctype.h>

/**
 * cap_string - function capitalizes all words of a string
 *
 * @s: function parameter
 *
 * Return: always new s string.
 */
char *cap_string(char *s)
{
	int cn;
	int i;

	cn = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha(s[i]) || isdigit(s[i]))
		{
			if (cn)
			{
				s[i] = toupper(s[i]);
				cn = 0;
			}
			else
			{
				s[i] = tolower(s[i]);
			}
		}
		else
		{
			if (s[i] == '{' || s[i] == '}' || s[i] == '(' || s[i] == ')' || s[i] == '"' || s[i] == '?' || s[i] == '!' || s[i] == '.' || s[i] == ';' || s[i] == ',')
			{
				cn = 1;
			}
			else
			{
				cn = 0;
			}
		}

	}
	return (s);
}
