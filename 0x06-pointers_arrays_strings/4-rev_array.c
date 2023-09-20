#include "main.h"

/**
 * reverse_array - function reverses the content of an array
 *
 * @a: function parameter
 *
 * @n: function parameter
 *
 * Return: always void
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
