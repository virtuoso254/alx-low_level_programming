#include <unistd.h>

/**
 * _putchar - outputs c
 * @c: the character 
 * Return: 1 on success
 */

int _putchar(char c)
{
	return ( write(1, &c, 1));
}
