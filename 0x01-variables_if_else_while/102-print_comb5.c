#include <stdio.h>

/**
 * main - Print all possible
 *	combinations of two
 *	two-digit numbers
 *	eg 00 01, 00 02, ..., 98 99
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit <= 98; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 99; secondDigit++)
		{
			putchar((firstDigit / 10) + '0');
			putchar((firstDigit % 10) + '0');
			putchar(32);
			putchar((secondDigit / 10) + '0');
			putchar((secondDigit % 10) + '0');

			if (firstDigit / 10 != 9 || firstDigit % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
		putchar('\n');
	return (0);
}
