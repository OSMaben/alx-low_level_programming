#include "variadic_functions.h"


/**
 * format_char - all firmated characters
 * @separator: separator fo string
 *
 * @args: arguments
 *
 */

void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}



/**
 * format_int - all firmated integers
 * @separator: separator fo string
 *
 * @args: arguments
 *
 */

void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}


/**
 * format_float - all firmated float
 * @separator: separator fo string
 *
 * @args: arguments
 */

void format_float(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}


/**
 * format_string - all firmated characters
 * @separator: separator fo string
 *
 * @args: arguments
 *
 */

void format_string(char *separator, va_list args)
{
	char *string = va_arg(args, char *);

	switch (!string)
	{
		case 1:
			string = "(nil)";
			printf("%s%s", separator, string);
			break;
		default:
			printf("%s%s", separator, string);
			break;
	}
}

/**
 * print_all - prints anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *steparator = "";

	va_list ap;
	spes_t spesf[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (spesf[j].spes)
		{
			if (format[i] == spesf[j].spes[0])
			{
				spesf[j].f(steparator, ap);
				steparator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}


