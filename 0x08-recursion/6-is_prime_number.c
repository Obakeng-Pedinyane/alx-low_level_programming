#include "main.h"

/**
 * is_prime_number - function checks for prime numbers
 *
 * @n: function parameter
 *
 * @divisor: function parameter
 *
 * Return: 1 (Success) or 0
 */

int is_prime_helper(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}
/**
 * is_prime_helper - finds if n is divisible
 *
 * @n: function parameter
 *
 * @divisor: function parameter
 *
 * Return: 1 (Success) or 0
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
	}
}
