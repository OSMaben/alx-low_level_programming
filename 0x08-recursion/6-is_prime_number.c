#include "main.h"
/**
 * is_prime_recursive - check whether the given string is prime
 *  @n: the number of characters
 *  @i: the index of the first character
 * Return: true if the string is prime
 */

int is_prime_recursive(int n, int i)
{
	if (n < 2)
		return (0);
	if (i == 2)
		return (n % 2 != 0);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i - 1));
}


/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *  @n: the number to be returned
 * Return: integer
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
