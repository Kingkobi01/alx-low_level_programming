#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 *
 * @size : int param
 *
 * Return : void
 */


void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
