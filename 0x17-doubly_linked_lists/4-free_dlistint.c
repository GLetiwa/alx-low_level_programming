#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees elements of a linked list
 * @head: pointer the head of a linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
