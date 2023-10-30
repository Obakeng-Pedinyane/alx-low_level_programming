#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function connects two strings
 *
 * @s1: function parameter
 *
 * @s2: function parameter
 *
 * Return: Always pointer to s1+s2
 */

char *str_concat(char *s1, char *s2)
{
	char *answer;
        unsigned long int x;
        unsigned long int y;
	unsigned long int length;
	unsigned long int i;
	unsigned long int j;

        if (s1 == NULL)
        {
                s1 = "";
        }
	if (s2 == NULL)
	{
		s2 = "";
	}
        x = 0;
        while (s1[x] != '\0')
        {
                x++;
        }
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	length = x + y;
	answer = malloc((length + 1) * sizeof(char));
	if (answer == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < x; i++)
		{
			answer[i] = s1[i];
		}
		for (j = 0; j < y; j++)
		{
			answer[x] = s2[j];
			x++;
		}
		answer[length] = '\0';
		return (answer);
	}
}
