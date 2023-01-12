#include <stdlib.h>

/**
 * array_range - ...
 * @min : ...
 * @max : ...
 * Return: ...
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(((max + 1) - min) * sizeof(int));

	if (!ptr)
		return (NULL);

	i = 0;

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
