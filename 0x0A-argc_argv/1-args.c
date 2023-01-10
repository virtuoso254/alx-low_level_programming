#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: total arguments
 * @argv: lists arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
