#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, index, new = 0, len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (index = 0; av[i][index]; index++)
			len++;
	}
	len += ac;

	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (index = 0; av[i][index]; index++)
	{
		concat[new] = av[i][index];
		new++;
	}
	if (concat[new] == '\0')
	{
		concat[new++] = '\n';
	}
	}

	return (concat);
}
