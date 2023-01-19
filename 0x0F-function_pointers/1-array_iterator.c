#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - performs a profram sequentially
 * @array: input
 * @size: array size
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
