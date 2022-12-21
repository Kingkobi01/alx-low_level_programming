#include <stdio.h>
#include <string.h>

/**
 * _strcat - Appends the src string to the dest string,
 *				overwriting the terminating
 *				null byte (\0) at the end of dest,
 *				and then adds a terminating null byte
 * @dest: the variable to be appended to
 * @src: the variable to me appended from.
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
