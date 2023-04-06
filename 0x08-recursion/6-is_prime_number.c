#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *  @n: the number to be returned
 * Return: integer
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
		return (0);
		}
	}
	return (1);
}