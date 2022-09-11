#include <stdio.h>
/**
 * main - Entry point
 *
 *Return:return zero if no error and non zero if error
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf(("\n");
	return (0);
}
