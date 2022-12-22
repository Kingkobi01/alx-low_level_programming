#include <stdio.h>

/**
 * reverse_array - Reverses the content of am array of integers
 * @a: the array
 * @n: number of elements in the array.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i > 0)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i--;
	}
	printf("\n");
}
