#include "variadic_functions.h"
/**
 * sum_them_all - sum them all the arguments
 * @n: number of arguments
 *
 * Return: sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	if (n == 0)
		return (0);
	va_list arglist;

	va_start(arglist, n);

	for (i = 0; i < n ; i++)
	{
		count += va_arg(arglist, unsigned int);
	}
	va_end(arglist);

	return (count);
}
