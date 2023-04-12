#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _strdup - funtion that returns a pointer to a newly allocated space in
 * memory
 *
 * @str:var that holdes that string
 *
 * Return:returns a pointer to the duplicated string
 *
 */
char *_strdup(char *str)
{
	size_t length;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	c = (char *) malloc((length + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	memcpy(c, str, length + 1);
	return (c);

}

