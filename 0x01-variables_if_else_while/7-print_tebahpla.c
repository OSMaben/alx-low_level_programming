#include <stdio.h>
/**
 * main - this program shows lowercase alphabets reversed
 *
 * Return:0
 */
int main(void)
{
	char c;

		for (c = 'z'; c >= 'a'; c--)
			putchar(c);
	putchar('\n');
	return (0);
}
