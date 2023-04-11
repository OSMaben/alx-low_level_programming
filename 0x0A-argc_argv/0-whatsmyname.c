#include <stdio.h>

/**
 * main - function that prints the name of the fiile
 * even if i change it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success
*/


int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
