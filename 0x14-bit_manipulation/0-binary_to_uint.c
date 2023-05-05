#include "main.h"

/**
 * binary_to_uint - a function to convert binary numbers to uint
 * @b: a pointer to the binary number
 *
 * Return: a pointer to the binary number represented
*/


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int rst = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		rst = (rst << 1) + (b[i] - '0');
	}
	return (rst);

}
