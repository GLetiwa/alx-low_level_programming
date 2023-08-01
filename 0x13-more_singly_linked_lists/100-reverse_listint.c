#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer of a list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *prev = NULL;

	while (ptr != NULL)
	{
		*head = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = *head;
	}

	*head = prev;
	return (*head);
}
