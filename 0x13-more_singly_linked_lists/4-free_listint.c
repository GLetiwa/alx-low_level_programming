#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a singly linked list
 * @head: ponter to a pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;

		free(ptr);
	}
}
