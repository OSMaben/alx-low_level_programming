#include "main.h"


/**
 * string_length - function is a recursive function that
 * takes a pointer to a string s and returns its length
 *  @s: the string to be checked
 * Return: integer
 */

int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}
/**
 * is_palindrome_Child - is a helper function that returns true
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
		return (1);
	if (s[left] != s[right])
		return (0);
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
	int len = string_length(s);

	return (is_palindrome_Child(s, 0, len - 1));
}
