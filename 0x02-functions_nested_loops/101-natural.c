#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print the sum of all the multiples
 * of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
