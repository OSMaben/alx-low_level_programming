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
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
