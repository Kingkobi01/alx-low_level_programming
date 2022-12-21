#include <string.h>

/**
 * _strncpy - Copies a string
 * @dest: The variable the string is going to be copied
 *			to
 * @src: The source of the string to be copied.
 * @n : Size of the sring that can be copied.
 *
 *
 * return: char* ;a copy of src
 */


char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
