#include "main.h"

/**
 * print_triangle - Prints a triangle,
 * followed by a new line.
 *
 * @size : int param
 *		size of the triangle
 *
 * Return : void
 */


void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			int complement = size - i;

			for (j = 0; j < complement; j++)
			{
				_putchar(32);
			}
			for (k = 0; k < i; k++)
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
