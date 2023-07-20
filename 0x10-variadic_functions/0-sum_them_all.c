#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns sum of all arguments
 * @n: The number of all arguments
 * @...: A variable number of arguments to calculate sum
 *
 * Return: 0 if n == 0, and return sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
