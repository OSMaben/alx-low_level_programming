#include "main.h"

int _sqrt_recursion_child(int n, int i);

/**
 * _sqrt_recursion-a function that returns the natural
 * square root of a number.
 *  @n: the number to be returned
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_child(n, 1));
}


/**
 * _sqrt_recursion_child - helper function that performs
 * the actual recursive calculation of the square root
 *
 *
 * @n:  integer argument
 * @i: the current value being tested as a possible square root.
 *
 * Return: integer
*/

int _sqrt_recursion_child(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_child(n, i + 1));
}
