#include "main.h"

/**
 * main - entry point
 * print_alphabet_x10 - prints the alphabet
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char y;
	int i = 1;

	while (i <= 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
