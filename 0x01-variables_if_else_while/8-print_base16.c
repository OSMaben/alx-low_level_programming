#include <stdio.h>
/**
 * main - this program shows base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

