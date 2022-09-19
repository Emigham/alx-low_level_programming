#include "main.h"

/**
 * _puts - to print a string
 * @str: string to print
 *
 * Description: prints a string
 * Return;returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar (10);
}
