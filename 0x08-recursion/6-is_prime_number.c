#include "main.h"
/**
 * is_prime - to detect if an input number is a prime number.
 * @n: input number.
 * @c: iterator
 * Return:return 1 if n is a prime number. 0 if negative.
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
 * is_prime_number - to detect if an input number is a prime number.
 * @n: input number.
 * Return:return 1 if n is a prime number. 0 if negetive.
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
