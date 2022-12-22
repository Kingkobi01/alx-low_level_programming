#include <stdio.h>

/**
 * reverse_array - Reverses the content of am array of integers
 * @a: the array
 * @n: number of elements in the array.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	printf("%d", a[n - 1]);
	n -= 2;
	while (n >= 0)
	{
		printf(", %d", a[n]);
		n--;
	}
}
