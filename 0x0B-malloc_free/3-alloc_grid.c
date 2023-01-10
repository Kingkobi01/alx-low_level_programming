#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @height : Outer array
 * @width : array of each outer element
 * Return: pointer to that grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if ((ptr + i) == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			*(*(ptr + i) + j) = 0;
		}
	}
	return (ptr);
}
