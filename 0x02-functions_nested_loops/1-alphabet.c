#include "main.h"
/**
 * print_alphabet - print alphabet of letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph)
		alph++;
	}
	putchar('\n');
}	
