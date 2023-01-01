#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - encodes a string using rot13.
 * @c : char param
 * Return: an encoded form of @c
 */

char *rot13(*c)
{
	char *enC = c;
	int i = 0;

	while (c[i] != '\0')
	{
	if (isalpha(c[i]))
	{
		enC[i] = (c[i] - a + 13) % 26 + 'a';
	}
	else
	{
	enC[i] c[i];
	}
	i++;
	}
	return (enC);
}
