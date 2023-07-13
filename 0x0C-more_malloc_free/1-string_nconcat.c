#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another
 * @s1: string input
 * @s2: string to concate from
 * @n: number of bytes from s2
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}

	while (n >= len2 && i < (len1 + len2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';

	return (s);
}
