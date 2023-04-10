#include <stdio.h>
/**
 * main - this program prints all arguments it receives
 * in a new live.
 *
 * @argc: - number of arguments
 * @argv: - argument vector
 *
 * Return: 0 if success
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
