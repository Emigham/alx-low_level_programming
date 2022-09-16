#include <stdio.h>
#include "main.h"

/**
*print_triangle - prints a triangle
*@size:size parameter of traingle
*Return: returns nothing
*/

void print_traingle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		putchar('\n');
	} else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = size - i ; j > 0; j--)
			{
				putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
