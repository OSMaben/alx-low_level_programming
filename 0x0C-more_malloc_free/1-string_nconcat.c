#include "main.h"
#include <string.h>
/**
* string_nconcat -  a function that concatenates two strings.
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n > len2)
n = len2;
result = malloc(sizeof(char) * (len1 + n + 1));
if (!result)
return (NULL);
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}

