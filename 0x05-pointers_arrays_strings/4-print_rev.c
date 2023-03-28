#include "main.h"

/**
 *print_rev- print a string, in reverse, followed by a new line.
 *@s : the char
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');

}
