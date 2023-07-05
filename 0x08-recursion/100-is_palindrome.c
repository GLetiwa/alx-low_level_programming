#include "main.h"

int string_length(char *s);
int is_palindrome_helper(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	int len = string_length(s);
		return (is_palindrome_helper(s, s + len - 1));
}

/**
 * string_length - finds the length of a string
 * @s: input string
 *
 * Return: length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * is_palindrome_helper - function to check if a string is a palindrome
 * @start: pointer to the start of the string
 * @end: pointer to the end of the string
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (is_palindrome_helper(start + 1, end - 1));
}
