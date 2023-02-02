#include "main.h"
void _divide(unsigned long int n);
/**
 * print_binary - Prints the binary representation of a number
 * @n : number
 * Return : nothing
 */

void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
 * _divide - ...
 * @n: ...
 *
 * Return: ...
 */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
