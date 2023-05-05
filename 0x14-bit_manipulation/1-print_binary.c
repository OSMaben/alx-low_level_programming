#include "main.h"
/**
 * print_binary - function that prints the binary string
 *
 * @n: the number of bytes
 *
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
	int bites = sizeof(n) * 8, i = 0;

	while (bites)
	{
		if (n & 1L << --bites)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
