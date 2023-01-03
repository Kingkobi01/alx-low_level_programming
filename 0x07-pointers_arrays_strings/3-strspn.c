#include <stdlib.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 * 			Works like a strspn
 * @s : a pointer to the string to be searched.
 * @accept : a pointer to a string containing
 * 			 the set of characters to be searched for
 * Return: number of bytes in the initial segment of @s
 * 			which consist only bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{

		if (strchr(accept, s[i]) == NULL)
			return (i);
	}
	return (i);
}