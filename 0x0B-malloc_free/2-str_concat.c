#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}

char *str1, *str2;

str1 = (char *) malloc(sizeof(char) * (strlen(s1) + 1));
str2 = (char *) malloc(sizeof(char) * (strlen(s2) + 1));

char *result, null = '\0';

result = strcat(str1, s1);
result = strcat(result, s2);
result = strcat(result, &null);

return (result);
}

