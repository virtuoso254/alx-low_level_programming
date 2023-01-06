#include "main.h"

/**
 * is_prime - determines prime number
 * @n: input
 * @c: iterative element
 *  Return: 1 for prime and 0 for otherwise
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - outputs prime number
 * @n: integer input
 * Return: 1 for true and 0 for false
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
