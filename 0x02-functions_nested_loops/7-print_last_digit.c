#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the number checked
 * Return: 0 success
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last + -1;
	}
	_putchar(last + '0');
	return (last);
}
