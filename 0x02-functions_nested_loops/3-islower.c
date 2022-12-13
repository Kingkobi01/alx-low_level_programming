#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 * @c: character putchar
 */

int _islower(int c);
int r;

int main(void)
{
	r = _islower('H');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _islower - CHecks for lowercase
 * character.
 *
 *@c: character parameter
 *
 * Return: 1 (True) 0 (False)
 */

int _islower(int c)
{
	if (islower(c + '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
