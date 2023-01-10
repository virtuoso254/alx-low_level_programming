#include <stdio.h>

/**
 * main - prints the command line arguments
 * @argc: counts number of arguments
 * @argv: displays command line arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("the name of the program is: %s\n", argv[0]);

	return (0);
}
