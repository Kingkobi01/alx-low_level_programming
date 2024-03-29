#include <stdlib.h>

/**
 * array_iterator - ...
 * @array : ...
 * @size : ...
 * @action : ...
 * Return: ...
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array != NULL && action != NULL && size > 0)
	{
		for (k = 0; k < size; k++)
			action(array[k]);
	}
}
