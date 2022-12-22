#include <stdio.h>

/**
 * reverse_array - Reverses the content of am array of integers
 * @a: the array
 * @n: number of elements in the array.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = n;

	while (i > 0)
	{
		(i > 1) ? printf("%d, ", a[i - 1]) : printf("%d\n", a[i - 1]);
		i--;
	}
}
