#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted
 * array using jump sort algorithm
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: value in search
 * Return: index of value, -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i, prev = 0;
	size_t start = (prev >= step) ? prev - step : 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	printf("Value checked array[%lu] = [%d]\n",
			prev, array[prev]);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
		{
			break;
		}
		printf("Value checked array[%lu] = [%d]\n",
				prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			start, prev);
	for (i = start; i <= prev && i < size && array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
