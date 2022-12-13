#include "main.h"

/**
 * print_last_digit - Prints the last
 * digit of a number
 *
 * @n: int param
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
