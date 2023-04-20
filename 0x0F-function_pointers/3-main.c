#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return value of the main function
 */


int main(int argc, char *argv[])
{
	int (*func_op)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func_op = get_op_func(argv[2]);
	if (func_op == NULL)
		printf("Error\n"), exit(99);

	if ((!b && (argv[2][0] == '/')) || (!b && (argv[2][0] == '%')))
		printf("Error\n"), exit(100);

	printf("%d\n", func_op(a, b));
	return (0);
}
