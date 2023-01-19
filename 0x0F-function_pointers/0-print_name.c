#include "function_pointers.h"

/**
 * print_name - outputs the name
 * @name: pointer that points to name
 * @f: points to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
