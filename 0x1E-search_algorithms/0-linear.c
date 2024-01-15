#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value
 * using linear algorithm
 * @array: pointer to the first element
 * @value: value in search
 * @size: size of the array
 * Return: index of the value, -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
