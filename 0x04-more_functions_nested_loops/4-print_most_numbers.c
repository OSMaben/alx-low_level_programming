#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 except
 * 2 & 4
 *
 *description: Print number from 0 to 9 except
*/
void print_most_numbers(void)
{
int i;

for (i = 0; i < 10 ; i++)
{
if (i == 2 || i == 4)
{
continue;
}

_putchar(i + 48);
}
_putchar('\n');
}
