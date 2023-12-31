#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a singly linked list
 * and sets the head to NULL
 * @head: pointer to a pointer to the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

}
