#include "main.h"

/**
 * print_square - print square using #
 *
 * @size: size of square
 */

void print_square(int size)
{
int re, i;

for (i = 0; i < size; i++)
{
if (size <= 0)
{
_putchar('\n');
}
for (re = 0; re < size; re++)
{
_putchar('#');
}
_putchar('\n');
}
}
