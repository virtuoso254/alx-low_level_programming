#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory
 * @grid: grid pointer
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
