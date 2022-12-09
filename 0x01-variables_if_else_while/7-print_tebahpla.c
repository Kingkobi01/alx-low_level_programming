#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'Z'; ch >= 'A'; ch--)
	{
		putchar(tolower(ch));
	}
	return (0);
}


