#include <stdio.h>

/**
 * main -  Print all possible
 *	different combinations
 *	of three digits.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = 0; firstDigit < 10; firstDigit++)
	{
		for (secondDigit = 0; secondDigit < 10; secondDigit++)
		{
			for (thirdDigit = 0; thirdDigit < 10; thirdDigit++)
			{
				if ((firstDigit < secondDigit) && (thirdDigit > secondDigit))
				{
					putchar(firstDigit + '0');
					putchar(secondDigit + '0');
					putchar(thirdDigit + '0');
				}

				else
				{
					continue;
				}
				if (!((firstDigit == 7)
						&& (secondDigit == 8) && (thirdDigit == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
