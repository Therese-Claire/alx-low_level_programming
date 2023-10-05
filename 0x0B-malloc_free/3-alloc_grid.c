#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width : width which is the row of the 2D array.
 * @height : height ehich is the column of the 2D array.
 *
 * Return: NULL on failure, or NULL if width or height is 0 or
 * negative, or pointer to a 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int *data;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	data = (int *) malloc(width * height * sizeof(int));
	if (data == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = data + i * width;

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
