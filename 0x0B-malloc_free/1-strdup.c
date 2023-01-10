#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the
 * string given as a parameter.
 * @str : String to be used
 * Return: Pointer to the array created
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	size = (sizeof(*str) * strlen(str));

	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
