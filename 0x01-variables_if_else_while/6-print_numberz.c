#include <stdio.h>
#include <string.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from `0`,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
