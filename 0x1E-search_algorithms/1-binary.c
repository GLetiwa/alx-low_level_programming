#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value using
 * binary search algorithm
 * @array: ptr to first element of the array
 * @size: size of the array
 * @value: value in search
 * Return: index of value, -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0, high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");

			}
		}
		printf("\n");
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
