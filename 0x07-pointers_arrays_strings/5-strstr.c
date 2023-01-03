#include <stdlib.h>
#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystack : a pointer to the string to be searched
 * @needle : a pointer to a string containing
 *			the string to be searched
 * Return: pointer to the first occurrence in the
 *			string @s of any of the bytes in the string @accept
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
