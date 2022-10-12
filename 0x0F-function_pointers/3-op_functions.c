#include "3-calc.h"

/**
 * op_add - to add two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to subctract two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:return difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:return multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:return division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - to calculate the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: the remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
