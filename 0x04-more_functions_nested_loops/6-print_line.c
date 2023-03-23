#include "main.h"

/**
 * print_line - the function prints a straight line
 *
 *  @n: character in ascii code
 *
 */

void print_line(int n)
{
int a;
for (a = 0; a < n; a++)
{
_putchar('_');
if (n <= 0)
{
_putchar('\n');
}
}
_putchar('\n');
}
