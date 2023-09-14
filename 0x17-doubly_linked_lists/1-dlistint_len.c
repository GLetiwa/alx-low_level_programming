#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
