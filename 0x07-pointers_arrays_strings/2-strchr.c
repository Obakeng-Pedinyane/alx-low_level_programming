#include "main.h"

/**
 * _strchr - function locates a character in a string
 *
 * @s: function parameter
 *
 * @c: function parameter
 *
 * Return: always ptr
 */

char *_strchr(char *s, char c)
{
	char ptr[sizeof(s)] = "";
	int i;
	int end;

	end = sizeof(s);
	for (i = 0; i < end; i++)
	{
		if (s[i] == c)
		{
			int j;
			int count = 0;

			for (j = i; j < end; j++)
			{
				ptr[count] = s[j];
				count++;
			}
		}
		else
		{
			continue;
		}
	}
	return (ptr);
}
