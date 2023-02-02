#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b : pointer to the string of 0 and characters
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int i;

	i = 0;
	num = 0;
	power = 1;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}

	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
			num += power;

		power *= 2;
		i--;
	}

	return (num);
}
