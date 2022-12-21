#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatinates two strings.
 * @dest: the variable to be appended to
 * @src: the variable to me appended from.
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
