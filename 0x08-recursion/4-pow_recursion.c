#include "main.h"

/**
 * _pow_recursion - function calculates x to the power y
 *
 * @x: function parameter
 *
 * @y: function parameter
 *
 * Return: Always the answer to x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
