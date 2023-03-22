#include "main.h"
/**
 * print_times_table - Print n times table, starting with 0.
 *
 * @n: character from ASCII
 *
 */

void print_times_table(int n)
{
int pro, mult, num;

if (n <= 15 && n >= 0)
{
for (num = 0 ; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
pro = num * mult;

if (pro <= 9)
_putchar(' ');
if (pro <= 99)
_putchar(' ');
if (pro >= 100)
{
_putchar((pro / 100) + 48);
_putchar((pro / 10) % 10 + 48);
}
else if (pro <= 99 && pro >= 10)
_putchar((pro / 10) + 48);
_putchar((pro % 10) + 48);
}
_putchar('\n');
}
}
}
