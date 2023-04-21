#include "variadic_functions.h"

/**
 * print_numbers - function that returns the sum of all its parameters
 * @separator : the seprating character
 * @n: number of parameters
 *
 * Return : Nothings
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}
