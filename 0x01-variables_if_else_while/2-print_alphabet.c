#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - printing alphabet in lowercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
