#include "main.h"

/**
 * _isdigit - prints the digit
 * @c: input number as integer
 * Return: last digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
