#include "main.h"
/**
 * print_alphabet
 *
 * Return:returns void on sucess
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
