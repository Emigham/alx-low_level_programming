#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checkes for alphabetic character
 *
 * @c: char type letter
 *
 * Return: return 0 on sucess and 1 on error
 */
int _isalpha(int c)
{
	int i = isalpha(int c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
