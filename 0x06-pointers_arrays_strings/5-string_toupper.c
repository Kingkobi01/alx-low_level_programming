#include <string.h>
#include <ctype.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @c: string
 * Return: string
 */

char *string_toupper(char *c)
{
	int a = 0;

	while (c[a])
	{
		if (c[a] >= 97 && c[a] <= 122)
		{
			c[a] -= 32;
		}

		a++;
	}

	return (c);
}
