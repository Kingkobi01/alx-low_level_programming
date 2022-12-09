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
	int i;

	for (i = 0; 1 < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
