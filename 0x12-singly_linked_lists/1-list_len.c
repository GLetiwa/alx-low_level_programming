#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in list_t
 * @h: pointer to the haed of the list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
