#include "main.h"

/**
 * is_palindrome_Child is a helper function that returns true
 * if the child is a palette
 *  @s: the name of the child
 *  @left: the left coordinate of the child
 *  @right: the right coordinate of the child
 *
 * Return: true if the child is a palette
 *
 */


int is_palindrome_Child(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_Child(s, left + 1, right - 1));
}


/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 *  @s: the string to be checked
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (is_palindrome_Child(s, 0, len - 1));
}
