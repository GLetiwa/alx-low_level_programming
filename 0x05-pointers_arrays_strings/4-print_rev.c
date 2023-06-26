#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int g;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (g = length; g > 0; g--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
