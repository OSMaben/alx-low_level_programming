#include "main.h"

/**
 *_strlen(char *s)- Write a function that returns the length of a string
 * @s: the char
 * Return: b
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
