#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to a pointer to the list
 *
 * Return: head nodes data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int store;

	if (*head == NULL)
		return (0);

	store = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (store);
}
