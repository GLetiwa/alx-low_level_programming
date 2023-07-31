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
	listint_t *ptr = *head;
	listint_t *next_n;

	if (head == NULL || *head == NULL)
		return;

	while (ptr != NULL)
	{
		next_n = ptr->next;
		free(ptr);
		ptr = next_n;
	}
	*head = NULL;
}
