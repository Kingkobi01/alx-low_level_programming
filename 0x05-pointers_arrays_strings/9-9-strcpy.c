#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed to by src,
 *			including the terminating null byte (\0),
 *			to the buffer pointed to by dest.
 * @dest: where the duplicate will be saved to.
 *
 * @src: where the string will be copied from.
 *
 * Return: char, copy od=f the @src
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

