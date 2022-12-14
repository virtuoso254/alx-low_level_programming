#include "main.h"

/**
 * _abs - computes absolute values of integers
 * @n: the number computed
 * Return: 0 success
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
