#include "main.h"

/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */

void print_alphabet(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
