#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @n: is the input
 * @separator: separator input
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
