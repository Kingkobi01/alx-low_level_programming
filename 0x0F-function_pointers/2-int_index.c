#include <stdlib.h>
/**
 * int_index - ...
 * @array : ...
 * @size : ...
 * @cmp : ...
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
