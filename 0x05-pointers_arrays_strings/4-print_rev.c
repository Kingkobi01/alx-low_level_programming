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
	char *rev ="";
	int i;
	while (i >= strlen(*s))
	{
		strcat(rev, s+i );
		i--;
	}

	printf("%s\n",rev);
}
