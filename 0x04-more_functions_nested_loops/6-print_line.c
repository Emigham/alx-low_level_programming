#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@n: parameter
*Return:return nothing
*/

void print_line(int n)
{
	if (n <= 0)
	{

		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
