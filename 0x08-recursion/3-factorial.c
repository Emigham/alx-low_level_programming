#include "main.h"
/**
 * factorial - to return the factorial of a given number.
 * @n: input number.
 * Return:return the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
