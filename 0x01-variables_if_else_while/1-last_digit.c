#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Program that generates random number and describes its last digit
 *
 * Return: always 0 (Success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	re = n % 10;
	if (re > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, re);
	else if (re == 0)
		printf("Last digit of %d is %d and is 0\n", n, re);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, re);
	return (0);
}
