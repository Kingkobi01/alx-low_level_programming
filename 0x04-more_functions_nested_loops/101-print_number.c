#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int i, j = 1;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	else
	{
		i = n;
	}

	while (i / j > 9)
	{
		j *= 10;
	}

	for (; j > 0 ; j /= 10)
	{
		_putchar(i / j + '0');
		i %= j;
	}
}
