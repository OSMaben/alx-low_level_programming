#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * @void: no data
 *
 * Return:0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
