#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}


/**
 * print_alphabet_x10 - Print 10 times
 * the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}

