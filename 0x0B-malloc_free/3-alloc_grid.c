#include"main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (malloc(sizeof(int) * width));
		if (arr[i] == 0)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
