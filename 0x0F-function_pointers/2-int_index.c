#include "function_pointers.h"


/**
 * int_index->function that searches for an integer>
 *
 * @array: Input Array
 * @size: Array Size
 * @cmp: Pointer To Function that compare inegers
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
