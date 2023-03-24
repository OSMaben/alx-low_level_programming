#include "main.h"

/**
 * print_square - print square using #
 *
 * @size: size of square
 */

void print_square(int size)
{
int re;

for (int i = 0; i < size; i++)
{
for (re = 0; re < size; re++)
{
_putchar('#');
}
_putchar('\n');
}
}
