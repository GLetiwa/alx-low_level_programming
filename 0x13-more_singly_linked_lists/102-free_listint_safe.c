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
	listint_t *ptr, *tmp;
	size_t size = 0;

	ptr = *h;

	if (h == NULL || *h == NULL)
		return (0);
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);

		size++;

		if (ptr == *h)
			break;

		ptr = tmp;
	}
	*h = NULL;

	return (size);
}
