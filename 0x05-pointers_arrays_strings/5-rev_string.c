#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int length = 0;
	char *y = s;

	while (*y != '\0')
	{
		length++;
		y++;
	}

	int i = length - 1;

	for (int t = i; t >= 0; t--)
	{
		putchar(s[t]);
	}

	putchar('\n');
}
