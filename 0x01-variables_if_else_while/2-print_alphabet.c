#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		putchar(tolower(alphabet[i]));
	}

	putchar('\n');
	return (0);
}
