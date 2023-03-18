#include <stdio.h>
/**
 * main - this program shows lowercase alphabets reversed
 * Description - printing all possible different combinations of three digits.
 * Return:0
 */

int main(void)
{
int f = 0;
int m;
int n;

while (f <= 7)
{
m = f + 1;
while (m <= 8)
{
n = m + 1;
while (n <= 9)
{
putchar(f + 48);
putchar(m + 48);
putchar(n + 48);
if (f != 7 || m != 8 || n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}
m++;
}
f++;
}
putchar('\n');
return (0);
}
