#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the number to be checked
 * Return: 1 for positive num and -1 for negative num
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}
