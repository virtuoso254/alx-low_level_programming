#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - check the code
 *  Return: 0 for success
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
