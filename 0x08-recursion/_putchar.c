#include <unistd.h>

/**
 * _putchar - outputs c
 * @c: character to be output
 * Return: 1 on success
 */

int _putchar(char c)
{
	return ( write(1, &c, 1));
}
