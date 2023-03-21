#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function for character location
 * @s: searched string
 * @c: character to be found
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
