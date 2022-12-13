#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print the alphabet,
 * in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", alphabet);
}

