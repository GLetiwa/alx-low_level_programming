#include <stdio.h>

/**
 * add - adds two numbers
 * @a: first int
 * @b: second int
 * Return: sum fo the 2 numbers
 */
int add(int a, int b)
{

	return (a + b);
}
/**
 * sub - subtracts 2 numbers
 * @a: first int
 * @b: second int
 * Return: difference of the 2 numbers
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies 2 integers
 * @a: first int
 * @b: second int
 * Return: result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides 2 numbers
 * @a: first number
 * @b: second number
 * Return: results of the division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}
/**
 * mod - claculates the remainder of the division
 * @a: first int
 * @b: second int
 * Return: the remainder of the division
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}
