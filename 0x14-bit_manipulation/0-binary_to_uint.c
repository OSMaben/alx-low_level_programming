#include "main.h"

/**
 * binary_to_uint - a function to convert binary numbers to uint
 * @b: a pointer to the binary number
 *
 * Return: a pointer to the binary number represented
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int rst = 0;

	if (b == NULL)
		return (0);

	while (*b != 0)
	{
		if (*b != '0' && *b != '1')
			return (0);
		rst = rst * 2 + (*b++ - 48);
	}

	return (rst);

}
