#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str == NULL)
		return (NULL);


	while (str[size] != '\0')
		size++;


	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = str[i];

	s[size] = '\0';

	return (s);
}
