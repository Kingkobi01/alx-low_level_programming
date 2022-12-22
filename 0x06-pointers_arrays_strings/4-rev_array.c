#include <stdio.h>

/**
 * reverse_array - Reverses the content of am array of integers
 * @a: the array
 * @n: number of elements in the array.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
