#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - to allocate memory.
 * @b: amount of bytes.
 *
 * Return:return pointer to the allocated memory.
 * on malloc failure, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
