#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of string
 * @str: string to be measured
 *  Return: string length
 */
int _strlen(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * main - gets product
 * @argc: counts
 * @argv: lists
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned long int a, b, res;

	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	for (i = 0; i < )
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);
}
