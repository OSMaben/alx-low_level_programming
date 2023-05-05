#include "main.h"

/**
 * get_bit - is a function that returns the value of a given bit
 *
 * @n: number of bits
 * @index: index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
*/


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = n >> index;

	return (bit & 1);
}
