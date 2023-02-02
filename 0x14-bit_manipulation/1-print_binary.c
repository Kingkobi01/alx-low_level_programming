#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n : number
 * Return : nothing
 */

void print_binary(unsigned long int n)
{
	int rem, flag;

	flag = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		rem = n - ((n >> 1) << 1);
		if (rem == 1)
			flag = 1;

		if (flag == 1)
			_putchar(rem + '0');

		n >>= 1;
	}

	_putchar('\n');
}
