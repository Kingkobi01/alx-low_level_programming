#include <stdio.h>
#include "main.h"

/**
 *  more_numbers - Prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *
 * Return: void
 */


void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		printf("\n");
		i++;
	}
}
