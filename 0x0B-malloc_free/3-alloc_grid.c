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
	int **grid;
	int i, j;
	if (width <= 0 || height <= 0)
	{
		return NULL;
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return NULL;
	}
	i = 0;

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
			}
			free(grid);
			return NULL;
			j++;
		}

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return grid;
}
