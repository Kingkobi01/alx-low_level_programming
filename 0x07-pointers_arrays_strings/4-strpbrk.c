#include <stdlib.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : a pointer to the string to be searched
 * @accept : a pointer to a string containing
 *			the set of characters to be searched
 * Return: pointer to the first occurrence in the
 *			string @s of any of the bytes in the string @accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]) != NULL)
		{
			return (s + i);
		}
	}
	return (NULL);
}
