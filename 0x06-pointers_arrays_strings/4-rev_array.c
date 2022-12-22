#include "main.h"
/**
 * reverse_array - changes order of array
 * @a: group reversed
 * @n: elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
