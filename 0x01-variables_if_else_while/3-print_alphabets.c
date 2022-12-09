#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabets
 * in lowercase, and then
 * in uppercase,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		putchar(tolower(alphabet[i]));
		alphabet[i] = tolower(alphabet[i]);
	}

	for (i = 0 ; alphabet[i] != '\0'; i++)
	{
		putchar(toupper(alphabet[i]));
		alphabet[i] = toupper(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
