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
	int number = 1;

	if (*(char *)&number == 12)
		return (1);
	else
		return (0);
}
