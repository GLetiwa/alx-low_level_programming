#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list elements;
	int j = 0;
	char *string, *sep = "";

	va_start(elements, format);

	if (format)
	{
		while (format[j] != '\0')
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(elements, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(elements, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(elements, double));
					break;
				case 's':
					string = va_arg(elements, char*);
					if (string  == NULL)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					j++;
					continue;
			}

			sep = (", ");
			j++;
		}
	}
	printf("\n");
	va_end(elements);

}
