#include <stdio.h>
#include <stdio.h>

/**
 * main - main block
 * Description - Prints all possible
 * combinations of single-digit
 * numbers separated by comma and space.
 * eg 0, 1, 2, 4, 5, 6, 7, 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
