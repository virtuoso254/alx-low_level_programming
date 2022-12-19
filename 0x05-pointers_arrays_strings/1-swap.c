#include "main.h"

/**
 * swap_int - swaps the two integers
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
