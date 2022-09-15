#include <stdio.h>
#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return: return nothing
*/

void print_square(int size)
{
	int incl, inc2;

	if (size > 0)
	{
		for  (incl = 0; incl < size; incl++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{

		putchar('\n');
	}
}
