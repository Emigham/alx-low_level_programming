#include "varidiac_functions.h"

/**
 * sum_them_all - to return the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return:return sum of its parameter.
 */
int sum_them_all(const unsingned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n ==0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
