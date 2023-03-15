#include "main.h"
#include <stlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: row of the 2 dimentional array
 * @height: column of the 2 dimentional array
 * Return: a pointer to the 2 dimentional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * 8);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * 4);

		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
