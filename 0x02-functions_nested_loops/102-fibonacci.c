#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0 (Success)
 */


int main(void)
{
	int a = 0;
	int b = 1;
	int i;

	printf("%d, ", a);
	printf("%d, ", b);
	for (i = 2; i < 50; i++)
	{

		int c = a + b;

		a = b;
		b = c;

		printf("%d, ", c);

	}
	printf("\n");
	return (0);
}


