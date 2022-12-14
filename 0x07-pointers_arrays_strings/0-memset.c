#include <main.h>
/**
 * _memset - fills memory with a constant byte.
 * @s : Part of memory to be filled.
 * @b : What the part of memory will be filled with
 * @n : number of bytes to fill
 * Return: address of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
