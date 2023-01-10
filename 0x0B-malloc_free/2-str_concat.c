#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1 : First string
 * @s2 : Second string
 * Return: pointer to a new array that
 * contains s1 & s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size, s1Size, s2Size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1Size = sizeof(*s1) * strlen(s1);
	s2Size = sizeof(*s2) * strlen(s2);
	size = (1 + s1Size + s2Size);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		*(ptr + i) = *(s1 + i);

	for (; i < (strlen(s1) + strlen(s2)); i++)
		*(ptr + i) = *(s2 + (i - strlen(s1)));

	return (ptr);
}
