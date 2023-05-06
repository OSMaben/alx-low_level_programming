#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: bitnumber 1
 * @m: bitnumber 2
 *
 * Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int natija = n ^ m;
	int numbits = 0;

	while (natija)
	{
		numbits += natija & 1;
		natija >>= 1;
	}
	return (numbits);

}
