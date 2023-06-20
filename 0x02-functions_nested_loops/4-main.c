#include "main.h"
/**
 * _isalpha - shows 1 if the input is a
 * letter and in another case, shows 0
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
