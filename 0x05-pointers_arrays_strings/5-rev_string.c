#include "main.h"
#include <string.h>

/**
 * rev_string - function reverses a string
 *
 * @s: function parameter
 *
 * Return: always void.
 */
void rev_string(char *s)
{
	int length;
	int start;
	int end;
	char temp;

	length = strlen(s);
	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
