#include <unistd.h>

/**
 * _putchar - prints character to output
 * @c - the character printed
 * Return: 1 0n success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
