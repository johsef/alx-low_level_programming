#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: column of 2D array
 * @height: row of 2D array
 * Return: return a pointer to 2D array, NULL if width or height is less than 1
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if ((height && width) < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
