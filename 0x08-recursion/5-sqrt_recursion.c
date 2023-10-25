#include "main.h"

int findSqrt(int, int);

/**
 * _sqrt_recursion - function finds square root
 *
 * @n: function parameter
 *
 * Return: Always void
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (findSqrt(n, 0));
}
/**
 * findSqrt - function finds square root
 *
 * @n: function parameter
 *
 * @guess: function parameter
 *
 * Return: Always -1,0 or natural square root.
 */

int findSqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (findSqrt(n, guess + 1));
}
