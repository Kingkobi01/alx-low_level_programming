#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: *char param to be manipulated
 *
 * Return: void
 */

void puts_half(char *str)
{
	unsigned long int i = (strlen(str) / 2);

	if (strlen(str) % 2 == 1)
	{
		i = (strlen(str) - 1) / 2;
	}

	for (; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
