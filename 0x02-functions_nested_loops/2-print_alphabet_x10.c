#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int alpha ='a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putcha('\n');
		i++
	}
}
