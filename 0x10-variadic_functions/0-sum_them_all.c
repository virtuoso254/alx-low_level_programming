#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums the totalintegers
 * @n: total input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count = 0, sum = 0;
	va_list mynumber;

	if (n == 0)
	{
		return (0);
	}

	va_start(mynumber, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(mynumber, int);
	}
	va_end(mynumber);
	return (sum);
}
