#include <stdio.h>

/**
 * main - this program shows lowercase alphabets reversed
 *
 * Return:0
 */

int main(void)
{
	int n = 48;

	while (n < 57)
		putchar(n);
		n++;
	char c = 'a';

	while (c <= 'f')
		putchar(c);
		c++;
	putchar('\n');
	return (0);
}
