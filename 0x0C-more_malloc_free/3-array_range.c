#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min values to be included
 * @max: maximum values to be included
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * (size));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);

}
