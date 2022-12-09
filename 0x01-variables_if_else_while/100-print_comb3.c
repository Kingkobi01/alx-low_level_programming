#include <stdio.h>

/**
 * main - Prints all
 *	possible different combinations
 *	of two digits.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit < 10; firstDigit++)
	{
		for (secondDigit = 0; secondDigit < 10; secondDigit++)
		{
			if (firstDigit <= secondDigit)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
			}
			else
			{
				continue;
			}
			if (!((firstDigit == 9) && (secondDigit == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
