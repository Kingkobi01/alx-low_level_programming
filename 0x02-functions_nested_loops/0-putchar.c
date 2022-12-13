#include "main.h"

/**
 * main - Entry point
 * Description - Prints '_putchar',
 * followed by a new linw.
 * Return: 0 (Success)
 */


int main(void)
{
	int i;
	char *aWord = "_putchar";

	for (i = 0; aWord[i] != '\0'; i++)
	{
		_putchar(aWord[i]);
	}
	_putchar('\n');
	return (0);
}
