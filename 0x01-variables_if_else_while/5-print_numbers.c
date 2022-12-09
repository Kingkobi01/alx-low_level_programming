#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints all
 * single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
