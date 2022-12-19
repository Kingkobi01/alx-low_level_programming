#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *					followed by a new line.
 *
 * @a: array param.
 * @n: number of elements to be printed.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n < 0)
	{
		printf("\n");
	}
	else
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
	}
	printf("%d\n", a[n - 1]);
}

