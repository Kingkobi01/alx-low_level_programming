#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			if ((k <= 4000000) && (k % 2 == 0))
			{
			printf(", %ld", k);
			}
		}

		++i;
	}

	printf("\n");
	return (0);
}
