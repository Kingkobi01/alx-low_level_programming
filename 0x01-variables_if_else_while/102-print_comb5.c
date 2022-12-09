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
	int thirdDigit;
	int lastDigit;

	for (firstDigit = 0; firstDigit < 10; firstDigit++)
	{
		for (secondDigit = 0; secondDigit < 10; secondDigit++)
		{
			for (thirdDigit = 0; thirdDigit < 10; thirdDigit++)
			{
				for (lastDigit = 0; lastDigit < 10; lastDigit++)
				{
					if (secondDigit <= thirdDigit)
					{
						putchar(firstDigit + '0');
						putchar(secondDigit + '0');
						putchar(' ');
						putchar(thirdDigit + '0');
						putchar(lastDigit + '0');
					}
					else
					{
						continue;
					}

					if (!((firstDigit == 9) && (secondDigit == 8) && (thirdDigit == 9)
								&& (lastDigit == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
