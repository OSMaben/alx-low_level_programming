#include <stdio.h>
/**
 * main - main block
 * Print alphabet in Lowercase and then uppercase
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	C = 'A';

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
