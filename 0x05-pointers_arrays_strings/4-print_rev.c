#include <stdio.h>
#include <string.h>


/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: char param, string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *rev;

	for (int i = strlen(s); (s + i) >= 0; i--)
	{
		strcat(rev, s+i );
	}

	printf("%s\n",rev);
}
