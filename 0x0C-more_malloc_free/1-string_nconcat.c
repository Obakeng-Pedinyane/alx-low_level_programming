#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fucntion joins two strings
 * @s1: function parameter
 * @s2: function parameter
 * @n: function parameter
 * Return: Character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = c = d = 0;
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;
	ptr = malloc(sizeof(char) * d + 1);
	if (ptr == NULL)
		return (NULL);
	c = 0;
	while (b < d)
	{
		if (b <= a)
		{
			ptr[b] = s1[b];
		}
		else if (b >= a)
		{
			ptr[b] = s2[c];
		}
		b++;
	}
	ptr[b] = '\0';
	return (ptr);

}
