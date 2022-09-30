#include <stdio.h>
/**
 * main - to print the number of arguments.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return:returns 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
