#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenation
 * @s1: string one
 * @s2: string two
 * Return: a pointer to both strings
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1 = 0, size2 = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size1] != '\0')
	{
		size2++;
	}
	s = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
	if (s == 0)
		return (0);
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
