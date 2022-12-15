#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Number of times the character _ should be printed
 *
 * Return: 0 (Success)
 */

void print_line(int n)

{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
