#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all
 * the arguments of your program
 *
 * @ac:number of arguments
 * @av:arguments to concatenate
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int length = 0;
char *result;
int indx = 0, i, s;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (s = 0; av[i][s]; s++)
{
length++;
}
length++;
}

result = malloc(sizeof(char) * length + 1);
for (i = 0; i < ac; i++)
{
for (s = 0; av[i][s]; s++)
{
result[indx] = av[i][s];
indx++;
}
result[indx] = '\n';
indx++;
}
result[indx] = '\0';
return (result);
}

