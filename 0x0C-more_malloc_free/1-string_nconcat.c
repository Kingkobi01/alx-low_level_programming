#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1 : ...
 * @s2 : ...
 * @n : ...
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(((strlen(s1) + n) * sizeof(char)) + 1);

	if (!ptr)
		return (NULL);

	i = 0;
	while (i < strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}

	while (i < (strlen(s1) + n))
	{
		ptr[i] = s2[i - strlen(s1)];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
