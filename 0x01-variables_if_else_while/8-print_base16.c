#include <stdio.h>
#include <ctype.h>


/**
 * main - prints all the numbers
 * of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= 'F'; digit++)
	{
		if (isalnum(digit))
		{char ch = tolower(digit);

		putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}
