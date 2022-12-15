#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n : int param
 *
 * Return : void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		n = -1 * n;
	}

	if (n > 9)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
