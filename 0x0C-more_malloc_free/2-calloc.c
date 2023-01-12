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

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);

		if (!ptr)
			return (NULL);

		memset(ptr, 0, 1);
		return (ptr);
	}

	if (nmemb > (UINT_MAX / size))
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
