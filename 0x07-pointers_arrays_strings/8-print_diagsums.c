#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 *			diagonals of a square matrix of
 *			integers
 * @a : Array
 * @size : Size of the array
 * Return: nothing...
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumOfDiagonalOne, sumOfDiagonalTwo;

	sumOfDiagonalOne = 0;
	sumOfDiagonalTwo = 0;

	for (i = 0; i < size; i++)
	{
		sumOfDiagonalOne += a[i * size + i];
		sumOfDiagonalTwo += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumOfDiagonalOne, sumOfDiagonalTwo);
}
