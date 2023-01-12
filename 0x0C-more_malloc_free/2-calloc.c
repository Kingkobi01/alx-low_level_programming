#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 * _calloc - ...
 * @nmemb : ...
 * @size : ...
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb > (UINT_MAX / size))
		return NULL;

	if (!ptr || nmemb == 0 || size == 0)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
