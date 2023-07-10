#include "main.h"
#include <stdlib.h>
/**
 * str_concat - comines 2 input strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *size;
	int j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = k = 0;

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;

	size = malloc(sizeof(char) * (j + k + 1));

	j = k = 0;

	while (s1[j] != '\0')
	{
		size[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		size[j] = s2[k];
		j++;
		k++;
	}
	if (size[j] != '\0')
		size[j] = '\0';

	return (size);
}
