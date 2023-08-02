#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list with a loop
 * @h: pointer to pointer of the list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t size = 0;
	int diff;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
