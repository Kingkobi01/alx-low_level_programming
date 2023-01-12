#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b : ...
 * Return: ...
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
