#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 if success
*/


int main(int argc, char **argv)
{
int sum = 0, i;
const char *arg;
const char *p;

for (i = 1; i < argc; i++)
{
arg = argv[i];
for (p = arg; *p; p++)
{
if (!isdigit(*p))
{
printf("Error\n");
return (1);
}
}
sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
