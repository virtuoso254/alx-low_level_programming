#include "main.h"

/**
 * _islower - returns the lowercase characters
 * else, return 0
 * @c: returns character c
 * Return: 1 for lowercase and 0 for the rest
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
