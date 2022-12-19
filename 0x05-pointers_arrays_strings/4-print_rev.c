#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: char param to be reversed
 *
 * Return: void
 */ 

void print_rev(char *s)
{
	unsigned long int i = 1;

	while (i <= strlen(s))
	{
		putchar(s[strlen(s) - i]);
		i++;
	}

	printf("\n");
}
