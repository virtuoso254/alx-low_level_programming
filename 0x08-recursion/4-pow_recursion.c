#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates value of x
 * @x: the number
 * @y: exponent
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
