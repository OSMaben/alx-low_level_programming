#include "main.h"

/**
 * swap_int -  swap a and b
 * @a: input parameter 1
 * @b: input parameter 2
 * return: Nothing
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
