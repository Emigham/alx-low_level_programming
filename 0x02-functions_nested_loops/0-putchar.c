#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *myVar = "alx";

	while (*myVar)
	{
		_putchar (*myVar);
		myVar++;
	}
	_putchar ("\n");

	return (0);
}
