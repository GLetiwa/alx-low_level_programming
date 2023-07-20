#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: the string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *x;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char*);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
