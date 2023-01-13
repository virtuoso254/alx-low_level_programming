#include "main.h"
#include <stdlib.h>

/**
 * array_range - array with integer elements
 * @min: minimum integers
 * @max: maximum integers
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *arr, i, m = min;

	if (min > max)
		return (0);
	arr = malloc(sizeof(int) * (max - min + 1));

	if (!arr)
		return (0);
	i = 0;
	while (i <= max - min)
		arr[i++] = m++;
	return (arr);
}
