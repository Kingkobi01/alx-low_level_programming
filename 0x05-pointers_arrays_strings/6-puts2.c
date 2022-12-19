#include <stdio.h>
#include <string.h>
/**
 * puts2 - Prints every other character of a string,
 *			starting with the first character, followed by a new line
 * @str: *char param to be manipulated.
 *
 * Return: void
 */

void puts2(char *str)
{
	unsigned long int i = 0;

	while (i < strlen(str))
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

