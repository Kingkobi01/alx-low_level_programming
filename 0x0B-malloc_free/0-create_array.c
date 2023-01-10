#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size : size of individual element in the array
 * @c : Character to be initialized with
 * Return: pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = malloc(size * sizeof(c));

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
