#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize, i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalSize = nmemb * size;

	p = malloc(totalSize);

	if (p != NULL)
	{
		for (i = 0; i < totalSize; i++)
		{
			p[i] = 0;
		}

	}

	return (p);

}
