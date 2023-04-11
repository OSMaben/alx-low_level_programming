#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program is multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 if success
*/

int main(__attribute__((unused))int argc, char **argv)
{
	int i, sum, num1, num2, j = 1;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0 ; i < j ; i++)
	{
		num1 =  atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	}
	return (0);
}
