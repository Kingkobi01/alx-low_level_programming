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
	unsigned long int i, j, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = 0;
	j = 0;

	while (s1[j] != '\0')
	{
		l++;
		j++;
	}

	ptr = malloc(((l + n) * sizeof(char)) + 1);

	if (n == 0)
	{
		ptr = strcpy(ptr, s1);
		return (ptr);
	}
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (l + n))
	{
		ptr[i] = s2[i - l];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
