#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}

	grid = malloc(height * sizeof(int *));
	if (!grid)
	{
		return NULL;
	}

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return NULL;
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
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
