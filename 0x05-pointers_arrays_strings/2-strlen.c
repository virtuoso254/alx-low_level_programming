#include "main.h"

/**
 * _strlen - outputs string length
 * @s: string to be examined
 * Return: length of string
 */

int _strlen(char *s)
{
	int lenStr = 0;

	while (*s++)
		lenStr++;

	return (lenStr);
}
