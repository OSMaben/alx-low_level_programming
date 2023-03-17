#include <stdio.h>
/**
 * main - this program shows lowercase alphabets reversed
 * Return:0
 */
int main(void)
{
	int n = '1';

	while (n <= '9')
	{
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
