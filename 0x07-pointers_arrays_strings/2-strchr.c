#include <stdlib.h>
/**
 * _strchr - locates a character in a string.
 * @s : String to be investigated
 * @c : character to be searched for
 * Return : Address of the first occurrence of @c if
 *           found else return NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}