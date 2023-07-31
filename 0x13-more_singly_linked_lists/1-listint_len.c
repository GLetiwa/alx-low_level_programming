#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - lists elements of a linked list
 * @h:pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
