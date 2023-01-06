#include "main.h"
/**
 * helper - checks correctness
 * @i: integer
 * @n: number to get root of
 * Return: result
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - recursion
 * @n: return integer
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
