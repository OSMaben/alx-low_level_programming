#include "variadic_functions.h"
/**
 * print_strings - function that prints trings followed by a new line
 * @separator: the serating character
 *
 * @n: number of charachter
 *
 * Return: NOTHING
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s", va_arg(args, char*));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}
