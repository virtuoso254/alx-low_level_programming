#include "main.h"

/**
 * *_memset - fills memory with contstant byte
 * @s: pointer to be returned
 * @b: value to fill the memory
 * @n: unsigned integer varriabe
 * Return: pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
